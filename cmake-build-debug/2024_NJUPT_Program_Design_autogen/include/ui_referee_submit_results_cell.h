/********************************************************************************
** Form generated from reading UI file 'referee_submit_results_cell.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFEREE_SUBMIT_RESULTS_CELL_H
#define UI_REFEREE_SUBMIT_RESULTS_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_referee_submit_results_cell
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_6;

    void setupUi(QWidget *referee_submit_results_cell)
    {
        if (referee_submit_results_cell->objectName().isEmpty())
            referee_submit_results_cell->setObjectName("referee_submit_results_cell");
        referee_submit_results_cell->resize(400, 300);
        label_2 = new QLabel(referee_submit_results_cell);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 71, 16));
        pushButton = new QPushButton(referee_submit_results_cell);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 220, 191, 51));
        label_5 = new QLabel(referee_submit_results_cell);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 170, 71, 16));
        lineEdit_3 = new QLineEdit(referee_submit_results_cell);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(110, 80, 231, 20));
        label_4 = new QLabel(referee_submit_results_cell);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 140, 71, 16));
        lineEdit_2 = new QLineEdit(referee_submit_results_cell);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(110, 50, 231, 20));
        lineEdit_4 = new QLineEdit(referee_submit_results_cell);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(110, 110, 231, 20));
        label_3 = new QLabel(referee_submit_results_cell);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 71, 16));
        label_6 = new QLabel(referee_submit_results_cell);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 50, 71, 16));
        lineEdit_5 = new QLineEdit(referee_submit_results_cell);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(110, 140, 231, 20));
        label = new QLabel(referee_submit_results_cell);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 71, 16));
        lineEdit = new QLineEdit(referee_submit_results_cell);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 20, 231, 20));
        lineEdit_6 = new QLineEdit(referee_submit_results_cell);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(110, 170, 231, 20));

        retranslateUi(referee_submit_results_cell);
        QObject::connect(pushButton, SIGNAL(clicked()), referee_submit_results_cell, SLOT(slot1()));

        QMetaObject::connectSlotsByName(referee_submit_results_cell);
    } // setupUi

    void retranslateUi(QWidget *referee_submit_results_cell)
    {
        referee_submit_results_cell->setWindowTitle(QCoreApplication::translate("referee_submit_results_cell", "referee_submit_results_cell", nullptr));
        label_2->setText(QCoreApplication::translate("referee_submit_results_cell", "\351\231\242\347\263\273\347\274\226\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("referee_submit_results_cell", "\346\217\220\344\272\244\346\210\220\347\273\251", nullptr));
        label_5->setText(QCoreApplication::translate("referee_submit_results_cell", "\346\216\222\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("referee_submit_results_cell", "\345\210\206\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("referee_submit_results_cell", "\351\241\271\347\233\256\347\274\226\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("referee_submit_results_cell", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("referee_submit_results_cell", "\350\277\220\345\212\250\345\221\230\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class referee_submit_results_cell: public Ui_referee_submit_results_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFEREE_SUBMIT_RESULTS_CELL_H
