/********************************************************************************
** Form generated from reading UI file 'connectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDLG_H
#define UI_CONNECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connectdlg
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboDriver;
    QLabel *label_2;
    QLineEdit *editDatabase;
    QLabel *label_3;
    QLineEdit *editUsername;
    QLabel *label_4;
    QLineEdit *editPassword;
    QLabel *label_5;
    QLineEdit *editHostname;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *editAdmin;
    QLineEdit *loginPassword;
    QLabel *stateLabel;
    QPushButton *okButton;
    QPushButton *exitButton;
    QGraphicsView *graphicsView;
    QRadioButton *adminRBtn;
    QRadioButton *userRBtn;

    void setupUi(QDialog *connectdlg)
    {
        if (connectdlg->objectName().isEmpty())
            connectdlg->setObjectName(QStringLiteral("connectdlg"));
        connectdlg->resize(389, 464);
        groupBox = new QGroupBox(connectdlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 140, 351, 221));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 331, 208));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboDriver = new QComboBox(formLayoutWidget);
        comboDriver->setObjectName(QStringLiteral("comboDriver"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboDriver);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        editDatabase = new QLineEdit(formLayoutWidget);
        editDatabase->setObjectName(QStringLiteral("editDatabase"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editDatabase);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        editUsername = new QLineEdit(formLayoutWidget);
        editUsername->setObjectName(QStringLiteral("editUsername"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editUsername);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        editPassword = new QLineEdit(formLayoutWidget);
        editPassword->setObjectName(QStringLiteral("editPassword"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editPassword);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        editHostname = new QLineEdit(formLayoutWidget);
        editHostname->setObjectName(QStringLiteral("editHostname"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editHostname);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        editAdmin = new QLineEdit(formLayoutWidget);
        editAdmin->setObjectName(QStringLiteral("editAdmin"));

        formLayout->setWidget(5, QFormLayout::FieldRole, editAdmin);

        loginPassword = new QLineEdit(formLayoutWidget);
        loginPassword->setObjectName(QStringLiteral("loginPassword"));

        formLayout->setWidget(6, QFormLayout::FieldRole, loginPassword);

        stateLabel = new QLabel(connectdlg);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));
        stateLabel->setGeometry(QRect(90, 360, 241, 31));
        okButton = new QPushButton(connectdlg);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(50, 410, 91, 31));
        exitButton = new QPushButton(connectdlg);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(230, 410, 91, 31));
        graphicsView = new QGraphicsView(connectdlg);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(30, 10, 331, 91));
        adminRBtn = new QRadioButton(connectdlg);
        adminRBtn->setObjectName(QStringLiteral("adminRBtn"));
        adminRBtn->setGeometry(QRect(80, 110, 101, 16));
        userRBtn = new QRadioButton(connectdlg);
        userRBtn->setObjectName(QStringLiteral("userRBtn"));
        userRBtn->setGeometry(QRect(230, 110, 89, 16));
        userRBtn->setChecked(true);

        retranslateUi(connectdlg);

        QMetaObject::connectSlotsByName(connectdlg);
    } // setupUi

    void retranslateUi(QDialog *connectdlg)
    {
        connectdlg->setWindowTitle(QApplication::translate("connectdlg", "connectdlg", 0));
        groupBox->setTitle(QApplication::translate("connectdlg", "Database Connection Settings", 0));
        label->setText(QApplication::translate("connectdlg", "  Driver\357\274\232", 0));
        label_2->setText(QApplication::translate("connectdlg", "  Database\357\274\232", 0));
        label_3->setText(QApplication::translate("connectdlg", "  Username\357\274\232", 0));
        label_4->setText(QApplication::translate("connectdlg", "  Password\357\274\232", 0));
        editPassword->setInputMask(QString());
        label_5->setText(QApplication::translate("connectdlg", "  Hostname\357\274\232", 0));
        label_6->setText(QApplication::translate("connectdlg", " Administrator:", 0));
        label_7->setText(QApplication::translate("connectdlg", " Login Password:", 0));
        stateLabel->setText(QString());
        okButton->setText(QApplication::translate("connectdlg", "Login", 0));
        exitButton->setText(QApplication::translate("connectdlg", "exit", 0));
        adminRBtn->setText(QApplication::translate("connectdlg", "Administrator", 0));
        userRBtn->setText(QApplication::translate("connectdlg", "User", 0));
    } // retranslateUi

};

namespace Ui {
    class connectdlg: public Ui_connectdlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDLG_H
