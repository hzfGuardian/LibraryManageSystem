#include "brwwindow.h"
#include "ui_brwwindow.h"

brwWindow::brwWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::brwWindow)
{
    ui->setupUi(this);
    setWindowTitle("借/还书");
}

brwWindow::~brwWindow()
{
    delete ui;
}

QString brwWindow::getCno() const
{
    return ui->editCno->text();
}

QString brwWindow::getBno() const
{
    return ui->editBno->text();
}

void brwWindow::on_cardQueryBtn_clicked()//查询按钮触发
{
    ui->textBrowser->clear();
    QSqlQuery query;
    query.prepare("SELECT bno FROM borrow WHERE cno = ? and return_date is null");//显示该借书证所有已借书籍
    query.bindValue(0, getCno());
    if(query.exec())
    {
        while(query.next())
            ui->textBrowser->append(query.value(0).toString());//在文本框显示搜索记录,append()自动换行
    }
}


void brwWindow::on_borrowBtn_clicked()//借书按钮触发
{
    ui->stateText->clear();//清除框中的内容

    QSqlQuery query;
    query.prepare("SELECT stock FROM book WHERE bno = ?");//显示该借书证所有已借书籍
    query.bindValue(0, getBno());
    if(query.exec())
    {
        query.next();
        int oldStock = query.value(0).toInt();//将所选记录(库存数)转化为int型
        if(oldStock > 0)//若还有库存
        {
            ui->stateText->append("Successfully Borrow!");
            //更新库存数量数据
            query.prepare("UPDATE book SET stock = stock - 1 WHERE bno = ?");
            query.bindValue(0, getBno());
            if(!query.exec())
                ui->textBrowser->append("Error!");
            //更新借书记录
            query.prepare("INSERT INTO borrow VALUES(?, ?, ?, null)");
            query.bindValue(0, getCno());
            query.bindValue(1, getBno());
            query.bindValue(2, getTime());
            if(!query.exec())
                ui->textBrowser->append("Update Error!");
        }
        else//若库存为0
        {
            ui->stateText->append("No Stock!");//输出无库存
            ui->stateText->append("The latest return time: ");
            query.prepare("SELECT max(return_date) FROM borrow WHERE bno = ?");//查询最近的还书时间
            query.bindValue(0, getBno());
            if(query.exec())
            {
                query.next();
                ui->stateText->append(query.value(0).toString());
            }
            else
                ui->stateText->append("Selection Error!");
        }
    }

    on_cardQueryBtn_clicked();
}

QString brwWindow::getTime()//用于获取当前系统时间
{
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    return time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式
}


void brwWindow::on_retBtn_clicked()//还书按钮触发
{
    ui->stateText->clear();//清除框中的内容

    QSqlQuery query;
    query.prepare("SELECT bno FROM borrow WHERE cno = ? and return_date is null");//显示该借书证所有已借书籍
    query.bindValue(0, getCno());
    //检查输入的书号是否存在于表中
    bool hasLent = false;
    if(query.exec())
    {
        while(query.next())
        {
            if(query.value(0).toString() == getBno()){
                hasLent = true;//若表中有书与之匹配
                break;
            }
        }
    }

    if(hasLent)//存在于表中
    {
        //更新borrow记录中的return_date
        query.prepare("UPDATE borrow SET return_date = ? WHERE bno = ? and return_date is null");
        query.bindValue(0, getTime());
        query.bindValue(1, getBno());
        if(query.exec())
        {
            //更新库存数+1
            query.prepare("SELECT stock FROM book WHERE bno = ?");//显示该借书证所有已借书籍
            query.bindValue(0, getBno());
            if(query.exec())
            {
                query.next();
                ui->stateText->append("Successfully Return.");
                query.prepare("UPDATE book SET stock = stock + 1 WHERE bno = ?");//更新库存数量数据
                query.bindValue(0, getBno());
                if(!query.exec())
                    ui->textBrowser->append("Error!");
            }
        }
    }
    else
        ui->stateText->setText("Return Error!");

    on_cardQueryBtn_clicked();
}
