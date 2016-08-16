/********************************************************************************
** Form generated from reading UI file 'brwwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRWWINDOW_H
#define UI_BRWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_brwWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editCno;
    QPushButton *cardQueryBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *editBno;
    QPushButton *borrowBtn;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextBrowser *stateText;
    QPushButton *retBtn;
    QMenuBar *menubar;
    QMenu *menuFile_F;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *brwWindow)
    {
        if (brwWindow->objectName().isEmpty())
            brwWindow->setObjectName(QStringLiteral("brwWindow"));
        brwWindow->resize(800, 600);
        centralwidget = new QWidget(brwWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 681, 341));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 281, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        editCno = new QLineEdit(horizontalLayoutWidget);
        editCno->setObjectName(QStringLiteral("editCno"));

        horizontalLayout->addWidget(editCno);

        cardQueryBtn = new QPushButton(groupBox);
        cardQueryBtn->setObjectName(QStringLiteral("cardQueryBtn"));
        cardQueryBtn->setGeometry(QRect(100, 80, 98, 27));
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(360, 30, 281, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        editBno = new QLineEdit(horizontalLayoutWidget_2);
        editBno->setObjectName(QStringLiteral("editBno"));

        horizontalLayout_2->addWidget(editBno);

        borrowBtn = new QPushButton(groupBox);
        borrowBtn->setObjectName(QStringLiteral("borrowBtn"));
        borrowBtn->setGeometry(QRect(370, 80, 98, 27));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 150, 281, 171));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 281, 21));
        stateText = new QTextBrowser(groupBox);
        stateText->setObjectName(QStringLiteral("stateText"));
        stateText->setGeometry(QRect(360, 150, 281, 91));
        retBtn = new QPushButton(groupBox);
        retBtn->setObjectName(QStringLiteral("retBtn"));
        retBtn->setGeometry(QRect(520, 80, 98, 27));
        brwWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(brwWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile_F = new QMenu(menubar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        brwWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(brwWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        brwWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_F->menuAction());

        retranslateUi(brwWindow);

        QMetaObject::connectSlotsByName(brwWindow);
    } // setupUi

    void retranslateUi(QMainWindow *brwWindow)
    {
        brwWindow->setWindowTitle(QApplication::translate("brwWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("brwWindow", "Borrow/Return", 0));
        label->setText(QApplication::translate("brwWindow", "Card Number:", 0));
        cardQueryBtn->setText(QApplication::translate("brwWindow", "Query", 0));
        label_2->setText(QApplication::translate("brwWindow", "BookNumber:", 0));
        borrowBtn->setText(QApplication::translate("brwWindow", "Borrow", 0));
        label_3->setText(QApplication::translate("brwWindow", "Corresponding Book Number:", 0));
        retBtn->setText(QApplication::translate("brwWindow", "Return", 0));
        menuFile_F->setTitle(QApplication::translate("brwWindow", "File(F)", 0));
    } // retranslateUi

};

namespace Ui {
    class brwWindow: public Ui_brwWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRWWINDOW_H
