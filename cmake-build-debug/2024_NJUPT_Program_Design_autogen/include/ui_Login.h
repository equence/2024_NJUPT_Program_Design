/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonLogin;
    QComboBox *comboBoxUsertype;
    QLabel *label_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        lineEditUsername = new QLineEdit(Login);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(130, 60, 181, 20));
        lineEditUsername->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        lineEditUsername->setClearButtonEnabled(false);
        lineEditPassword = new QLineEdit(Login);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(130, 100, 181, 20));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 50, 15));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 50, 15));
        pushButtonLogin = new QPushButton(Login);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(130, 190, 141, 41));
        pushButtonLogin->setCheckable(false);
        pushButtonLogin->setAutoDefault(false);
        pushButtonLogin->setFlat(false);
        comboBoxUsertype = new QComboBox(Login);
        comboBoxUsertype->addItem(QString());
        comboBoxUsertype->addItem(QString());
        comboBoxUsertype->addItem(QString());
        comboBoxUsertype->addItem(QString());
        comboBoxUsertype->setObjectName("comboBoxUsertype");
        comboBoxUsertype->setGeometry(QRect(130, 140, 101, 22));
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 140, 50, 15));

        retranslateUi(Login);
        QObject::connect(pushButtonLogin, SIGNAL(clicked()), Login, SLOT(judge_Password()));
        QObject::connect(comboBoxUsertype, SIGNAL(currentIndexChanged(int)), Login, SLOT(judge_Usertype()));

        pushButtonLogin->setDefault(true);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        lineEditUsername->setPlaceholderText(QString());
        lineEditPassword->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        comboBoxUsertype->setItemText(0, QCoreApplication::translate("Login", "\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230", nullptr));
        comboBoxUsertype->setItemText(1, QCoreApplication::translate("Login", "\345\255\246\351\231\242\347\256\241\347\220\206\345\221\230", nullptr));
        comboBoxUsertype->setItemText(2, QCoreApplication::translate("Login", "\350\277\220\345\212\250\345\221\230", nullptr));
        comboBoxUsertype->setItemText(3, QCoreApplication::translate("Login", "\350\243\201\345\210\244\345\221\230", nullptr));

        label_3->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
