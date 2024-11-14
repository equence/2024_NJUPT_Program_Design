//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

// You may need to build the project (run Qt uic code generator) to get "ui_referee_submit_results.h" resolved

#include "referee_submit_results.h"
#include "ui_referee_submit_results.h"


referee_submit_results::referee_submit_results(QWidget *parent) :
    QWidget(parent), ui(new Ui::referee_submit_results) {
    ui->setupUi(this);

    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("D:/Desktop/program/2024_NJUPT_Program_Design-master/files/sqlite.db");
    results_db.open();
    refreshTable();

    cell = new referee_submit_results_cell;
    connect(cell, SIGNAL(sendRefereeInfo(QString, QString, QString, QString, QString, QString)), this, SLOT(receiveRefereeInfo(QString, QString, QString, QString, QString, QString)));
}

referee_submit_results::~referee_submit_results() {
    results_db.close();
    delete ui;
}

void referee_submit_results::slot1() {
    cell->show();
}

void referee_submit_results::slot2() {
    int curRow = ui->tableWidget->currentRow();
    queryString = QString("delete from results where 运动员号码 = '%1' and 项目编号 = '%2'")
            .arg(ui->tableWidget->item(curRow, 0)->text())
            .arg(ui->tableWidget->item(curRow, 3)->text());
    QSqlQuery query(queryString);
    refreshTable();
}


void referee_submit_results::receiveRefereeInfo(QString number, QString name, QString college, QString event, QString mark, QString ranking) {
    int row = ui->tableWidget->rowCount();
    queryString = QString("insert into results values('%1', '%2', '%3', '%4', '%5', '%6', '成绩待确认')")
            .arg(number)
            .arg(name)
            .arg(college)
            .arg(event)
            .arg(mark)
            .arg(ranking);
    QSqlQuery query(queryString);
    refreshTable();

}

void referee_submit_results::refreshTable() {
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
