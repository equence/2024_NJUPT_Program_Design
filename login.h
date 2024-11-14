//
// Created by wangm on 24-11-11.
//

#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <stdio.h>
#include <string.h>
#define N 100

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget {
Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login() override;
    typedef struct Student
    {	char ID[20];
        char name[20];
        int type;
        char rank[20];
    }STU;
    int check_password(char *Name ,char *password , int type, STU st[]);

private:
    Ui::Login *ui;

public slots:
    void judge_Password();
    void judge_Usertype();
};


#endif //LOGIN_H
