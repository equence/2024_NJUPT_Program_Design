/********************************************************************************
** Form generated from reading UI file 'athlete_complaint.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATHLETE_COMPLAINT_H
#define UI_ATHLETE_COMPLAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_athlete_complaint
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *athlete_complaint)
    {
        if (athlete_complaint->objectName().isEmpty())
            athlete_complaint->setObjectName("athlete_complaint");
        athlete_complaint->resize(600, 500);
        tableWidget = new QTableWidget(athlete_complaint);
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
        pushButton = new QPushButton(athlete_complaint);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 10, 161, 23));

        retranslateUi(athlete_complaint);
        QObject::connect(pushButton, SIGNAL(clicked()), athlete_complaint, SLOT(slot1()));

        QMetaObject::connectSlotsByName(athlete_complaint);
    } // setupUi

    void retranslateUi(QWidget *athlete_complaint)
    {
        athlete_complaint->setWindowTitle(QCoreApplication::translate("athlete_complaint", "athlete_complaint", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("athlete_complaint", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("athlete_complaint", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("athlete_complaint", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("athlete_complaint", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("athlete_complaint", "\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("athlete_complaint", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("athlete_complaint", "\347\212\266\346\200\201", nullptr));
        pushButton->setText(QCoreApplication::translate("athlete_complaint", "\346\217\220\344\272\244\347\224\263\350\257\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class athlete_complaint: public Ui_athlete_complaint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATHLETE_COMPLAINT_H
