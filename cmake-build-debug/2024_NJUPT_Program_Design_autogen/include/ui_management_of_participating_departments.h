/********************************************************************************
** Form generated from reading UI file 'management_of_participating_departments.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_OF_PARTICIPATING_DEPARTMENTS_H
#define UI_MANAGEMENT_OF_PARTICIPATING_DEPARTMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_management_of_participating_departments
{
public:
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Change;
    QPushButton *pushButton_Search;
    QTableWidget *tableWidget;
    QLineEdit *lineEditCode;
    QLineEdit *lineEditName;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *management_of_participating_departments)
    {
        if (management_of_participating_departments->objectName().isEmpty())
            management_of_participating_departments->setObjectName("management_of_participating_departments");
        management_of_participating_departments->resize(600, 500);
        pushButton_Add = new QPushButton(management_of_participating_departments);
        pushButton_Add->setObjectName("pushButton_Add");
        pushButton_Add->setGeometry(QRect(430, 10, 161, 23));
        pushButton_Delete = new QPushButton(management_of_participating_departments);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(430, 40, 161, 23));
        pushButton_Change = new QPushButton(management_of_participating_departments);
        pushButton_Change->setObjectName("pushButton_Change");
        pushButton_Change->setGeometry(QRect(430, 70, 161, 23));
        pushButton_Search = new QPushButton(management_of_participating_departments);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(430, 100, 161, 23));
        tableWidget = new QTableWidget(management_of_participating_departments);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 420, 460));
        lineEditCode = new QLineEdit(management_of_participating_departments);
        lineEditCode->setObjectName("lineEditCode");
        lineEditCode->setGeometry(QRect(490, 140, 101, 20));
        lineEditName = new QLineEdit(management_of_participating_departments);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(490, 180, 101, 20));
        label = new QLabel(management_of_participating_departments);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 140, 50, 15));
        label_2 = new QLabel(management_of_participating_departments);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 180, 50, 15));
        pushButton = new QPushButton(management_of_participating_departments);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 280, 161, 23));

        retranslateUi(management_of_participating_departments);
        QObject::connect(pushButton, SIGNAL(clicked()), management_of_participating_departments, SLOT(pushButton_Init_clicked()));
        QObject::connect(pushButton_Add, SIGNAL(clicked()), management_of_participating_departments, SLOT(pushButton_Add_clicked()));
        QObject::connect(pushButton_Delete, SIGNAL(clicked()), management_of_participating_departments, SLOT(pushButton_Delete_clicked()));
        QObject::connect(pushButton_Change, SIGNAL(clicked()), management_of_participating_departments, SLOT(pushButton_Modify_clicked()));
        QObject::connect(pushButton_Search, SIGNAL(clicked()), management_of_participating_departments, SLOT(pushButton_Search_clicked()));

        QMetaObject::connectSlotsByName(management_of_participating_departments);
    } // setupUi

    void retranslateUi(QWidget *management_of_participating_departments)
    {
        management_of_participating_departments->setWindowTitle(QCoreApplication::translate("management_of_participating_departments", "management_of_participating_departments", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("management_of_participating_departments", "\346\226\260\345\242\236", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("management_of_participating_departments", "\345\210\240\351\231\244", nullptr));
        pushButton_Change->setText(QCoreApplication::translate("management_of_participating_departments", "\344\277\256\346\224\271", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("management_of_participating_departments", "\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("management_of_participating_departments", "\351\231\242\347\263\273\347\274\226\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("management_of_participating_departments", "\351\231\242\347\263\273\345\220\215\347\247\260", nullptr));
        label->setText(QCoreApplication::translate("management_of_participating_departments", "\351\231\242\347\263\273\347\274\226\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("management_of_participating_departments", "\351\231\242\347\263\273\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("management_of_participating_departments", "\345\210\235\345\247\213\345\214\226\351\232\217\346\234\272\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class management_of_participating_departments: public Ui_management_of_participating_departments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_OF_PARTICIPATING_DEPARTMENTS_H
