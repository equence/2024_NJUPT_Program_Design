//
// Created by wangm on 24-11-13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_college_mainwindow.h" resolved

#include "college_mainwindow.h"
#include "ui_college_mainwindow.h"


college_mainwindow::college_mainwindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::college_mainwindow) {
    ui->setupUi(this);
    setWindowTitle("学院管理员");
    page1 = new college_admin_check_results;
    page2 = new college_admin_complaint;

    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->addWidget(page2);

    ui->stackedWidget->setCurrentWidget(page1);
}

college_mainwindow::~college_mainwindow() {
    delete ui;
}

void college_mainwindow::slot1() {
    ui->stackedWidget->setCurrentWidget(page1);
}

void college_mainwindow::slot2() {
    ui->stackedWidget->setCurrentWidget(page2);
}