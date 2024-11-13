/********************************************************************************
** Form generated from reading UI file 'sys_admin_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_ADMIN_MAINWINDOW_H
#define UI_SYS_ADMIN_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sys_admin_MainWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *sys_admin_MainWindow)
    {
        if (sys_admin_MainWindow->objectName().isEmpty())
            sys_admin_MainWindow->setObjectName("sys_admin_MainWindow");
        sys_admin_MainWindow->resize(800, 600);
        pushButton = new QPushButton(sys_admin_MainWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 20, 131, 23));
        pushButton_2 = new QPushButton(sys_admin_MainWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 50, 131, 23));
        pushButton_3 = new QPushButton(sys_admin_MainWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 80, 131, 23));
        pushButton_4 = new QPushButton(sys_admin_MainWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 110, 131, 23));
        stackedWidget = new QStackedWidget(sys_admin_MainWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 20, 600, 500));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        pushButton_5 = new QPushButton(sys_admin_MainWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 140, 131, 23));

        retranslateUi(sys_admin_MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), sys_admin_MainWindow, SLOT(slot1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), sys_admin_MainWindow, SLOT(slot2()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), sys_admin_MainWindow, SLOT(slot3()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), sys_admin_MainWindow, SLOT(slot4()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), sys_admin_MainWindow, SLOT(slot5()));

        QMetaObject::connectSlotsByName(sys_admin_MainWindow);
    } // setupUi

    void retranslateUi(QWidget *sys_admin_MainWindow)
    {
        sys_admin_MainWindow->setWindowTitle(QCoreApplication::translate("sys_admin_MainWindow", "sys_admin_MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("sys_admin_MainWindow", "\345\217\202\350\265\233\351\231\242\347\263\273\347\256\241\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sys_admin_MainWindow", "\347\256\241\347\220\206\346\257\224\350\265\233\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("sys_admin_MainWindow", "\346\257\224\350\265\233\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        pushButton_4->setText(QCoreApplication::translate("sys_admin_MainWindow", "\345\256\241\346\240\270\346\257\224\350\265\233\346\210\220\347\273\251", nullptr));
        pushButton_5->setText(QCoreApplication::translate("sys_admin_MainWindow", "\345\217\227\347\220\206\346\257\224\350\265\233\347\224\263\350\257\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_admin_MainWindow: public Ui_sys_admin_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_ADMIN_MAINWINDOW_H
