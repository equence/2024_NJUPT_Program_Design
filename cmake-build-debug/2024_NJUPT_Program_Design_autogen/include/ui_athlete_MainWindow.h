/********************************************************************************
** Form generated from reading UI file 'athlete_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATHLETE_MAINWINDOW_H
#define UI_ATHLETE_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_athlete_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *athlete_MainWindow)
    {
        if (athlete_MainWindow->objectName().isEmpty())
            athlete_MainWindow->setObjectName("athlete_MainWindow");
        athlete_MainWindow->resize(800, 600);
        centralwidget = new QWidget(athlete_MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 50, 131, 23));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(180, 20, 600, 500));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 20, 131, 23));
        athlete_MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(athlete_MainWindow);
        statusbar->setObjectName("statusbar");
        athlete_MainWindow->setStatusBar(statusbar);

        retranslateUi(athlete_MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), athlete_MainWindow, SLOT(slot1()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), athlete_MainWindow, SLOT(slot2()));

        QMetaObject::connectSlotsByName(athlete_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *athlete_MainWindow)
    {
        athlete_MainWindow->setWindowTitle(QCoreApplication::translate("athlete_MainWindow", "athlete_MainWindow", nullptr));
        pushButton_5->setText(QCoreApplication::translate("athlete_MainWindow", "\346\217\220\344\272\244\346\257\224\350\265\233\347\224\263\350\257\211", nullptr));
        pushButton->setText(QCoreApplication::translate("athlete_MainWindow", "\346\257\224\350\265\233\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class athlete_MainWindow: public Ui_athlete_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATHLETE_MAINWINDOW_H
