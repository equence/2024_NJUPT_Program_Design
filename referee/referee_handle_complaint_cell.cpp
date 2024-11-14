//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

// You may need to build the project (run Qt uic code generator) to get "ui_referee_handle_complaint_cell.h" resolved

#include "referee_handle_complaint_cell.h"
#include "ui_referee_handle_complaint_cell.h"


referee_handle_complaint_cell::referee_handle_complaint_cell(QWidget *parent) :
    QWidget(parent), ui(new Ui::referee_handle_complaint_cell) {
    ui->setupUi(this);
}

referee_handle_complaint_cell::~referee_handle_complaint_cell() {
    delete ui;
}

void referee_handle_complaint_cell::slot1() {
    //获取输入的信息
    QString edit5 = ui->lineEdit_5->text();
    QString edit6 = ui->lineEdit_6->text();

    emit sendRefereeInfo(edit5, edit6);
    this->close();
}