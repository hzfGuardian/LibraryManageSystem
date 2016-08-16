#include "querywindow.h"
#include "ui_querywindow.h"

queryWindow::queryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::queryWindow)
{
    ui->setupUi(this);

    setWindowTitle("图书查询");
    initQueryWindow();
    setupModel();
    setupView();
}

queryWindow::~queryWindow()
{
    delete model;
    delete ui;
}

void queryWindow::initQueryWindow()//将所有输入框设置为不可编辑
{
    ui->editCategory->setEnabled(false);
    ui->editTitle->setEnabled(false);
    ui->editLowYear->setEnabled(false);
    ui->editHighYear->setEnabled(false);
    ui->editPress->setEnabled(false);
    ui->editAuthor->setEnabled(false);
    ui->editLowPrice->setEnabled(false);
    ui->editHighPrice->setEnabled(false);
}

void queryWindow::setupModel()//构建model框架，设置表头
{
    model = new QStandardItemModel(0,9,this);
    //设置表头
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("bno"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("category"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("title"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("press"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("year"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("author"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("price"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("total"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("stock"));

    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);//设置表格内容不可编辑
}

void queryWindow::setupView()//设置tableview视图，将model添加
{
    ui->tableView->setModel(model);
    QItemSelectionModel *selectionModel = new QItemSelectionModel(model);

    connect(selectionModel,SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
            ui->tableView,SLOT(selectionChanged(QItemSelection,QItemSelection)));

    delete selectionModel;
}


//返回输入框中的内容
QString queryWindow::getCategory() const
{
    return ui->editCategory->text();
}

QString queryWindow::getTitle() const
{
    return ui->editTitle->text();
}

QString queryWindow::getLowYear() const
{
    return ui->editLowYear->text();
}

QString queryWindow::getHighYear() const
{
    return ui->editHighYear->text();
}

QString queryWindow::getPress() const
{
    return ui->editPress->text();
}

QString queryWindow::getAuthor() const
{
    return ui->editAuthor->text();
}

QString queryWindow::getLowPrice() const
{
    return ui->editLowPrice->text();
}

QString queryWindow::getHighPrice() const
{
    return ui->editHighPrice->text();
}

//设置复选框选中或未选中事件
//若选中则设为enabled，反之false
void queryWindow::on_cateCheckBox_clicked()
{
    ui->editCategory->setEnabled(ui->cateCheckBox->isChecked());
}

void queryWindow::on_titleCheckBox_clicked()
{
    ui->editTitle->setEnabled(ui->titleCheckBox->isChecked());
}

void queryWindow::on_yearCheckBox_clicked()
{
    ui->editLowYear->setEnabled(ui->yearCheckBox->isChecked());
    ui->editHighYear->setEnabled(ui->yearCheckBox->isChecked());
}

void queryWindow::on_pressCheckBox_clicked()
{
    ui->editPress->setEnabled(ui->pressCheckBox->isChecked());
}

void queryWindow::on_authorCheckBox_clicked()
{
    ui->editAuthor->setEnabled(ui->authorCheckBox->isChecked());
}

void queryWindow::on_priceCheckBox_clicked()
{
    ui->editLowPrice->setEnabled(ui->priceCheckBox->isChecked());
    ui->editHighPrice->setEnabled(ui->priceCheckBox->isChecked());
}

int queryWindow::countSelected()//计算被选中的复选框个数
{
    return ui->cateCheckBox->isChecked()
            + ui->titleCheckBox->isChecked()
            + ui->yearCheckBox->isChecked()
            + ui->pressCheckBox->isChecked()
            + ui->authorCheckBox->isChecked()
            + ui->priceCheckBox->isChecked();
}

void queryWindow::on_queryBtn_clicked()//按下查询按钮
{
    //形成SQL select语句字符串
    const int count = countSelected();//获取被选中的复选框个数
    int flag = count;//标志

    if(count==0)//没选中任何复选框，则显示所有书的信息
        qStr = "SELECT * FROM book";
    else
    {
        qStr = "SELECT * FROM book WHERE ";

        if(ui->cateCheckBox->isChecked())
        {
            qStr += "category = '";
            qStr += getCategory();
            qStr += "'";//第二个单引号
            if(flag!=1&&flag!=0){
                qStr += " and ";
                flag--;
            }

        }
        if(ui->titleCheckBox->isChecked())
        {
            qStr += "title = '";
            qStr += getTitle();
            qStr += "'";
            if(flag!=1&&flag!=0){
                qStr += " and ";
                flag--;
            }
        }
        if(ui->yearCheckBox->isChecked())
        {
            qStr += "year BETWEEN ";
            qStr += getLowYear();
            qStr += " AND ";
            qStr += getHighYear();

            if(flag!=1&&flag!=0){
                qStr += " and ";
                flag--;
            }
        }
        if(ui->pressCheckBox->isChecked())
        {
            qStr += "press = '";
            qStr += getPress();
            qStr += "'";
            if(flag!=1&&flag!=0){
                qStr += " and ";
                flag--;
            }
        }
        if(ui->authorCheckBox->isChecked())
        {
            qStr += "author = '";
            qStr += getAuthor();
            qStr += "'";
            if(flag!=1&&flag!=0){
                qStr += " and ";
                flag--;
            }
        }
        if(ui->priceCheckBox->isChecked())
        {
            qStr += "price BETWEEN ";
            qStr += getLowPrice();
            qStr += " AND ";
            qStr += getHighPrice();

            if(flag!=1&&flag!=0){
                qStr += " and ";
                flag--;
            }
        }
    }
    //查询
    displayTable(qStr + " ORDER BY bno ASC");
}

void queryWindow::on_ascBtn_clicked()//升序按钮
{
    QModelIndexList selection = ui->tableView->selectionModel()->selectedColumns(0);
    if(!selection.empty())//判断是否在表中选中一条记录
    {
        QModelIndex idIndex = selection.at(0);
        //qDebug()<<idIndex.column();//获取所选中的当前列号
        QString orderStr = qStr;
        QString s = model->headerData(idIndex.column(), Qt::Horizontal).toString();//返回了表头
        orderStr += (" ORDER BY " + s + " ASC");
        QSqlQuery query;
        if(query.exec(orderStr))
            displayTable(orderStr);
        else
            qDebug()<<"Error";
    }
}

void queryWindow::on_discBtn_clicked()//降序按钮
{
    QModelIndexList selection = ui->tableView->selectionModel()->selectedColumns(0);
    if(!selection.empty())//判断是否在表中选中一条记录
    {
        QModelIndex idIndex = selection.at(0);
        //idIndex.column();获取所选中的当前列号
        QString orderStr = qStr;
        QString s = model->headerData(idIndex.column(), Qt::Horizontal).toString();//返回了表头
        orderStr += (" ORDER BY " + s + " DESC");
        QSqlQuery query;
        if(query.exec(orderStr))
            displayTable(orderStr);
        else
            qDebug()<<"Error";
    }
}

void queryWindow::displayTable(QString str)
{
    model->removeRows(0, model->rowCount());//清除表中数据, 删除第0行起共N行数据

    QSqlQuery query;
    if(query.exec(str))
    {
        int row = 0;
        while(query.next())
        {
            model->insertRows(row, 1, QModelIndex());//插入一行数据
            for(int i=0; i<9; i++)
                model->setData(model->index(row, i, QModelIndex()), query.value(i).toString());

            row++;
        }
    }
    else
        qDebug()<<"Error!";//学会用messagebox
}
