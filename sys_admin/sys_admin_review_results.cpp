//
// Created by wangm on 24-11-12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sys_admin_review_results.h" resolved

#include "sys_admin_review_results.h"
#include "ui_sys_admin_review_results.h"


sys_admin_review_results::sys_admin_review_results(QWidget *parent) :
    QWidget(parent), ui(new Ui::sys_admin_review_results) {
    ui->setupUi(this);

    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("../files/sqlite.db");
    results_db.open();
    refreshTable();
}

sys_admin_review_results::~sys_admin_review_results() {
    results_db.close();
    delete ui;
}

void sys_admin_review_results::slot1() {
    int curRow = ui->tableWidget->currentRow();
    queryString = QString("update results set 状态 = '成绩公示' where 运动员号码 = '%1' and 项目编号 = '%2'")
            .arg(ui->tableWidget->item(curRow, 0)->text())
            .arg(ui->tableWidget->item(curRow, 3)->text());
    QSqlQuery query;
    query.exec(queryString);
    refreshTable();
}

void sys_admin_review_results::slot2() {
    int curRow = ui->tableWidget->currentRow();
    queryString = QString("update results set 状态 = '成绩有异议' where 运动员号码 = '%1' and 项目编号 = '%2'")
            .arg(ui->tableWidget->item(curRow, 0)->text())
            .arg(ui->tableWidget->item(curRow, 3)->text());
    QSqlQuery query;
    query.exec(queryString);
    refreshTable();
}

void sys_admin_review_results::refreshTable() {
    ui->tableWidget->setRowCount(0);
    queryString = QString("select * from results");
    QSqlQuery query(queryString);
    int curRow = 0;
    while(query.next()) {
        QString number = query.value("运动员号码").toString();
        QString name = query.value("运动员姓名").toString();
        QString college = query.value("院系编号").toString();
        QString event = query.value("项目编号").toString();
        QString score = query.value("分数").toString();
        QString ranking = query.value("排名").toString();
        QString complaint = query.value("状态").toString();

        ui->tableWidget->insertRow(curRow);
        ui->tableWidget->setItem(curRow, 0, new QTableWidgetItem(number));
        ui->tableWidget->setItem(curRow, 1, new QTableWidgetItem(name));
        ui->tableWidget->setItem(curRow, 2, new QTableWidgetItem(college));
        ui->tableWidget->setItem(curRow, 3, new QTableWidgetItem(event));
        ui->tableWidget->setItem(curRow, 4, new QTableWidgetItem(score));
        ui->tableWidget->setItem(curRow, 5, new QTableWidgetItem(ranking));
        ui->tableWidget->setItem(curRow, 6, new QTableWidgetItem(complaint));
        curRow++;
    }
}