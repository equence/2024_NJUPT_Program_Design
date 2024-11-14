//
// Created by wangm on 24-11-11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Login.h" resolved

#include "login.h"
#include "ui_Login.h"
#include "sys_admin/sys_admin_mainwindow.h"
#include "college_admin/college_mainwindow.h"
#include "athlete/athlete_mainwindow.h"
#include "referee/referee_mainwindow.h"
#include <QMessageBox>
#include <stdio.h>

#define sys_admin 0
#define college_admin 1
#define athlete 2
#define referee 3

int usertype = 0;
Login::STU st[N];

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
    if(check_password(ui->lineEditUsername->text().toLatin1().data(),ui->lineEditPassword->text().toLatin1().data(),
        ui->comboBoxUsertype->currentIndex(), st)) {
        this->close();
        switch (usertype) {
            case sys_admin: {
                auto *sys_admin_mainWindow = new sys_admin_MainWindow;
                sys_admin_mainWindow->show();
                break;
            }
            case college_admin: {
                auto *college = new college_mainwindow;
                college->show();
                break;
            }
            case athlete: {
                auto *athlete_mainwindow = new athlete_MainWindow;
                athlete_mainwindow->show();
                break;
            }
            case referee: {
                auto *referee_mainwindow = new referee_MainWindow;
                referee_mainwindow->show();
                break;
            }
        }


    } else {
        QMessageBox::warning(this,tr("登录失败"),tr("信息输入有误，请重新检查！"),QMessageBox::Ok);
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
        ui->lineEditUsername->setFocus();
    }
}

int Login::check_password(char *Name ,char *password , int type, STU st[]) {
    int i=0;
    FILE *fp;
    fp=fopen("../files/login.txt","r");
    if ( fp == 0 )
    {
        QMessageBox::warning(this,tr("读取结果"),tr("用户文件丢失！"),QMessageBox::Ok);
        exit(1);
    }

    fscanf( fp, "%s%s%d%d", st[i].name, st[i].ID, &st[i].type,&st[i].rank) ;
    while( !feof(fp) )
    {   i++;
        fscanf( fp, "%s%s%d%d", st[i].name, st[i].ID, &st[i].type,&st[i].rank);
    }
    fclose(fp);
    int num = 0;
    for ( int n = 0; n < i ; n++)
    {
        if(strcmp(Name, st[num].name) == 0)
        {
            if(strcmp(password, st[num].ID) == 0)
            {
                if (type == st[num].type)
                    return 1;
            }
            else
            {
                return 0;
            }
        }
        num++;
    }
    if (i==num)
    {
        return 0;
    }
    return 0;
}

