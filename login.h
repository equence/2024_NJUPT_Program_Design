//
// Created by wangm on 24-11-11.
//

#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget {
Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login() override;

private:
    Ui::Login *ui;

public slots:
    void judge();
};


#endif //LOGIN_H