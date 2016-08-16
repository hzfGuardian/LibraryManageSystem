#include "selectdlg.h"
#include "ui_selectdlg.h"

selectdlg::selectdlg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selectdlg)
{
    ui->setupUi(this);
    setWindowTitle("功能选择");
}

selectdlg::~selectdlg()
{
    delete ui;
}

void selectdlg::on_insertBtn_clicked()
{
    inw.show();
    QDesktopWidget* pdw = QApplication::desktop();//获得桌面窗体
    inw.move((pdw->width()-inw.width())/2,(pdw->height()-inw.height())/2);//设置窗口显示在屏幕中央
}

void selectdlg::on_selectBtn_clicked()
{
    qw.show();
}

void selectdlg::on_borrowBtn_clicked()
{
    bw.show();
}

void selectdlg::on_manageBtn_clicked()
{
    cmg.show();
    cmg.displayTable();//显示借书证列表
}
