//
// Created by wangm on 24-11-13.
//

#ifndef ATHLETE_MAINWINDOW_H
#define ATHLETE_MAINWINDOW_H

#include <QMainWindow>
#include "athlete_check_results.h"
#include "athlete_complaint.h"

QT_BEGIN_NAMESPACE
namespace Ui { class athlete_MainWindow; }
QT_END_NAMESPACE

class athlete_MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit athlete_MainWindow(QWidget *parent = nullptr);
    ~athlete_MainWindow() override;
    public slots:
    void slot1();
    void slot2();

private:
    Ui::athlete_MainWindow *ui;
    athlete_check_results *page1;
    athlete_complaint *page2;
};


#endif //ATHLETE_MAINWINDOW_H
