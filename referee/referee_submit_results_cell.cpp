//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

// You may need to build the project (run Qt uic code generator) to get "ui_referee_submit_results_cell.h" resolved

#include "referee_submit_results_cell.h"
#include "ui_referee_submit_results_cell.h"


referee_submit_results_cell::referee_submit_results_cell(QWidget *parent) :
    QWidget(parent), ui(new Ui::referee_submit_results_cell) {
    ui->setupUi(this);
}

referee_submit_results_cell::~referee_submit_results_cell() {
    delete ui;
}

void referee_submit_results_cell::slot1() {
    //获取输入的信息
    QString edit1 = ui->lineEdit->text();
    QString edit2 = ui->lineEdit_2->text();
    QString edit3 = ui->lineEdit_3->text();
    QString edit4 = ui->lineEdit_4->text();
    QString edit5 = ui->lineEdit_5->text();
    QString edit6 = ui->lineEdit_6->text();

    emit sendRefereeInfo(edit1, edit2, edit3, edit4, edit5, edit6);
    this->close();
}