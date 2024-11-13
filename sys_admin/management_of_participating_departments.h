//
// Created by wangm on 24-11-11.
//

#ifndef MANAGEMENT_OF_PARTICIPATING_DEPARTMENTS_H
#define MANAGEMENT_OF_PARTICIPATING_DEPARTMENTS_H

#include <QWidget>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class management_of_participating_departments; }
QT_END_NAMESPACE

class management_of_participating_departments : public QWidget {
Q_OBJECT

public:
    explicit management_of_participating_departments(QWidget *parent = nullptr);
    ~management_of_participating_departments() override;
    void refreshTable();
    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase departments_db;


private:
    Ui::management_of_participating_departments *ui;


public slots:
    void pushButton_Init_clicked();
    void pushButton_Add_clicked();
    void pushButton_Delete_clicked();
    void pushButton_Modify_clicked();
    void pushButton_Search_clicked();

};


#endif //MANAGEMENT_OF_PARTICIPATING_DEPARTMENTS_H
