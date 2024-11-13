//
// Created by wangm on 24-11-13.
//

#ifndef COLLEGE_MAINWINDOW_H
#define COLLEGE_MAINWINDOW_H

#include <QMainWindow>
#include "college_admin_check_results.h"
#include "college_admin_complaint.h"


QT_BEGIN_NAMESPACE
namespace Ui { class college_mainwindow; }
QT_END_NAMESPACE

class college_mainwindow : public QMainWindow {
Q_OBJECT

public:
    explicit college_mainwindow(QWidget *parent = nullptr);
    ~college_mainwindow() override;
    public slots:
    void slot1();
    void slot2();

private:
    Ui::college_mainwindow *ui;
    college_admin_check_results *page1;
    college_admin_complaint *page2;
};


#endif //COLLEGE_MAINWINDOW_H
