/********************************************************************************
** Form generated from reading UI file 'referee_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFEREE_MAINWINDOW_H
#define UI_REFEREE_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_referee_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *referee_MainWindow)
    {
        if (referee_MainWindow->objectName().isEmpty())
            referee_MainWindow->setObjectName("referee_MainWindow");
        referee_MainWindow->resize(800, 600);
        centralwidget = new QWidget(referee_MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 131, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 40, 131, 23));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 20, 600, 500));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        referee_MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(referee_MainWindow);
        statusbar->setObjectName("statusbar");
        referee_MainWindow->setStatusBar(statusbar);

        retranslateUi(referee_MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), referee_MainWindow, SLOT(slot1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), referee_MainWindow, SLOT(slot2()));

        QMetaObject::connectSlotsByName(referee_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *referee_MainWindow)
    {
        referee_MainWindow->setWindowTitle(QCoreApplication::translate("referee_MainWindow", "referee_MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("referee_MainWindow", "\346\257\224\350\265\233\346\210\220\347\273\251\346\217\220\344\272\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("referee_MainWindow", "\345\215\217\345\212\251\345\244\204\347\220\206\347\224\263\350\257\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class referee_MainWindow: public Ui_referee_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFEREE_MAINWINDOW_H
