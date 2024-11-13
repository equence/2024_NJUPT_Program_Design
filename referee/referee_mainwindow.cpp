//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

// You may need to build the project (run Qt uic code generator) to get "ui_referee_MainWindow.h" resolved

#include "referee_mainwindow.h"
#include "ui_referee_MainWindow.h"


referee_MainWindow::referee_MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::referee_MainWindow) {
    ui->setupUi(this);
    setWindowTitle("Referee");

    page1 = new referee_submit_results(this);
    page2 = new referee_handle_complaint(this);

    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->addWidget(page2);

    ui->stackedWidget->setCurrentWidget(page1);
}

referee_MainWindow::~referee_MainWindow() {
    delete ui;
}

void referee_MainWindow::slot1() {
    ui->stackedWidget->setCurrentWidget(page1);
}

void referee_MainWindow::slot2() {
    ui->stackedWidget->setCurrentWidget(page2);
}
