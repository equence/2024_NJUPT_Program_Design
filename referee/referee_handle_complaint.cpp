//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

// You may need to build the project (run Qt uic code generator) to get "ui_referee_handle_complaint.h" resolved

#include "referee_handle_complaint.h"
#include <ui_referee_handle_complaint_cell.h>
#include "ui_referee_handle_complaint.h"
#include <QMessageBox>

referee_handle_complaint::referee_handle_complaint(QWidget *parent) :
    QWidget(parent), ui(new Ui::referee_handle_complaint) {
    ui->setupUi(this);

    results_db = QSqlDatabase::addDatabase("QSQLITE");
    results_db.setDatabaseName("D:/CLionProjects/2024_NJUPT_Program_Design/files/sqlite.db");
    results_db.open();
    refreshTable();

    cell = new referee_handle_complaint_cell;
    connect(cell, SIGNAL(sendRefereeInfo(QString, QString)), this, SLOT(receiveRefereeInfo(QString, QString)));

}

referee_handle_complaint::~referee_handle_complaint() {
    results_db.close();
    delete ui;
}

void referee_handle_complaint::slot1() {
    //获取选中的行
    int row = ui->tableWidget->currentRow();
    //获取选中行的数据
    QString number_buf = ui->tableWidget->item(row, 0)->text();
    QString name_buf = ui->tableWidget->item(row, 1)->text();
    QString college_buf = ui->tableWidget->item(row, 2)->text();
    QString event_buf = ui->tableWidget->item(row, 3)->text();
    QString mark_buf = ui->tableWidget->item(row, 4)->text();
    QString ranking_buf = ui->tableWidget->item(row, 5)->text();
    //显示修改界面
    cell->show();
    //设置修改界面的数据
    cell->ui->lineEdit_5->setText(mark_buf);
    cell->ui->lineEdit_6->setText(ranking_buf);
}

void referee_handle_complaint::receiveRefereeInfo(QString mark, QString ranking) {
    int curRow = ui->tableWidget->currentRow();
    queryString = QString("update results set 分数 = '%1', 排名 = '%2', 状态 = '裁判已确认' where 运动员号码 = '%3' and 项目编号 = '%4'").arg(mark).arg(ranking).arg(ui->tableWidget->item(curRow, 0)->text()).arg(ui->tableWidget->item(curRow, 3)->text());
    QSqlQuery query(queryString);
    refreshTable();
    QMessageBox::information(this, "提示", "修改成功");

}

void referee_handle_complaint::refreshTable() {
    ui->tableWidget->setRowCount(0);
    queryString = QString("select * from results where 状态 = '等待裁判修改成绩'");
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