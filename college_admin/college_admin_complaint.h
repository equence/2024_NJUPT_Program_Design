//
// Created by wangm on 24-11-13.
//

#ifndef COLLEGE_ADMIN_COMPLAINT_H
#define COLLEGE_ADMIN_COMPLAINT_H

#include <QWidget>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class college_admin_complaint; }
QT_END_NAMESPACE

class college_admin_complaint : public QWidget {
Q_OBJECT

public:
    explicit college_admin_complaint(QWidget *parent = nullptr);
    ~college_admin_complaint() override;
    void refreshTable();
    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase results_db;

    public slots:
    void slot1();

private:
    Ui::college_admin_complaint *ui;
};


#endif //COLLEGE_ADMIN_COMPLAINT_H
