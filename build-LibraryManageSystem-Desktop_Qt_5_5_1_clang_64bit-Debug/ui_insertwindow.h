/********************************************************************************
** Form generated from reading UI file 'insertwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTWINDOW_H
#define UI_INSERTWINDOW_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insertWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *editBno;
    QLabel *label_2;
    QLineEdit *editCategory;
    QLabel *label_3;
    QLineEdit *editTitle;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *editYear;
    QLabel *label_6;
    QLineEdit *editAuthor;
    QLabel *label_7;
    QLineEdit *editPrice;
    QLabel *label_8;
    QLineEdit *editTotal;
    QLabel *label_9;
    QLineEdit *editStock;
    QLineEdit *editPress;
    QPushButton *insertBtn;
    QLabel *stateLbl;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QLineEdit *editFileName;
    QLabel *mulStateLbl;
    QToolButton *selectFileBtn;
    QPushButton *mulInsertBtn;
    QMenuBar *menubar;
    QMenu *menuFile_F;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *insertWindow)
    {
        if (insertWindow->objectName().isEmpty())
            insertWindow->setObjectName(QStringLiteral("insertWindow"));
        insertWindow->resize(797, 469);
        centralwidget = new QWidget(insertWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 391, 391));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 30, 361, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        editBno = new QLineEdit(formLayoutWidget);
        editBno->setObjectName(QStringLiteral("editBno"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editBno);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        editCategory = new QLineEdit(formLayoutWidget);
        editCategory->setObjectName(QStringLiteral("editCategory"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editCategory);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        editTitle = new QLineEdit(formLayoutWidget);
        editTitle->setObjectName(QStringLiteral("editTitle"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editTitle);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        editYear = new QLineEdit(formLayoutWidget);
        editYear->setObjectName(QStringLiteral("editYear"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editYear);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        editAuthor = new QLineEdit(formLayoutWidget);
        editAuthor->setObjectName(QStringLiteral("editAuthor"));

        formLayout->setWidget(5, QFormLayout::FieldRole, editAuthor);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        editPrice = new QLineEdit(formLayoutWidget);
        editPrice->setObjectName(QStringLiteral("editPrice"));

        formLayout->setWidget(6, QFormLayout::FieldRole, editPrice);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        editTotal = new QLineEdit(formLayoutWidget);
        editTotal->setObjectName(QStringLiteral("editTotal"));

        formLayout->setWidget(7, QFormLayout::FieldRole, editTotal);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        editStock = new QLineEdit(formLayoutWidget);
        editStock->setObjectName(QStringLiteral("editStock"));

        formLayout->setWidget(8, QFormLayout::FieldRole, editStock);

        editPress = new QLineEdit(formLayoutWidget);
        editPress->setObjectName(QStringLiteral("editPress"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editPress);

        insertBtn = new QPushButton(groupBox);
        insertBtn->setObjectName(QStringLiteral("insertBtn"));
        insertBtn->setGeometry(QRect(30, 340, 121, 31));
        stateLbl = new QLabel(groupBox);
        stateLbl->setObjectName(QStringLiteral("stateLbl"));
        stateLbl->setGeometry(QRect(230, 340, 141, 31));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 50, 301, 231));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 30, 121, 31));
        editFileName = new QLineEdit(groupBox_2);
        editFileName->setObjectName(QStringLiteral("editFileName"));
        editFileName->setGeometry(QRect(10, 70, 221, 31));
        mulStateLbl = new QLabel(groupBox_2);
        mulStateLbl->setObjectName(QStringLiteral("mulStateLbl"));
        mulStateLbl->setGeometry(QRect(60, 170, 231, 31));
        selectFileBtn = new QToolButton(groupBox_2);
        selectFileBtn->setObjectName(QStringLiteral("selectFileBtn"));
        selectFileBtn->setGeometry(QRect(240, 70, 51, 31));
        mulInsertBtn = new QPushButton(centralwidget);
        mulInsertBtn->setObjectName(QStringLiteral("mulInsertBtn"));
        mulInsertBtn->setGeometry(QRect(500, 170, 121, 31));
        insertWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(insertWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 23));
        menuFile_F = new QMenu(menubar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        insertWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(insertWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        insertWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_F->menuAction());

        retranslateUi(insertWindow);

        QMetaObject::connectSlotsByName(insertWindow);
    } // setupUi

    void retranslateUi(QMainWindow *insertWindow)
    {
        insertWindow->setWindowTitle(QApplication::translate("insertWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("insertWindow", "Single Insertion", 0));
        label->setText(QApplication::translate("insertWindow", "             Book number:", 0));
        label_2->setText(QApplication::translate("insertWindow", "                Category:", 0));
        label_3->setText(QApplication::translate("insertWindow", "                   Title:", 0));
        label_4->setText(QApplication::translate("insertWindow", "                  Press:", 0));
        label_5->setText(QApplication::translate("insertWindow", "                   Year:", 0));
        label_6->setText(QApplication::translate("insertWindow", "                 Author:", 0));
        label_7->setText(QApplication::translate("insertWindow", "                  Price:", 0));
        label_8->setText(QApplication::translate("insertWindow", "                  Total:", 0));
        label_9->setText(QApplication::translate("insertWindow", "                 Stock:", 0));
        insertBtn->setText(QApplication::translate("insertWindow", "Insert", 0));
        stateLbl->setText(QApplication::translate("insertWindow", "State:", 0));
        groupBox_2->setTitle(QApplication::translate("insertWindow", " Multiple Insertion", 0));
        label_10->setText(QApplication::translate("insertWindow", "Select File :", 0));
        mulStateLbl->setText(QApplication::translate("insertWindow", "State: ", 0));
        selectFileBtn->setText(QApplication::translate("insertWindow", "...", 0));
        mulInsertBtn->setText(QApplication::translate("insertWindow", "Insert", 0));
        menuFile_F->setTitle(QApplication::translate("insertWindow", "File(F)", 0));
    } // retranslateUi

};

namespace Ui {
    class insertWindow: public Ui_insertWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTWINDOW_H
