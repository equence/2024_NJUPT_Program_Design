//
// Created by wangm on 24-11-11.
//

#ifndef SYS_ADMIN_MAINWINDOW_H
#define SYS_ADMIN_MAINWINDOW_H

#include <QWidget>
#include "management_of_participating_departments.h"
#include "management_of_competition.h"
#include "sys_admin_check_results.h"
#include "sys_admin_review_results.h"
#include "sys_admin_handle_complaint.h"

QT_BEGIN_NAMESPACE
namespace Ui { class sys_admin_MainWindow; }
QT_END_NAMESPACE

class sys_admin_MainWindow : public QWidget {
Q_OBJECT

public:
    explicit sys_admin_MainWindow(QWidget *parent = nullptr);
    ~sys_admin_MainWindow() override;

public slots:
    void slot1();
    void slot2();
    void slot3();
    void slot4();
    void slot5();

private:
    Ui::sys_admin_MainWindow *ui;
    management_of_participating_departments *page1;
    management_of_competition *page2;
    sys_admin_check_results *page3;
    sys_admin_review_results *page4;
    sys_admin_handle_complaint *page5;
    // management_of_participating_departments *page3;
    // management_of_participating_departments *page4;

};


#endif //SYS_ADMIN_MAINWINDOW_H
