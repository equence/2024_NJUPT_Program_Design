//
// Created by wangm on 24-11-13.
//

#ifndef SYS_ADMIN_HANDLE_COMPLAINT_H
#define SYS_ADMIN_HANDLE_COMPLAINT_H

#include <QWidget>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class sys_admin_handle_complaint; }
QT_END_NAMESPACE

class sys_admin_handle_complaint : public QWidget {
Q_OBJECT

public:
    explicit sys_admin_handle_complaint(QWidget *parent = nullptr);
    ~sys_admin_handle_complaint() override;
    void refreshTable();

    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase results_db;
    public slots:
    void slot1();
    void slot2();

private:
    Ui::sys_admin_handle_complaint *ui;
};


#endif //SYS_ADMIN_HANDLE_COMPLAINT_H
