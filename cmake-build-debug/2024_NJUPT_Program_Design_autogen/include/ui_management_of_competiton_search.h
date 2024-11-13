/********************************************************************************
** Form generated from reading UI file 'management_of_competiton_search.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_OF_COMPETITON_SEARCH_H
#define UI_MANAGEMENT_OF_COMPETITON_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_management_of_competiton_search
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox_Type;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_SearchContent;

    void setupUi(QWidget *management_of_competiton_search)
    {
        if (management_of_competiton_search->objectName().isEmpty())
            management_of_competiton_search->setObjectName("management_of_competiton_search");
        management_of_competiton_search->resize(300, 150);
        pushButton = new QPushButton(management_of_competiton_search);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 90, 191, 51));
        comboBox_Type = new QComboBox(management_of_competiton_search);
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->setObjectName("comboBox_Type");
        comboBox_Type->setGeometry(QRect(90, 20, 111, 22));
        label = new QLabel(management_of_competiton_search);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 50, 15));
        label_2 = new QLabel(management_of_competiton_search);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 50, 15));
        lineEdit_SearchContent = new QLineEdit(management_of_competiton_search);
        lineEdit_SearchContent->setObjectName("lineEdit_SearchContent");
        lineEdit_SearchContent->setGeometry(QRect(90, 60, 131, 20));

        retranslateUi(management_of_competiton_search);
        QObject::connect(pushButton, SIGNAL(clicked()), management_of_competiton_search, SLOT(button_Search_clicked()));

        QMetaObject::connectSlotsByName(management_of_competiton_search);
    } // setupUi

    void retranslateUi(QWidget *management_of_competiton_search)
    {
        management_of_competiton_search->setWindowTitle(QCoreApplication::translate("management_of_competiton_search", "management_of_competiton_search", nullptr));
        pushButton->setText(QCoreApplication::translate("management_of_competiton_search", "\346\237\245\350\257\242", nullptr));
        comboBox_Type->setItemText(0, QCoreApplication::translate("management_of_competiton_search", "\351\241\271\347\233\256\345\220\215\347\247\260", nullptr));
        comboBox_Type->setItemText(1, QCoreApplication::translate("management_of_competiton_search", "\346\211\200\345\261\236\347\273\204\345\210\253", nullptr));
        comboBox_Type->setItemText(2, QCoreApplication::translate("management_of_competiton_search", "\351\241\271\347\233\256\346\200\247\350\264\250", nullptr));
        comboBox_Type->setItemText(3, QCoreApplication::translate("management_of_competiton_search", "\345\220\215\346\254\241", nullptr));
        comboBox_Type->setItemText(4, QCoreApplication::translate("management_of_competiton_search", "\345\276\227\345\210\206\346\203\205\345\206\265", nullptr));

        label->setText(QCoreApplication::translate("management_of_competiton_search", "\346\237\245\350\257\242\347\261\273\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("management_of_competiton_search", "\346\237\245\350\257\242\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class management_of_competiton_search: public Ui_management_of_competiton_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_OF_COMPETITON_SEARCH_H
