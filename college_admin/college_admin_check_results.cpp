//
// Created by wangm on 24-11-13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_college_admin_check_results.h" resolved

#include "college_admin_check_results.h"
#include "ui_college_admin_check_results.h"

extern QString userCode;

college_admin_check_results::college_admin_check_results(QWidget *parent) :
    QWidget(parent), ui(new Ui::college_admin_check_results) {
    ui->setupUi(this);
    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("../files/sqlite.db");
    results_db.open();
    refreshTable();
}

college_admin_check_results::~college_admin_check_results() {
    results_db.close();
    delete ui;
}

void college_admin_check_results::slot1() {
    QString event = ui->comboBox->currentText();
    queryString = QString("select * from results where 项目编号 = '%1'").arg(event);
    QSqlQuery query(queryString);
    int curRow = 0;
    ui->tableWidget_byEvent->setRowCount(0);
    while(query.next()) {
        QString number = query.value("运动员号码").toString();
        QString name = query.value("运动员姓名").toString();
        QString college = query.value("院系编号").toString();
        QString event = query.value("项目编号").toString();
        QString score = query.value("分数").toString();
        QString ranking = query.value("排名").toString();
        QString status = query.value("状态").toString();

        ui->tableWidget_byEvent->insertRow(curRow);
        ui->tableWidget_byEvent->setItem(curRow, 0, new QTableWidgetItem(number));
        ui->tableWidget_byEvent->setItem(curRow, 1, new QTableWidgetItem(name));
        ui->tableWidget_byEvent->setItem(curRow, 2, new QTableWidgetItem(college));
        ui->tableWidget_byEvent->setItem(curRow, 3, new QTableWidgetItem(event));
        ui->tableWidget_byEvent->setItem(curRow, 4, new QTableWidgetItem(score));
        ui->tableWidget_byEvent->setItem(curRow, 5, new QTableWidgetItem(ranking));
        ui->tableWidget_byEvent->setItem(curRow, 6, new QTableWidgetItem(status));
        curRow++;
    }
}


void college_admin_check_results::refreshTable() {
    ui->tableWidget_byAthelte->setRowCount(0);
    queryString = QString("select * from results where 院系编号 = '%1'").arg(userCode);
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

    queryString = QString("select * from results where 院系编号 = '%1'").arg(userCode);
    QSqlQuery query2(queryString);
    while(query2.next()) {
        ui->comboBox->addItem(query2.value("项目编号").toString());
        qDebug() << "项目编号:" << query2.value("项目编号").toString();
    }
}
