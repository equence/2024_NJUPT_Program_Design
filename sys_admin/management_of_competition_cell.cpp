//
// Created by wangm on 24-11-12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_management_of_competition_cell.h" resolved

#include "management_of_competition_cell.h"
#include "ui_management_of_competition_cell.h"


management_of_competition_cell::management_of_competition_cell(QWidget *parent) :
    QWidget(parent), ui(new Ui::management_of_competition_cell) {
    ui->setupUi(this);
}

management_of_competition_cell::~management_of_competition_cell() {
    delete ui;
}

void management_of_competition_cell::pushButton_Save_clicked() {
    //获取输入的信息
    QString name = ui->lineEdit_Name->text();
    QString group = ui->comboBox_Group->currentText();
    QString nature = ui->comboBox_Nature->currentText();
    QString count = ui->lineEdit_Count->text();
    QString award = ui->lineEdit_Award->text();

    emit sendInfo(name, group, nature, count, award);
    this->close();
}