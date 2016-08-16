#include "cardmanage.h"
#include "ui_cardmanage.h"

cardmanage::cardmanage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cardmanage)
{
    ui->setupUi(this);

    selectedType = "T";
    setWindowTitle("借书证管理");
    setupModel();
    setupView();//将视图嵌入到tableView中
}

cardmanage::~cardmanage()
{
    delete model;
    delete ui;
}

void cardmanage::setupModel()
{
    model = new QStandardItemModel(4,4,this);
    //设置表头
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cno"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("name"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("department"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("type"));
    //设置表格内容不可编辑
    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
}

void cardmanage::setupView()
{
    ui->tableView->setModel(model);
    QItemSelectionModel *selectionModel = new QItemSelectionModel(model);

    connect(selectionModel,SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
            ui->tableView,SLOT(selectionChanged(QItemSelection,QItemSelection)));

    delete selectionModel;
}

void cardmanage::displayTable()
{
    model->removeRows(0, model->rowCount(QModelIndex()), QModelIndex());//删除所有行
    QString cno, name, department, type;
    QSqlQuery query;
    if(query.exec("SELECT * FROM card"))
    {
        int row = 0;
        while(query.next())
        {
            cno = query.value(0).toString();
            name = query.value(1).toString();
            department = query.value(2).toString();
            type = query.value(3).toString();

            model->insertRows(row,1,QModelIndex());
            model->setData(model->index(row, 0, QModelIndex()), cno);
            model->setData(model->index(row, 1, QModelIndex()), name);
            model->setData(model->index(row, 2, QModelIndex()), department);
            model->setData(model->index(row, 3, QModelIndex()), type);

            row++;
        }
    }
}

//获取编辑框中的名
QString cardmanage::getCno() const
{
    return ui->editCno->text();
}

QString cardmanage::getName() const
{
    return ui->editAname->text();
}

QString cardmanage::getDept() const
{
    return ui->editDept->text();
}

//单选框被选中
void cardmanage::on_TRdBtn_clicked()
{
    ui->TRdBtn->setChecked(true);//设置单选框被选中
    selectedType = "T";
}

void cardmanage::on_GRdBtn_clicked()
{
    ui->GRdBtn->setChecked(true);
    selectedType = "G";
}

void cardmanage::on_URdBtn_clicked()
{
    ui->URdBtn->setChecked(true);
    selectedType = "U";
}

void cardmanage::on_ORdBtn_clicked()
{
    ui->ORdBtn->setChecked(true);
    selectedType = "O";
}

void cardmanage::on_addBtn_clicked()
{
    QSqlQuery query;
    query.prepare("INSERT INTO card VALUES(?,?,?,?)");
    query.bindValue(0,getCno());
    query.bindValue(1,getName());
    query.bindValue(2,getDept());
    query.bindValue(3,selectedType);
    if(query.exec()){
        ui->stateLbl->setText(tr("Success"));//借书证添加成功
        addARow();
    }
    else
        QMessageBox::information(this, tr("Warning"),tr("Failed!"));
}

void cardmanage::addARow()
{
    int row = model->rowCount(QModelIndex());//获取要插入的行号
    model->insertRows(row, 1, QModelIndex());//插入一行内容
    model->setData(model->index(row, 0, QModelIndex()), getCno());
    model->setData(model->index(row, 1, QModelIndex()), getName());
    model->setData(model->index(row, 2, QModelIndex()), getDept());
    model->setData(model->index(row, 3, QModelIndex()), selectedType);
}

bool cardmanage::onBorrow(QString cno)//该卡是否有书未还
{
    QSqlQuery query;
    query.prepare("SELECT * FROM borrow WHERE cno = ? AND return_date is null");
    query.bindValue(0, cno);
    if(query.exec())
    {
        if(query.next())
            return true;
    }
    return false;
}

void cardmanage::on_delBtn_clicked()
{
    QModelIndexList selection = ui->tableView->selectionModel()->selectedRows(0);
    if(!selection.empty())//判断是否在表中选中一条记录
    {
        QModelIndex idIndex = selection.at(0);
        QString cno = idIndex.data().toString();

        if(onBorrow(cno)){
            ui->delMessage->setText(tr("On borrow! Fail to Delete!"));
            return;
        }

        model->removeRow(idIndex.row());//删除表格显示记录，但不删除实际记录
        //真正的删除
        QSqlQuery query;
        query.prepare("DELETE FROM card WHERE cno = ?");
        query.bindValue(0, cno);
        if(query.exec())//执行删除操作成功
            ui->delMessage->setText(tr("Delete Successfully."));
        else
            ui->delMessage->setText(tr("Fail to Delete!"));
    }
}
