/********************************************************************************
** Form generated from reading UI file 'college_admin_check_results.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEGE_ADMIN_CHECK_RESULTS_H
#define UI_COLLEGE_ADMIN_CHECK_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_college_admin_check_results
{
public:
    QTableWidget *tableWidget_byAthelte;
    QTableWidget *tableWidget_byEvent;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QWidget *college_admin_check_results)
    {
        if (college_admin_check_results->objectName().isEmpty())
            college_admin_check_results->setObjectName("college_admin_check_results");
        college_admin_check_results->resize(600, 500);
        tableWidget_byAthelte = new QTableWidget(college_admin_check_results);
        if (tableWidget_byAthelte->columnCount() < 7)
            tableWidget_byAthelte->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_byAthelte->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget_byAthelte->setObjectName("tableWidget_byAthelte");
        tableWidget_byAthelte->setGeometry(QRect(0, 0, 591, 230));
        tableWidget_byEvent = new QTableWidget(college_admin_check_results);
        if (tableWidget_byEvent->columnCount() < 7)
            tableWidget_byEvent->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_byEvent->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        tableWidget_byEvent->setObjectName("tableWidget_byEvent");
        tableWidget_byEvent->setGeometry(QRect(0, 230, 441, 230));
        comboBox = new QComboBox(college_admin_check_results);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(450, 260, 131, 22));
        label = new QLabel(college_admin_check_results);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 240, 111, 16));

        retranslateUi(college_admin_check_results);
        QObject::connect(comboBox, SIGNAL(currentTextChanged(QString)), college_admin_check_results, SLOT(slot1()));

        QMetaObject::connectSlotsByName(college_admin_check_results);
    } // setupUi

    void retranslateUi(QWidget *college_admin_check_results)
    {
        college_admin_check_results->setWindowTitle(QCoreApplication::translate("college_admin_check_results", "college_admin_check_results", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_byAthelte->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("college_admin_check_results", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_byAthelte->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("college_admin_check_results", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_byAthelte->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("college_admin_check_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_byAthelte->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("college_admin_check_results", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_byAthelte->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("college_admin_check_results", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_byAthelte->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("college_admin_check_results", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_byAthelte->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("college_admin_check_results", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_byEvent->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("college_admin_check_results", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_byEvent->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("college_admin_check_results", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_byEvent->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("college_admin_check_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_byEvent->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("college_admin_check_results", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_byEvent->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("college_admin_check_results", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_byEvent->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("college_admin_check_results", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_byEvent->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("college_admin_check_results", "\347\212\266\346\200\201", nullptr));
        label->setText(QCoreApplication::translate("college_admin_check_results", "\346\237\245\350\257\242\351\241\271\347\233\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class college_admin_check_results: public Ui_college_admin_check_results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEGE_ADMIN_CHECK_RESULTS_H
