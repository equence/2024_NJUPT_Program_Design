/********************************************************************************
** Form generated from reading UI file 'sys_admin_review_results.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_ADMIN_REVIEW_RESULTS_H
#define UI_SYS_ADMIN_REVIEW_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sys_admin_review_results
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *sys_admin_review_results)
    {
        if (sys_admin_review_results->objectName().isEmpty())
            sys_admin_review_results->setObjectName("sys_admin_review_results");
        sys_admin_review_results->resize(600, 500);
        pushButton = new QPushButton(sys_admin_review_results);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 10, 161, 23));
        pushButton_2 = new QPushButton(sys_admin_review_results);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 40, 161, 23));
        tableWidget = new QTableWidget(sys_admin_review_results);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 420, 460));

        retranslateUi(sys_admin_review_results);
        QObject::connect(pushButton, SIGNAL(clicked()), sys_admin_review_results, SLOT(slot1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), sys_admin_review_results, SLOT(slot2()));

        QMetaObject::connectSlotsByName(sys_admin_review_results);
    } // setupUi

    void retranslateUi(QWidget *sys_admin_review_results)
    {
        sys_admin_review_results->setWindowTitle(QCoreApplication::translate("sys_admin_review_results", "sys_admin_review_results", nullptr));
        pushButton->setText(QCoreApplication::translate("sys_admin_review_results", "\351\200\232\350\277\207", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sys_admin_review_results", "\346\211\223\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("sys_admin_review_results", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("sys_admin_review_results", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("sys_admin_review_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("sys_admin_review_results", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("sys_admin_review_results", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("sys_admin_review_results", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("sys_admin_review_results", "\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_admin_review_results: public Ui_sys_admin_review_results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_ADMIN_REVIEW_RESULTS_H
