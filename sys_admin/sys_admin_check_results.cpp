//
// Created by wangm on 24-11-12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sys_admin_check_results.h" resolved

#include "sys_admin_check_results.h"
#include "ui_sys_admin_check_results.h"


sys_admin_check_results::sys_admin_check_results(QWidget *parent) :
    QWidget(parent), ui(new Ui::sys_admin_check_results) {
    ui->setupUi(this);

    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("D:/CLionProjects/2024_NJUPT_Program_Design/files/sqlite.db");
    results_db.open();
    refreshTable();
}

sys_admin_check_results::~sys_admin_check_results() {
    results_db.close();
    delete ui;
}

void sys_admin_check_results::refreshTable() {
    ui->tableWidget_byAthelte->setRowCount(0);
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
        QString status = query.value("状态").toString();

        ui->tableWidget_byAthelte->insertRow(curRow);
        ui->tableWidget_byAthelte->setItem(curRow, 0, new QTableWidgetItem(number));
        ui->tableWidget_byAthelte->setItem(curRow, 1, new QTableWidgetItem(name));
        ui->tableWidget_byAthelte->setItem(curRow, 2, new QTableWidgetItem(college));
        ui->tableWidget_byAthelte->setItem(curRow, 3, new QTableWidgetItem(event));
        ui->tableWidget_byAthelte->setItem(curRow, 4, new QTableWidgetItem(score));
        ui->tableWidget_byAthelte->setItem(curRow, 5, new QTableWidgetItem(ranking));
        ui->tableWidget_byAthelte->setItem(curRow, 6, new QTableWidgetItem(status));
        curRow++;
    }

    ui->tableWidget_byCollege->setRowCount(0);
    queryString = QString("select * from results");
    query.exec(queryString);
    curRow = 0;
    while(query.next()) {
        QString college = query.value("院系编号").toString();
        QString event = query.value("项目编号").toString();
        QString score = query.value("分数").toString();

        ui->tableWidget_byCollege->insertRow(curRow);
        ui->tableWidget_byCollege->setItem(curRow, 0, new QTableWidgetItem(college));
        ui->tableWidget_byCollege->setItem(curRow, 1, new QTableWidgetItem(score));
        curRow++;
    }

}
