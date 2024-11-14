/********************************************************************************
** Form generated from reading UI file 'management_of_competition.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_OF_COMPETITION_H
#define UI_MANAGEMENT_OF_COMPETITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_management_of_competition
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Modify;
    QPushButton *pushButton_Search;

    void setupUi(QWidget *management_of_competition)
    {
        if (management_of_competition->objectName().isEmpty())
            management_of_competition->setObjectName("management_of_competition");
        management_of_competition->resize(600, 500);
        tableWidget = new QTableWidget(management_of_competition);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 420, 460));
        pushButton_Add = new QPushButton(management_of_competition);
        pushButton_Add->setObjectName("pushButton_Add");
        pushButton_Add->setGeometry(QRect(430, 10, 161, 23));
        pushButton_Delete = new QPushButton(management_of_competition);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(430, 40, 161, 23));
        pushButton_Modify = new QPushButton(management_of_competition);
        pushButton_Modify->setObjectName("pushButton_Modify");
        pushButton_Modify->setGeometry(QRect(430, 70, 161, 23));
        pushButton_Search = new QPushButton(management_of_competition);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(430, 100, 161, 23));

        retranslateUi(management_of_competition);
        QObject::connect(pushButton_Add, SIGNAL(clicked()), management_of_competition, SLOT(pushButton_Add_clicked()));
        QObject::connect(pushButton_Delete, SIGNAL(clicked()), management_of_competition, SLOT(pushButton_Delete_clicked()));
        QObject::connect(pushButton_Modify, SIGNAL(clicked()), management_of_competition, SLOT(pushButton_Modify_clicked()));
        QObject::connect(pushButton_Search, SIGNAL(clicked()), management_of_competition, SLOT(pushButton_Search_clicked()));

        QMetaObject::connectSlotsByName(management_of_competition);
    } // setupUi

    void retranslateUi(QWidget *management_of_competition)
    {
        management_of_competition->setWindowTitle(QCoreApplication::translate("management_of_competition", "management_of_competition", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("management_of_competition", "\351\241\271\347\233\256\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("management_of_competition", "\346\211\200\345\261\236\347\273\204\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("management_of_competition", "\351\241\271\347\233\256\346\200\247\350\264\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("management_of_competition", "\345\220\215\346\254\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("management_of_competition", "\345\276\227\345\245\226\346\203\205\345\206\265", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("management_of_competition", "\346\226\260\345\242\236", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("management_of_competition", "\345\210\240\351\231\244", nullptr));
        pushButton_Modify->setText(QCoreApplication::translate("management_of_competition", "\344\277\256\346\224\271", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("management_of_competition", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class management_of_competition: public Ui_management_of_competition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_OF_COMPETITION_H
