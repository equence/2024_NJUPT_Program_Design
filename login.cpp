//
// Created by wangm on 24-11-11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Login.h" resolved

#include "login.h"
#include "ui_Login.h"
#include "sys_admin/sys_admin_mainwindow.h"
#include <QMessageBox>


#define sys_admin 0
#define college_admin 1
#define athlete 2
#define referee 3

int usertype = 0;

Login::Login(QWidget *parent) :
    QWidget(parent), ui(new Ui::Login) {
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}

void Login::judge_Usertype() {
    usertype = ui->comboBoxUsertype->currentIndex();
}

void Login::judge_Password() {
    if(ui->lineEditUsername->text() == "admin" && ui->lineEditPassword->text() == "admin") {
        this->close();
        switch (usertype) {
            case sys_admin: {
                auto *sys_admin_mainWindow = new sys_admin_MainWindow;
                sys_admin_mainWindow->show();
                break;
            }
            case college_admin: {
                break;
            }
            case athlete: {
                break;
            }
            case referee: {
                break;
            }
        }


    } else {
        QMessageBox::warning(this,tr("登录失败"),tr("用户名或密码输入错误！"),QMessageBox::Ok);
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
        ui->lineEditUsername->setFocus();
    }
}

