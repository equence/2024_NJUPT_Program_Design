/********************************************************************************
** Form generated from reading UI file 'management_of_competition_cell.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_OF_COMPETITION_CELL_H
#define UI_MANAGEMENT_OF_COMPETITION_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_management_of_competition_cell
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Name;
    QComboBox *comboBox_Group;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_Save;
    QComboBox *comboBox_Nature;
    QLabel *label_5;
    QLineEdit *lineEdit_Count;
    QLineEdit *lineEdit_Award;

    void setupUi(QWidget *management_of_competition_cell)
    {
        if (management_of_competition_cell->objectName().isEmpty())
            management_of_competition_cell->setObjectName("management_of_competition_cell");
        management_of_competition_cell->resize(400, 300);
        label = new QLabel(management_of_competition_cell);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 50, 15));
        label_2 = new QLabel(management_of_competition_cell);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 50, 15));
        lineEdit_Name = new QLineEdit(management_of_competition_cell);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(80, 20, 291, 20));
        comboBox_Group = new QComboBox(management_of_competition_cell);
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->addItem(QString());
        comboBox_Group->setObjectName("comboBox_Group");
        comboBox_Group->setGeometry(QRect(80, 60, 161, 22));
        label_3 = new QLabel(management_of_competition_cell);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 100, 50, 15));
        label_4 = new QLabel(management_of_competition_cell);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 140, 50, 15));
        pushButton_Save = new QPushButton(management_of_competition_cell);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(120, 230, 151, 41));
        comboBox_Nature = new QComboBox(management_of_competition_cell);
        comboBox_Nature->addItem(QString());
        comboBox_Nature->addItem(QString());
        comboBox_Nature->setObjectName("comboBox_Nature");
        comboBox_Nature->setGeometry(QRect(80, 100, 161, 22));
        label_5 = new QLabel(management_of_competition_cell);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 180, 50, 15));
        lineEdit_Count = new QLineEdit(management_of_competition_cell);
        lineEdit_Count->setObjectName("lineEdit_Count");
        lineEdit_Count->setGeometry(QRect(80, 140, 161, 20));
        lineEdit_Award = new QLineEdit(management_of_competition_cell);
        lineEdit_Award->setObjectName("lineEdit_Award");
        lineEdit_Award->setGeometry(QRect(80, 180, 161, 20));

        retranslateUi(management_of_competition_cell);
        QObject::connect(pushButton_Save, SIGNAL(clicked()), management_of_competition_cell, SLOT(pushButton_Save_clicked()));

        QMetaObject::connectSlotsByName(management_of_competition_cell);
    } // setupUi

    void retranslateUi(QWidget *management_of_competition_cell)
    {
        management_of_competition_cell->setWindowTitle(QCoreApplication::translate("management_of_competition_cell", "management_of_competition_cell", nullptr));
        label->setText(QCoreApplication::translate("management_of_competition_cell", "\346\257\224\350\265\233\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("management_of_competition_cell", "\346\211\200\345\261\236\347\273\204\345\210\253", nullptr));
        comboBox_Group->setItemText(0, QCoreApplication::translate("management_of_competition_cell", "\346\225\231\345\267\245\350\200\201\345\271\264\347\224\267\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(1, QCoreApplication::translate("management_of_competition_cell", "\346\225\231\345\267\245\350\200\201\345\271\264\345\245\263\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(2, QCoreApplication::translate("management_of_competition_cell", "\346\225\231\345\267\245\344\270\255\345\271\264\347\224\267\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(3, QCoreApplication::translate("management_of_competition_cell", "\346\225\231\345\267\245\344\270\255\345\271\264\345\245\263\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(4, QCoreApplication::translate("management_of_competition_cell", "\346\225\231\345\267\245\351\235\222\345\271\264\347\224\267\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(5, QCoreApplication::translate("management_of_competition_cell", "\346\225\231\345\267\245\351\235\222\345\271\264\345\245\263\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(6, QCoreApplication::translate("management_of_competition_cell", "\347\240\224\347\251\266\347\224\237\347\224\267\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(7, QCoreApplication::translate("management_of_competition_cell", "\347\240\224\347\251\266\347\224\237\345\245\263\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(8, QCoreApplication::translate("management_of_competition_cell", "\346\234\254\347\247\221\347\224\237\347\224\267\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(9, QCoreApplication::translate("management_of_competition_cell", "\346\234\254\347\247\221\347\224\237\345\245\263\345\255\220\347\273\204", nullptr));
        comboBox_Group->setItemText(10, QCoreApplication::translate("management_of_competition_cell", "\347\224\267\345\245\263\346\267\267\345\220\210", nullptr));

        label_3->setText(QCoreApplication::translate("management_of_competition_cell", "\351\241\271\347\233\256\346\200\247\350\264\250", nullptr));
        label_4->setText(QCoreApplication::translate("management_of_competition_cell", "\345\220\215\346\254\241", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("management_of_competition_cell", "\344\277\235\345\255\230", nullptr));
        comboBox_Nature->setItemText(0, QCoreApplication::translate("management_of_competition_cell", "\344\270\252\344\272\272", nullptr));
        comboBox_Nature->setItemText(1, QCoreApplication::translate("management_of_competition_cell", "\345\233\242\344\275\223", nullptr));

        label_5->setText(QCoreApplication::translate("management_of_competition_cell", "\345\276\227\345\245\226\346\203\205\345\206\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class management_of_competition_cell: public Ui_management_of_competition_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_OF_COMPETITION_CELL_H
