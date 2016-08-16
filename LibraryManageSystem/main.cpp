#include "connectdlg.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectdlg dialog;

    dialog.show();//程序运行显示连接界面

    return a.exec();
}
