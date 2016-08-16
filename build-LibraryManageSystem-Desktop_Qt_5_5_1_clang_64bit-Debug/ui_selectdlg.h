/********************************************************************************
** Form generated from reading UI file 'selectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDLG_H
#define UI_SELECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectdlg
{
public:
    QPushButton *insertBtn;
    QPushButton *selectBtn;
    QPushButton *borrowBtn;
    QPushButton *manageBtn;

    void setupUi(QWidget *selectdlg)
    {
        if (selectdlg->objectName().isEmpty())
            selectdlg->setObjectName(QStringLiteral("selectdlg"));
        selectdlg->resize(415, 296);
        insertBtn = new QPushButton(selectdlg);
        insertBtn->setObjectName(QStringLiteral("insertBtn"));
        insertBtn->setGeometry(QRect(30, 30, 131, 71));
        selectBtn = new QPushButton(selectdlg);
        selectBtn->setObjectName(QStringLiteral("selectBtn"));
        selectBtn->setGeometry(QRect(260, 30, 131, 71));
        borrowBtn = new QPushButton(selectdlg);
        borrowBtn->setObjectName(QStringLiteral("borrowBtn"));
        borrowBtn->setGeometry(QRect(30, 190, 131, 71));
        manageBtn = new QPushButton(selectdlg);
        manageBtn->setObjectName(QStringLiteral("manageBtn"));
        manageBtn->setGeometry(QRect(260, 190, 131, 71));

        retranslateUi(selectdlg);

        QMetaObject::connectSlotsByName(selectdlg);
    } // setupUi

    void retranslateUi(QWidget *selectdlg)
    {
        selectdlg->setWindowTitle(QApplication::translate("selectdlg", "Form", 0));
        insertBtn->setText(QApplication::translate("selectdlg", "\345\233\276\344\271\246\345\205\245\345\272\223", 0));
        selectBtn->setText(QApplication::translate("selectdlg", "\345\233\276\344\271\246\346\237\245\350\257\242", 0));
        borrowBtn->setText(QApplication::translate("selectdlg", "\345\200\237/\350\277\230\344\271\246", 0));
        manageBtn->setText(QApplication::translate("selectdlg", "\345\200\237\344\271\246\350\257\201\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class selectdlg: public Ui_selectdlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDLG_H
