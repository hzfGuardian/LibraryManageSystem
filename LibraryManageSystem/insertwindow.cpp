#include "insertwindow.h"
#include "ui_insertwindow.h"

insertWindow::insertWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::insertWindow)
{
    ui->setupUi(this);
    setWindowTitle("图书入库");
}

insertWindow::~insertWindow()
{
    delete ui;
}

QString insertWindow::getBno() const
{
    return ui->editBno->text();
}

QString insertWindow::getCategory() const
{
    return ui->editCategory->text();
}

QString insertWindow::getTitle() const
{
    return ui->editTitle->text();
}

QString insertWindow::getPress() const
{
    return ui->editPress->text();
}

QString insertWindow::getYear() const
{
    return ui->editYear->text();
}

QString insertWindow::getAuthor() const
{
    return ui->editAuthor->text();
}

QString insertWindow::getPrice() const
{
    return ui->editPrice->text();
}

QString insertWindow::getTotal() const
{
    return ui->editTotal->text();
}

QString insertWindow::getStock() const
{
    return ui->editStock->text();
}

QString insertWindow::getFileName() const
{
    return ui->editFileName->text();
}

bool insertWindow::inTable(QString bno)
{
    QSqlQuery query;
    query.prepare("SELECT FROM book WHERE bno = ?");
    query.bindValue(0, bno);
    if(query.exec())
    {
        return (bool)query.next();
    }
    else
        return false;
}

void insertWindow::on_insertBtn_clicked()//插入单条记录
{
    QSqlQuery query;
    if(inTable(getBno()))
    {
        query.prepare(
  "UPDATE TABLE book SET total = total + 1 and stock = stock + 1 WHERE bno = ?");
        query.bindValue(0, getBno());
        if(query.exec())
            ui->stateLbl->setText(tr("Insert Successfully."));
        else
            ui->stateLbl->setText(tr("Failed insertion!"));
    }
    else
    {
        query.prepare("INSERT INTO book VALUES(?,?,?,?,?,?,?,?,?)");//预留占位符
        //填充占位符
        query.bindValue(0,getBno());
        query.bindValue(1,getCategory());
        query.bindValue(2,getTitle());
        query.bindValue(3,getPress());
        query.bindValue(4,getYear());
        query.bindValue(5,getAuthor());
        query.bindValue(6,getPrice());
        query.bindValue(7,getTotal());
        query.bindValue(8,getStock());
        //检查插入记录操作是否成功
        if(query.exec())
            ui->stateLbl->setText(tr("Insert Successfully."));
        else
            ui->stateLbl->setText(tr("Failed insertion!"));
    }
}


void insertWindow::on_mulInsertBtn_clicked()//插入多条记录
{
    QFile file(getFileName());//获取文件名并初始化对象file
    if(file.open(QIODevice::ReadOnly))//以只读方式打开文件
    {
        QSqlQuery query;//QSqlQuery类对象用于插入记录
        char buffer[2048];//读取一行内容
        bool flag = true;
        while(!file.atEnd())//未到达文件结尾
        {
            //返回读取一行的子节数，然后指针指向下一行文本
            qint64 lineLen = file.readLine(buffer,sizeof(buffer));
            if(lineLen != -1)//读取失败readLine()返回-1，不等则读取成功
            {
                QString sqlStr = "INSERT INTO book VALUES";
                sqlStr += buffer;
                if(!query.exec(sqlStr))//插入操作失败
                {
                    ui->mulStateLbl->setText("Failed insertion!");
                    flag = false;
                }
            }
        }
        if(flag)//flag始终未被设置成0,说明全部插入成功
            ui->mulStateLbl->setText("All Insertions Successful!");
    }
    else//打开文件失败
        ui->mulStateLbl->setText("Fail to open the file !");

    file.close();//关闭文件
}

void insertWindow::on_selectFileBtn_clicked()
{
    //通过标准文件对话框获得所需要文件的文件名功能
    QString file = QFileDialog::getOpenFileName(this,
        "Open Image File",
        ".",
        "Image files (*.txt *.doc *.docx *.xls *.xlsx);;All files (*.*)");
    ui->editFileName->setText(file);//将文件名显示在文件名输入框内
}
