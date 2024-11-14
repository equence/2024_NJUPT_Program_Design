/********************************************************************************
** Form generated from reading UI file 'referee_handle_complaint_cell.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFEREE_HANDLE_COMPLAINT_CELL_H
#define UI_REFEREE_HANDLE_COMPLAINT_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_referee_handle_complaint_cell
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QLabel *label_5;

    void setupUi(QWidget *referee_handle_complaint_cell)
    {
        if (referee_handle_complaint_cell->objectName().isEmpty())
            referee_handle_complaint_cell->setObjectName("referee_handle_complaint_cell");
        referee_handle_complaint_cell->resize(400, 300);
        pushButton = new QPushButton(referee_handle_complaint_cell);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 160, 191, 51));
        label_4 = new QLabel(referee_handle_complaint_cell);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 80, 71, 16));
        lineEdit_6 = new QLineEdit(referee_handle_complaint_cell);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(120, 110, 231, 20));
        lineEdit_5 = new QLineEdit(referee_handle_complaint_cell);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(120, 80, 231, 20));
        label_5 = new QLabel(referee_handle_complaint_cell);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 110, 71, 16));

        retranslateUi(referee_handle_complaint_cell);
        QObject::connect(pushButton, SIGNAL(clicked()), referee_handle_complaint_cell, SLOT(slot1()));

        QMetaObject::connectSlotsByName(referee_handle_complaint_cell);
    } // setupUi

    void retranslateUi(QWidget *referee_handle_complaint_cell)
    {
        referee_handle_complaint_cell->setWindowTitle(QCoreApplication::translate("referee_handle_complaint_cell", "referee_handle_complaint_cell", nullptr));
        pushButton->setText(QCoreApplication::translate("referee_handle_complaint_cell", "\346\217\220\344\272\244\346\210\220\347\273\251", nullptr));
        label_4->setText(QCoreApplication::translate("referee_handle_complaint_cell", "\345\210\206\346\225\260", nullptr));
        label_5->setText(QCoreApplication::translate("referee_handle_complaint_cell", "\346\216\222\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class referee_handle_complaint_cell: public Ui_referee_handle_complaint_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFEREE_HANDLE_COMPLAINT_CELL_H
