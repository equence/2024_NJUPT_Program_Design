//
// Created by wangm on 24-11-11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sys_admin_MainWindow.h" resolved

#include "sys_admin_mainwindow.h"
#include "ui_sys_admin_MainWindow.h"
#include <QPushButton>

sys_admin_MainWindow::sys_admin_MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::sys_admin_MainWindow) {
    ui->setupUi(this);
    setWindowTitle("系统管理员");

    //实例化子页面
    page1 = new management_of_participating_departments(this);
    page2 = new management_of_competition(this);
    page3 = new sys_admin_check_results(this);
    page4 = new sys_admin_review_results(this);
    page5 = new sys_admin_handle_complaint(this);
    //添加页面
    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->addWidget(page2);
    ui->stackedWidget->addWidget(page3);
    ui->stackedWidget->addWidget(page4);
    ui->stackedWidget->addWidget(page5);
    //显示页面作为主页
    ui->stackedWidget->setCurrentWidget(page1);

}

sys_admin_MainWindow::~sys_admin_MainWindow() {
    delete ui;
}

void sys_admin_MainWindow::slot1() {
    ui->stackedWidget->setCurrentWidget(page1);
}

void sys_admin_MainWindow::slot2() {
    ui->stackedWidget->setCurrentWidget(page2);
}

void sys_admin_MainWindow::slot3() {
    ui->stackedWidget->setCurrentWidget(page3);
}

void sys_admin_MainWindow::slot4() {
    ui->stackedWidget->setCurrentWidget(page4);
}

void sys_admin_MainWindow::slot5() {
    ui->stackedWidget->setCurrentWidget(page5);
}