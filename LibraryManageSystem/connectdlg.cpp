#include "connectdlg.h"
#include "ui_connectdlg.h"


connectdlg::connectdlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connectdlg)
{
    ui->setupUi(this);
    setWindowTitle("数据库连接");//设置窗口名
    ui->editPassword->setEchoMode(QLineEdit::Password);//设置密码框
    ui->loginPassword->setEchoMode(QLineEdit::Password);
    //默认普通用户登录
    ui->editAdmin->setEnabled(false);
    ui->loginPassword->setEnabled(false);

    QStringList drivers = QSqlDatabase::drivers();
    ui->comboDriver->addItems(drivers);//加入可用的驱动名称
    //默认参数
    ui->editDatabase->setText(tr("guardian"));
}

connectdlg::~connectdlg()
{
    delete ui;
}

//填写用户名等
QString connectdlg::driverName() const
{
    return ui->comboDriver->currentText();
}

QString connectdlg::databaseName() const
{
    return ui->editDatabase->text();
}

QString connectdlg::userName() const
{
    return ui->editUsername->text();
}

QString connectdlg::password() const
{
    return ui->editPassword->text();
}

QString connectdlg::hostName() const
{
    return ui->editHostname->text();
}

QString connectdlg::adminID() const
{
    return ui->editAdmin->text();
}

QString connectdlg::loginPassword() const
{
    return ui->loginPassword->text();
}

void connectdlg::createDatabase()//创建数据库
{
    QSqlQuery query;
    query.exec("create table book(bno char(8), category char(10), title varchar(40), press varchar(30), year int, author varchar(20), price decimal(7,2), total int, stock int, primary key (bno))");
    query.exec("create table card(cno char(7),name varchar(10),department varchar(40),type enum('T','U','G','O'),primary key (cno))");
    query.exec("create table borrow(cno char(7),bno char(8),borrow_date datetime,return_date datetime,primary key (cno, bno, borrow_date),foreign key (cno) references card(cno) on delete cascade on update cascade,foreign key (bno) references book(bno))");
    query.exec("create table administrator(ano char(7),aname varchar(20),password char(6),primary key (ano))");
}

//连接数据库
QSqlError connectdlg::addConnection(const QString &driver, const QString &dbName, const QString &host, const QString &user, const QString &passwd)
{
    QSqlError err;
    QSqlDatabase db = QSqlDatabase::addDatabase(driver);
    db.setDatabaseName(dbName);
    if (driver != "QSQLITE") {
        db.setHostName(host);
        db.setUserName(user);
        db.setPassword(passwd);
    }
    if(!db.open())
        err = db.lastError();
    return err;
}

void connectdlg::on_okButton_clicked()//按下连接按钮
{
    if(ui->comboDriver->currentText().isEmpty())
    {
        ui->stateLabel->setText(tr("Please select a database driver"));
        ui->comboDriver->setFocus();
    }
    else if(ui->comboDriver->currentText() == "QSQLITE")
    {
        QSqlError err = addConnection(driverName(),databaseName(),hostName(),userName(),password());
        if(err.type()!=QSqlError::NoError)
            ui->stateLabel->setText(err.text());
        else//连接数据库成功
        {
            if(ui->userRBtn->isChecked())
                sdl.qw.show();//直接进入查询界面
            /*
            if(ui->adminRBtn->isChecked())
            {
                QSqlQuery query;
                query.prepare("SELECT password FROM administrator where ano=?");//预留占位符
                query.bindValue(0, adminID());//填充占位符
                if(query.exec())
                {
                    query.next();
                    QString psw = query.value(0).toString();//两句话获取第一个表参数

                    if(psw==loginPassword())//密码匹配，则登录成功
                    {
                        ui->stateLabel->setText(tr("Login Successfully."));
                        sdl.show();//显示功能选择对话框
                        QDesktopWidget* pdw = QApplication::desktop();//获得桌面窗体
                        sdl.move((pdw->width()-sdl.width())/2,(pdw->height()-sdl.height())/2);//设置窗口显示在屏幕中央
                        sdl.raise();
                    }
                    else
                        QMessageBox::information(this, tr("Warning"),tr("Wrong Password!"));
                }
                else
                    QMessageBox::information(this, tr("Warning"),tr("Try Again"));
            }
            */
        }
        //accept();
    }
}

void connectdlg::on_exitButton_clicked()
{
    reject();
}

void connectdlg::on_adminRBtn_clicked()
{
    ui->editAdmin->setEnabled(true);
    ui->loginPassword->setEnabled(true);
}

void connectdlg::on_userRBtn_clicked()
{
    ui->editAdmin->setEnabled(false);
    ui->loginPassword->setEnabled(false);
}
