/********************************************************************************
** Form generated from reading UI file 'college_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEGE_MAINWINDOW_H
#define UI_COLLEGE_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_college_mainwindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *college_mainwindow)
    {
        if (college_mainwindow->objectName().isEmpty())
            college_mainwindow->setObjectName("college_mainwindow");
        college_mainwindow->resize(800, 600);
        centralwidget = new QWidget(college_mainwindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 50, 131, 23));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 20, 131, 23));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 20, 600, 500));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        college_mainwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(college_mainwindow);
        statusbar->setObjectName("statusbar");
        college_mainwindow->setStatusBar(statusbar);

        retranslateUi(college_mainwindow);
        QObject::connect(pushButton, SIGNAL(clicked()), college_mainwindow, SLOT(slot1()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), college_mainwindow, SLOT(slot2()));

        QMetaObject::connectSlotsByName(college_mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *college_mainwindow)
    {
        college_mainwindow->setWindowTitle(QCoreApplication::translate("college_mainwindow", "college_mainwindow", nullptr));
        pushButton_5->setText(QCoreApplication::translate("college_mainwindow", "\346\217\220\344\272\244\346\257\224\350\265\233\347\224\263\350\257\211", nullptr));
        pushButton->setText(QCoreApplication::translate("college_mainwindow", "\346\257\224\350\265\233\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class college_mainwindow: public Ui_college_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEGE_MAINWINDOW_H
