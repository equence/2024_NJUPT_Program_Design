//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

// You may need to build the project (run Qt uic code generator) to get "ui_athlete_check_results.h" resolved

#include "athlete_check_results.h"
#include "ui_athlete_check_results.h"

extern QString userCode;

athlete_check_results::athlete_check_results(QWidget *parent) :
    QWidget(parent), ui(new Ui::athlete_check_results) {
    ui->setupUi(this);
    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("../files/sqlite.db");
    results_db.open();
    refreshTable();
}

athlete_check_results::~athlete_check_results() {
    delete ui;
}

void athlete_check_results::slot1() {
    QString event = ui->comboBox->currentText();
    queryString = QString("select * from results where 运动员号码 = '%1'").arg(event);
    QSqlQuery query(queryString);
    int curRow = 0;
    ui->tableWidget_byAthlete->setRowCount(0);
    while(query.next()) {
        QString number = query.value("运动员号码").toString();
        QString name = query.value("运动员姓名").toString();
        QString college = query.value("院系编号").toString();
        QString event = query.value("项目编号").toString();
        QString score = query.value("分数").toString();
        QString ranking = query.value("排名").toString();
        QString status = query.value("状态").toString();

        ui->tableWidget_byAthlete->insertRow(curRow);
        ui->tableWidget_byAthlete->setItem(curRow, 0, new QTableWidgetItem(number));
        ui->tableWidget_byAthlete->setItem(curRow, 1, new QTableWidgetItem(name));
        ui->tableWidget_byAthlete->setItem(curRow, 2, new QTableWidgetItem(college));
        ui->tableWidget_byAthlete->setItem(curRow, 3, new QTableWidgetItem(event));
        ui->tableWidget_byAthlete->setItem(curRow, 4, new QTableWidgetItem(score));
        ui->tableWidget_byAthlete->setItem(curRow, 5, new QTableWidgetItem(ranking));
        ui->tableWidget_byAthlete->setItem(curRow, 6, new QTableWidgetItem(status));
        curRow++;
    }
}

void athlete_check_results::refreshTable() {
    ui->tableWidget->setRowCount(0);
    queryString = QString("select * from results where 运动员号码 = '%1'").arg(userCode);
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

    queryString = QString("select * from results where 运动员号码 = '%1'").arg(userCode);
    QSqlQuery query2(queryString);
    while(query2.next()) {
        ui->comboBox->addItem(query2.value("运动员号码").toString());
    }
}
