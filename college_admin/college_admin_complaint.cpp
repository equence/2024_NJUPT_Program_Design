//
// Created by wangm on 24-11-13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_college_admin_complaint.h" resolved

#include "college_admin_complaint.h"
#include "ui_college_admin_complaint.h"
#include <QMessageBox>

extern QString userCode;

college_admin_complaint::college_admin_complaint(QWidget *parent) :
    QWidget(parent), ui(new Ui::college_admin_complaint) {
    ui->setupUi(this);
    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("../files/sqlite.db");
    results_db.open();
    refreshTable();
}

college_admin_complaint::~college_admin_complaint() {
    results_db.close();
    delete ui;
}

void college_admin_complaint::slot1() {
    int curRow = ui->tableWidget->currentRow();
    queryString = QString("update results set 状态 = '等待总管理员审核' where 运动员号码 = '%1'").arg(ui->tableWidget->item(curRow, 0)->text());
    QSqlQuery query(queryString);
    refreshTable();
    QMessageBox::information(this,tr("执行结果"),tr("申诉成功！"),QMessageBox::Ok);
}

void college_admin_complaint::refreshTable() {
    ui->tableWidget->setRowCount(0);
    queryString = QString("select * from results where 状态 = '等待学院管理员审核' and 院系编号 = '%1'").arg(userCode);
    QSqlQuery query(queryString);
    int curRow = 0;
    while(query.next()) {
        QString number = query.value("运动员号码").toString();
        QString name = query.value("运动员姓名").toString();
        QString college = query.value("院系编号").toString();
        QString event = query.value("项目编号").toString();
        QString score = query.value("分数").toString();
        QString ranking = query.value("排名").toString();
        QString status = query.value("状态").toString();

        ui->tableWidget->insertRow(curRow);
        ui->tableWidget->setItem(curRow, 0, new QTableWidgetItem(number));
        ui->tableWidget->setItem(curRow, 1, new QTableWidgetItem(name));
        ui->tableWidget->setItem(curRow, 2, new QTableWidgetItem(college));
        ui->tableWidget->setItem(curRow, 3, new QTableWidgetItem(event));
        ui->tableWidget->setItem(curRow, 4, new QTableWidgetItem(score));
        ui->tableWidget->setItem(curRow, 5, new QTableWidgetItem(ranking));
        ui->tableWidget->setItem(curRow, 6, new QTableWidgetItem(status));
        curRow++;
    }
}
