/********************************************************************************
** Form generated from reading UI file 'querywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYWINDOW_H
#define UI_QUERYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_queryWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *pressCheckBox;
    QCheckBox *titleCheckBox;
    QCheckBox *authorCheckBox;
    QCheckBox *yearCheckBox;
    QCheckBox *cateCheckBox;
    QCheckBox *priceCheckBox;
    QLineEdit *editCategory;
    QLabel *label2;
    QLineEdit *editTitle;
    QLineEdit *editAuthor;
    QLineEdit *editLowYear;
    QLabel *label1;
    QLineEdit *editLowPrice;
    QLineEdit *editPress;
    QLineEdit *editHighYear;
    QLineEdit *editHighPrice;
    QTableView *tableView;
    QPushButton *queryBtn;
    QPushButton *ascBtn;
    QPushButton *discBtn;
    QMenuBar *menubar;
    QMenu *menuFile_F;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *queryWindow)
    {
        if (queryWindow->objectName().isEmpty())
            queryWindow->setObjectName(QStringLiteral("queryWindow"));
        queryWindow->resize(800, 600);
        centralwidget = new QWidget(queryWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 751, 521));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 701, 113));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pressCheckBox = new QCheckBox(gridLayoutWidget);
        pressCheckBox->setObjectName(QStringLiteral("pressCheckBox"));

        gridLayout->addWidget(pressCheckBox, 0, 3, 1, 1);

        titleCheckBox = new QCheckBox(gridLayoutWidget);
        titleCheckBox->setObjectName(QStringLiteral("titleCheckBox"));

        gridLayout->addWidget(titleCheckBox, 0, 1, 1, 1);

        authorCheckBox = new QCheckBox(gridLayoutWidget);
        authorCheckBox->setObjectName(QStringLiteral("authorCheckBox"));

        gridLayout->addWidget(authorCheckBox, 0, 4, 1, 1);

        yearCheckBox = new QCheckBox(gridLayoutWidget);
        yearCheckBox->setObjectName(QStringLiteral("yearCheckBox"));

        gridLayout->addWidget(yearCheckBox, 0, 2, 1, 1);

        cateCheckBox = new QCheckBox(gridLayoutWidget);
        cateCheckBox->setObjectName(QStringLiteral("cateCheckBox"));

        gridLayout->addWidget(cateCheckBox, 0, 0, 1, 1);

        priceCheckBox = new QCheckBox(gridLayoutWidget);
        priceCheckBox->setObjectName(QStringLiteral("priceCheckBox"));

        gridLayout->addWidget(priceCheckBox, 0, 5, 1, 1);

        editCategory = new QLineEdit(gridLayoutWidget);
        editCategory->setObjectName(QStringLiteral("editCategory"));

        gridLayout->addWidget(editCategory, 1, 0, 1, 1);

        label2 = new QLabel(gridLayoutWidget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label2, 2, 5, 1, 1);

        editTitle = new QLineEdit(gridLayoutWidget);
        editTitle->setObjectName(QStringLiteral("editTitle"));

        gridLayout->addWidget(editTitle, 1, 1, 1, 1);

        editAuthor = new QLineEdit(gridLayoutWidget);
        editAuthor->setObjectName(QStringLiteral("editAuthor"));

        gridLayout->addWidget(editAuthor, 1, 4, 1, 1);

        editLowYear = new QLineEdit(gridLayoutWidget);
        editLowYear->setObjectName(QStringLiteral("editLowYear"));

        gridLayout->addWidget(editLowYear, 1, 2, 1, 1);

        label1 = new QLabel(gridLayoutWidget);
        label1->setObjectName(QStringLiteral("label1"));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        label1->setFont(font);
        label1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label1, 2, 2, 1, 1);

        editLowPrice = new QLineEdit(gridLayoutWidget);
        editLowPrice->setObjectName(QStringLiteral("editLowPrice"));

        gridLayout->addWidget(editLowPrice, 1, 5, 1, 1);

        editPress = new QLineEdit(gridLayoutWidget);
        editPress->setObjectName(QStringLiteral("editPress"));

        gridLayout->addWidget(editPress, 1, 3, 1, 1);

        editHighYear = new QLineEdit(gridLayoutWidget);
        editHighYear->setObjectName(QStringLiteral("editHighYear"));

        gridLayout->addWidget(editHighYear, 3, 2, 1, 1);

        editHighPrice = new QLineEdit(gridLayoutWidget);
        editHighPrice->setObjectName(QStringLiteral("editHighPrice"));

        gridLayout->addWidget(editHighPrice, 3, 5, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 210, 701, 261));
        queryBtn = new QPushButton(groupBox);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        queryBtn->setGeometry(QRect(330, 160, 98, 27));
        ascBtn = new QPushButton(groupBox);
        ascBtn->setObjectName(QStringLiteral("ascBtn"));
        ascBtn->setGeometry(QRect(150, 480, 151, 27));
        discBtn = new QPushButton(groupBox);
        discBtn->setObjectName(QStringLiteral("discBtn"));
        discBtn->setGeometry(QRect(430, 480, 151, 27));
        queryWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(queryWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile_F = new QMenu(menubar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        queryWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(queryWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        queryWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_F->menuAction());

        retranslateUi(queryWindow);

        QMetaObject::connectSlotsByName(queryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *queryWindow)
    {
        queryWindow->setWindowTitle(QApplication::translate("queryWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("queryWindow", "Query", 0));
        pressCheckBox->setText(QApplication::translate("queryWindow", "press", 0));
        titleCheckBox->setText(QApplication::translate("queryWindow", "title", 0));
        authorCheckBox->setText(QApplication::translate("queryWindow", "author", 0));
        yearCheckBox->setText(QApplication::translate("queryWindow", "year", 0));
        cateCheckBox->setText(QApplication::translate("queryWindow", "category", 0));
        priceCheckBox->setText(QApplication::translate("queryWindow", "price", 0));
        label2->setText(QApplication::translate("queryWindow", "~", 0));
        label1->setText(QApplication::translate("queryWindow", "~", 0));
        queryBtn->setText(QApplication::translate("queryWindow", "Query", 0));
        ascBtn->setText(QApplication::translate("queryWindow", "Order By ASC", 0));
        discBtn->setText(QApplication::translate("queryWindow", "Order By DISC", 0));
        menuFile_F->setTitle(QApplication::translate("queryWindow", "File(F)", 0));
    } // retranslateUi

};

namespace Ui {
    class queryWindow: public Ui_queryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWINDOW_H
