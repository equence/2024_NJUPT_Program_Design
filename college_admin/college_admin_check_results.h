//
// Created by wangm on 24-11-13.
//

#ifndef COLLEGE_ADMIN_CHECK_RESULTS_H
#define COLLEGE_ADMIN_CHECK_RESULTS_H

#include <QWidget>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class college_admin_check_results; }
QT_END_NAMESPACE

class college_admin_check_results : public QWidget {
Q_OBJECT

public:
    explicit college_admin_check_results(QWidget *parent = nullptr);
    ~college_admin_check_results() override;
    void refreshTable();
    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase results_db;

private:
    Ui::college_admin_check_results *ui;
};


#endif //COLLEGE_ADMIN_CHECK_RESULTS_H
