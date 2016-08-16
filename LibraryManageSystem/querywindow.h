#ifndef QUERYWINDOW_H
#define QUERYWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QTableView>

namespace Ui {
class queryWindow;
}

class queryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit queryWindow(QWidget *parent = 0);
    ~queryWindow();

    void initQueryWindow();//初始化窗口
    void setupModel();
    void setupView();

    int countSelected();

    QString getCategory() const;
    QString getTitle() const;
    QString getLowYear() const;
    QString getHighYear() const;
    QString getPress() const;
    QString getAuthor() const;
    QString getLowPrice() const;
    QString getHighPrice() const;

    void displayTable(QString str);

private slots:
    void on_cateCheckBox_clicked();

    void on_titleCheckBox_clicked();

    void on_yearCheckBox_clicked();

    void on_pressCheckBox_clicked();

    void on_authorCheckBox_clicked();

    void on_priceCheckBox_clicked();

    void on_queryBtn_clicked();

    void on_ascBtn_clicked();

    void on_discBtn_clicked();

private:
    Ui::queryWindow *ui;

    QStandardItemModel *model;
    QString qStr;//查询语句字符串变量
};

#endif // QUERYWINDOW_H
