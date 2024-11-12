//
// Created by wangm on 24-11-11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_management_of_participating_departments.h" resolved

#include "management_of_participating_departments.h"
#include "ui_management_of_participating_departments.h"
#include <QTableWidget>

management_of_participating_departments::management_of_participating_departments(QWidget *parent) :
    QWidget(parent), ui(new Ui::management_of_participating_departments) {
    ui->setupUi(this);
}

management_of_participating_departments::~management_of_participating_departments() {
    delete ui;
}

void management_of_participating_departments::pushButton_Init_clicked() {
    //创建3行
    ui->tableWidget->insertRow(0);
    ui->tableWidget->insertRow(1);
    ui->tableWidget->insertRow(2);
    //添加数据
    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("001"));
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("计算机学院"));
    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("002"));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem("软件学院"));
    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("003"));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem("信息学院"));
}

void management_of_participating_departments::pushButton_Add_clicked() {
    //获取行数
    int row = ui->tableWidget->rowCount();
    //添加一行
    //注意此处的参数是 “下标”,表示你新增之后这一行是第几行
    ui->tableWidget->insertRow(row);
    //添加数据
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(ui->lineEditCode->text()));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(ui->lineEditName->text()));
}

void management_of_participating_departments::pushButton_Delete_clicked() {
    //获取选中的行
    int curRow = ui->tableWidget->currentRow();
    //删除选中的行
    ui->tableWidget->removeRow(curRow);
}

void management_of_participating_departments::pushButton_Change_clicked() {
    //获取选中的行
    int curRow = ui->tableWidget->currentRow();
    //修改数据
    ui->tableWidget->setItem(curRow, 0, new QTableWidgetItem(ui->lineEditCode->text()));
    ui->tableWidget->setItem(curRow, 1, new QTableWidgetItem(ui->lineEditName->text()));
}

void management_of_participating_departments::pushButton_Search_clicked() {
    //获取行数
    int row = ui->tableWidget->rowCount();
    //获取输入的内容
    QString str = ui->lineEditName->text();
    //遍历所有行
    for (int i = 0; i < row; i++) {
        //获取每一行的第二列的内容
        QString item = ui->tableWidget->item(i, 1)->text();
        //判断是否包含输入的内容
        if (item.contains(str)) {
            //设置选中
            ui->tableWidget->selectRow(i);
            //设置当前行
            ui->tableWidget->setCurrentCell(i, 0);
            break;
        }
    }
}