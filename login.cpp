//
// Created by wangm on 24-11-11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Login.h" resolved

#include "login.h"
#include "ui_Login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent), ui(new Ui::Login) {
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}

void Login::judge() {
    if(ui->lineEditUsername->text() == "admin" && ui->lineEditPassword->text() == "admin") {
        QMessageBox::information(this, "Login", "Login successful");
    } else {
        QMessageBox::warning(this,tr("登录失败"),tr("用户名或密码输入错误！"),QMessageBox::Ok);
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
        ui->lineEditUsername->setFocus();
    }
}
