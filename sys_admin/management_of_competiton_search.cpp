//
// Created by wangm on 24-11-12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_management_of_competiton_search.h" resolved

#include "management_of_competiton_search.h"
#include "ui_management_of_competiton_search.h"


management_of_competiton_search::management_of_competiton_search(QWidget *parent) :
    QWidget(parent), ui(new Ui::management_of_competiton_search) {
    ui->setupUi(this);
}

management_of_competiton_search::~management_of_competiton_search() {
    delete ui;
}

void management_of_competiton_search::button_Search_clicked() {
    QString type = ui->comboBox_Type->currentText();
    QString content = ui->lineEdit_SearchContent->text();
    emit sendSearchInfo(type, content);
    this->close();
}