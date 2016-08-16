#ifndef SELECTDLG_H
#define SELECTDLG_H

#include <QWidget>
#include <QDesktopWidget>
#include <QRect>
#include "insertwindow.h"
#include "querywindow.h"
#include "brwwindow.h"
#include "cardmanage.h"

namespace Ui {
class selectdlg;
}

class selectdlg : public QWidget
{
    Q_OBJECT

public:
    explicit selectdlg(QWidget *parent = 0);
    ~selectdlg();

    insertWindow inw;//图书入库界面
    queryWindow qw;//图书查询界面
    brwWindow bw;//借书界面
    cardmanage cmg;//借书证管理界面

private slots:
    void on_insertBtn_clicked();

    void on_selectBtn_clicked();

    void on_borrowBtn_clicked();

    void on_manageBtn_clicked();

private:
    Ui::selectdlg *ui;

};

#endif // SELECTDLG_H
