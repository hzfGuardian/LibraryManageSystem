#ifndef CARDMANAGE_H
#define CARDMANAGE_H

#include <QMainWindow>
#include <QtSql>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QTableView>
#include <QMessageBox>

namespace Ui {
class cardmanage;
}

class cardmanage : public QMainWindow
{
    Q_OBJECT

public:
    explicit cardmanage(QWidget *parent = 0);
    ~cardmanage();

    void setupModel();
    void setupView();
    void displayTable();
    void addARow();

    QString getCno() const;
    QString getName() const;
    QString getDept() const;

    bool onBorrow(QString cno);

private slots:
    void on_TRdBtn_clicked();

    void on_GRdBtn_clicked();

    void on_URdBtn_clicked();

    void on_ORdBtn_clicked();

    void on_addBtn_clicked();

    void on_delBtn_clicked();

private:
    Ui::cardmanage *ui;
    QStandardItemModel *model;

    QString selectedType;//单选框中被选择的属性
};

#endif // CARDMANAGE_H
