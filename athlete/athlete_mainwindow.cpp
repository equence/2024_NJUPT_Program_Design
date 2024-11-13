//
// Created by wangm on 24-11-13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_athlete_MainWindow.h" resolved

#include "athlete_mainwindow.h"
#include "ui_athlete_MainWindow.h"


athlete_MainWindow::athlete_MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::athlete_MainWindow) {
    ui->setupUi(this);
    setWindowTitle("Athlete Main Window");

    page1 = new athlete_check_results;
    page2 = new athlete_complaint;

    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->addWidget(page2);

    ui->stackedWidget->setCurrentWidget(page1);

}

athlete_MainWindow::~athlete_MainWindow() {
    delete ui;
}

void athlete_MainWindow::slot1() {
    ui->stackedWidget->setCurrentWidget(page1);
}

void athlete_MainWindow::slot2() {
    ui->stackedWidget->setCurrentWidget(page2);
}