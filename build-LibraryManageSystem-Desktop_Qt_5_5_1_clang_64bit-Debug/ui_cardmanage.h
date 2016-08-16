/********************************************************************************
** Form generated from reading UI file 'cardmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDMANAGE_H
#define UI_CARDMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cardmanage
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *editAname;
    QLineEdit *editDept;
    QLineEdit *editCno;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *addBtn;
    QLabel *stateLbl;
    QGroupBox *groupBox;
    QTableView *tableView;
    QPushButton *delBtn;
    QLabel *delMessage;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QRadioButton *TRdBtn;
    QRadioButton *GRdBtn;
    QRadioButton *URdBtn;
    QRadioButton *ORdBtn;
    QMenuBar *menubar;
    QMenu *menuFile_F;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cardmanage)
    {
        if (cardmanage->objectName().isEmpty())
            cardmanage->setObjectName(QStringLiteral("cardmanage"));
        cardmanage->resize(800, 600);
        centralwidget = new QWidget(cardmanage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 20, 591, 181));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 321, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        editAname = new QLineEdit(formLayoutWidget);
        editAname->setObjectName(QStringLiteral("editAname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editAname);

        editDept = new QLineEdit(formLayoutWidget);
        editDept->setObjectName(QStringLiteral("editDept"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editDept);

        editCno = new QLineEdit(formLayoutWidget);
        editCno->setObjectName(QStringLiteral("editCno"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editCno);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        addBtn = new QPushButton(groupBox_2);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(10, 140, 121, 31));
        stateLbl = new QLabel(groupBox_2);
        stateLbl->setObjectName(QStringLiteral("stateLbl"));
        stateLbl->setGeometry(QRect(150, 140, 301, 31));
        formLayoutWidget->raise();
        addBtn->raise();
        stateLbl->raise();
        editCno->raise();
        editAname->raise();
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 210, 541, 291));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 40, 511, 171));
        delBtn = new QPushButton(groupBox);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setGeometry(QRect(40, 230, 121, 31));
        delMessage = new QLabel(groupBox);
        delMessage->setObjectName(QStringLiteral("delMessage"));
        delMessage->setGeometry(QRect(190, 230, 301, 31));
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(370, 50, 231, 111));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        TRdBtn = new QRadioButton(formLayoutWidget_2);
        TRdBtn->setObjectName(QStringLiteral("TRdBtn"));
        TRdBtn->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TRdBtn);

        GRdBtn = new QRadioButton(formLayoutWidget_2);
        GRdBtn->setObjectName(QStringLiteral("GRdBtn"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, GRdBtn);

        URdBtn = new QRadioButton(formLayoutWidget_2);
        URdBtn->setObjectName(QStringLiteral("URdBtn"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, URdBtn);

        ORdBtn = new QRadioButton(formLayoutWidget_2);
        ORdBtn->setObjectName(QStringLiteral("ORdBtn"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, ORdBtn);

        cardmanage->setCentralWidget(centralwidget);
        groupBox_2->raise();
        groupBox->raise();
        formLayoutWidget_2->raise();
        label->raise();
        label_3->raise();
        menubar = new QMenuBar(cardmanage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFile_F = new QMenu(menubar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        cardmanage->setMenuBar(menubar);
        statusbar = new QStatusBar(cardmanage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        cardmanage->setStatusBar(statusbar);

        menubar->addAction(menuFile_F->menuAction());

        retranslateUi(cardmanage);

        QMetaObject::connectSlotsByName(cardmanage);
    } // setupUi

    void retranslateUi(QMainWindow *cardmanage)
    {
        cardmanage->setWindowTitle(QApplication::translate("cardmanage", "MainWindow", 0));
        groupBox_2->setTitle(QApplication::translate("cardmanage", "Add Card", 0));
        label_2->setText(QApplication::translate("cardmanage", "                  Name:", 0));
        label_3->setText(QApplication::translate("cardmanage", "            Department:", 0));
        label->setText(QApplication::translate("cardmanage", "           Card Number:", 0));
        addBtn->setText(QApplication::translate("cardmanage", "Add", 0));
        stateLbl->setText(QApplication::translate("cardmanage", "State:", 0));
        groupBox->setTitle(QApplication::translate("cardmanage", "Delete Card", 0));
        delBtn->setText(QApplication::translate("cardmanage", "Delete", 0));
        delMessage->setText(QApplication::translate("cardmanage", "State:", 0));
        label_4->setText(QApplication::translate("cardmanage", "      Type:", 0));
        TRdBtn->setText(QApplication::translate("cardmanage", "Teacher", 0));
        GRdBtn->setText(QApplication::translate("cardmanage", "Graduate", 0));
        URdBtn->setText(QApplication::translate("cardmanage", "Undergraduate", 0));
        ORdBtn->setText(QApplication::translate("cardmanage", "Owner", 0));
        menuFile_F->setTitle(QApplication::translate("cardmanage", "File(F)", 0));
    } // retranslateUi

};

namespace Ui {
    class cardmanage: public Ui_cardmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDMANAGE_H
