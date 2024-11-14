//
// Created by wangm on 24-11-11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_management_of_participating_departments.h" resolved

#include "management_of_participating_departments.h"
#include "ui_management_of_participating_departments.h"
#include <QTableWidget>
#include <QMessageBox>
management_of_participating_departments::management_of_participating_departments(QWidget *parent) :
    QWidget(parent), ui(new Ui::management_of_participating_departments) {
    ui->setupUi(this);
    departments_db = QSqlDatabase::addDatabase("QSQLITE");
    departments_db.setDatabaseName("D:/Desktop/program/2024_NJUPT_Program_Design-master/files/sqlite.db");
    departments_db.open();
    refreshTable();
}

management_of_participating_departments::~management_of_participating_departments() {
    departments_db.close();
    delete ui;
}

void management_of_participating_departments::pushButton_Init_clicked() {
    QSqlQuery query;
    queryString = QString("insert into departments(院系编码, 院系名称) values('001', '计算机学院')");
    query.exec(queryString);
    queryString = QString("insert into departments(院系编码, 院系名称) values('002', '软件学院')");
    query.exec(queryString);
    queryString = QString("insert into departments(院系编码, 院系名称) values('003', '信息学院')");
    query.exec(queryString);
    refreshTable();
}

void management_of_participating_departments::pushButton_Add_clicked() {
    QSqlQuery query;
    queryString = QString("insert into departments(院系编码, 院系名称) values('%1', '%2')")
            .arg(ui->lineEditCode->text()).arg(ui->lineEditName->text());
    query.exec(queryString);
    refreshTable();
}

void management_of_participating_departments::pushButton_Delete_clicked() {
    // 获取选中的行
    int curRow = ui->tableWidget->currentRow();

    // 检查是否有选中行
    if (curRow < 0) {
        QMessageBox::warning(this, tr("删除失败"), tr("请选择一行进行删除！"), QMessageBox::Ok);
        return;
    }

    QSqlQuery query;
    queryString = QString("delete from departments where 院系编码 = '%1'").arg(ui->tableWidget->item(curRow, 0)->text());
    query.exec(queryString);
    refreshTable();
}


void management_of_participating_departments::pushButton_Modify_clicked() {
    // 获取选中的行
    int curRow = ui->tableWidget->currentRow();

    // 检查是否有选中行
    if (curRow < 0) {
        QMessageBox::warning(this, tr("修改失败"), tr("请选择一行进行修改！"), QMessageBox::Ok);
        return;
    }

    // 获取用户输入的院系编码和院系名称
    QString code = ui->lineEditCode->text();
    QString name = ui->lineEditName->text();

    // 检查院系编码和院系名称是否为空，并显示相应的提示
    if (code.isEmpty() && name.isEmpty()) {
        QMessageBox::warning(this, tr("修改失败"), tr("请输入信息！"), QMessageBox::Ok);
        return;
    } else if (code.isEmpty()) {
        QMessageBox::warning(this, tr("修改失败"), tr("院系编码不能为空！"), QMessageBox::Ok);
        return;
    } else if (name.isEmpty()) {
        QMessageBox::warning(this, tr("修改失败"), tr("院系名称不能为空！"), QMessageBox::Ok);
        return;
    }

    queryString = QString("update departments set 院系编码 = '%1', 院系名称 = '%2' where 院系编码 = '%3'")
            .arg(code).arg(name).arg(ui->tableWidget->item(curRow, 0)->text());
    QSqlQuery query;
    query.exec(queryString);
    refreshTable();
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

void management_of_participating_departments::refreshTable() {
    ui->tableWidget->setRowCount(0);
    queryString = QString("select * from departments");
    QSqlQuery query(queryString);
    int curRow = 0;
    while(query.next()) {
        QString code = query.value("院系编码").toString();
        QString name = query.value("院系名称").toString();
        ui->tableWidget->insertRow(curRow);
        ui->tableWidget->setItem(curRow, 0, new QTableWidgetItem(code));
        ui->tableWidget->setItem(curRow, 1, new QTableWidgetItem(name));
        curRow++;
    }
}