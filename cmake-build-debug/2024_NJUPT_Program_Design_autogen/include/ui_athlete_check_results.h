/********************************************************************************
** Form generated from reading UI file 'athlete_check_results.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATHLETE_CHECK_RESULTS_H
#define UI_ATHLETE_CHECK_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_athlete_check_results
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QTableWidget *tableWidget_byAthelte;
    QTableWidget *tableWidget;

    void setupUi(QWidget *athlete_check_results)
    {
        if (athlete_check_results->objectName().isEmpty())
            athlete_check_results->setObjectName("athlete_check_results");
        athlete_check_results->resize(600, 500);
        comboBox = new QComboBox(athlete_check_results);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(450, 270, 131, 22));
        label = new QLabel(athlete_check_results);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 250, 111, 16));
        tableWidget_byAthelte = new QTableWidget(athlete_check_results);
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
        tableWidget_byAthelte->setGeometry(QRect(0, 240, 441, 230));
        tableWidget = new QTableWidget(athlete_check_results);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 10, 591, 230));

        retranslateUi(athlete_check_results);

        QMetaObject::connectSlotsByName(athlete_check_results);
    } // setupUi

    void retranslateUi(QWidget *athlete_check_results)
    {
        athlete_check_results->setWindowTitle(QCoreApplication::translate("athlete_check_results", "athlete_check_results", nullptr));
        label->setText(QCoreApplication::translate("athlete_check_results", "\346\237\245\350\257\242\351\241\271\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_byAthelte->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("athlete_check_results", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_byAthelte->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("athlete_check_results", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_byAthelte->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("athlete_check_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_byAthelte->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("athlete_check_results", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_byAthelte->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("athlete_check_results", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_byAthelte->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("athlete_check_results", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_byAthelte->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("athlete_check_results", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("athlete_check_results", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("athlete_check_results", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("athlete_check_results", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("athlete_check_results", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("athlete_check_results", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("athlete_check_results", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("athlete_check_results", "\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class athlete_check_results: public Ui_athlete_check_results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATHLETE_CHECK_RESULTS_H
