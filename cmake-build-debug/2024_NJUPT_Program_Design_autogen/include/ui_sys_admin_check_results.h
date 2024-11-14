/********************************************************************************
** Form generated from reading UI file 'sys_admin_check_results.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_ADMIN_CHECK_RESULTS_H
#define UI_SYS_ADMIN_CHECK_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sys_admin_check_results
{
public:
    QTableWidget *tableWidget_byAthelte;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget_byCollege;

    void setupUi(QWidget *sys_admin_check_results)
    {
        if (sys_admin_check_results->objectName().isEmpty())
            sys_admin_check_results->setObjectName("sys_admin_check_results");
        sys_admin_check_results->resize(600, 500);
        tableWidget_byAthelte = new QTableWidget(sys_admin_check_results);
        if (tableWidget_byAthelte->columnCount() < 6)
            tableWidget_byAthelte->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_byAthelte->setObjectName("tableWidget_byAthelte");
        tableWidget_byAthelte->setGeometry(QRect(0, 0, 420, 230));
        pushButton = new QPushButton(sys_admin_check_results);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 10, 161, 23));
        pushButton_2 = new QPushButton(sys_admin_check_results);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 40, 161, 23));
        pushButton_3 = new QPushButton(sys_admin_check_results);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(430, 70, 161, 23));
        pushButton_4 = new QPushButton(sys_admin_check_results);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(430, 100, 161, 23));
        tableWidget_byCollege = new QTableWidget(sys_admin_check_results);
        if (tableWidget_byCollege->columnCount() < 2)
            tableWidget_byCollege->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_byCollege->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_byCollege->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tableWidget_byCollege->setObjectName("tableWidget_byCollege");
        tableWidget_byCollege->setGeometry(QRect(0, 230, 420, 230));

        retranslateUi(sys_admin_check_results);
        QObject::connect(pushButton, SIGNAL(clicked()), sys_admin_check_results, SLOT(slot1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), sys_admin_check_results, SLOT(slot2()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), sys_admin_check_results, SLOT(slot3()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), sys_admin_check_results, SLOT(slot4()));

        QMetaObject::connectSlotsByName(sys_admin_check_results);
    } // setupUi

    void retranslateUi(QWidget *sys_admin_check_results)
    {
        sys_admin_check_results->setWindowTitle(QCoreApplication::translate("sys_admin_check_results", "sys_admin_check_results", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_byAthelte->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("sys_admin_check_results", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_byAthelte->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("sys_admin_check_results", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_byAthelte->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("sys_admin_check_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_byAthelte->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("sys_admin_check_results", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_byAthelte->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("sys_admin_check_results", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_byAthelte->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("sys_admin_check_results", "\346\216\222\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("sys_admin_check_results", "\346\214\211\346\200\273\345\210\206\346\216\222\345\272\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sys_admin_check_results", "\346\214\211\347\263\273\351\231\242\347\274\226\345\217\267\346\237\245\350\257\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("sys_admin_check_results", "\346\214\211\351\241\271\347\233\256\347\274\226\345\217\267\346\237\245\350\257\242", nullptr));
        pushButton_4->setText(QCoreApplication::translate("sys_admin_check_results", "\346\214\211\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_byCollege->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("sys_admin_check_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_byCollege->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("sys_admin_check_results", "\345\276\227\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_admin_check_results: public Ui_sys_admin_check_results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_ADMIN_CHECK_RESULTS_H
