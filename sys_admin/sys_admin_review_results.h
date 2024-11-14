//
// Created by wangm on 24-11-12.
//

#ifndef SYS_ADMIN_REVIEW_RESULTS_H
#define SYS_ADMIN_REVIEW_RESULTS_H

#include <QWidget>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class sys_admin_review_results; }
QT_END_NAMESPACE

class sys_admin_review_results : public QWidget {
Q_OBJECT

public:
    explicit sys_admin_review_results(QWidget *parent = nullptr);
    ~sys_admin_review_results() override;
    void refreshTable();

    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase results_db;
public slots:
    void slot1();
    void slot2();

private:
    Ui::sys_admin_review_results *ui;
};


#endif //SYS_ADMIN_REVIEW_RESULTS_H
