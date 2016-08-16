#ifndef CONNECTDLG_H
#define CONNECTDLG_H

#include <QDialog>
#include <QMessageBox>
#include <QDesktopWidget>//桌面窗体头文件
#include <QRect>
#include <QtSql>
#include <selectdlg.h>
#include <unistd.h>//用于延时函数sleep()

class QSqlError;

namespace Ui {
class connectdlg;
}

class connectdlg : public QDialog
{
    Q_OBJECT

public:
    explicit connectdlg(QWidget *parent = 0);
    ~connectdlg();

    QString driverName() const;
    QString databaseName() const;
    QString userName() const;
    QString password() const;
    QString hostName() const;
    QString adminID() const;
    QString loginPassword() const;

    QSqlError addConnection(const QString &driver, const QString &dbName,
            const QString &host, const QString &user, const QString &passwd);

    void createDatabase();

private slots:
    void on_okButton_clicked();

    void on_exitButton_clicked();

    void on_adminRBtn_clicked();

    void on_userRBtn_clicked();

private:
    Ui::connectdlg *ui;

    selectdlg sdl;//功能选择对话框
};

#endif // CONNECTDLG_H
