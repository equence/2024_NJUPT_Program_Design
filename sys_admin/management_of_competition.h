//
// Created by wangm on 24-11-12.
//

#ifndef MANAGEMENT_OF_COMPETITION_H
#define MANAGEMENT_OF_COMPETITION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "management_of_competition_cell.h"
#include "ui_management_of_competition_cell.h"
#include "management_of_competiton_search.h"
#include "ui_management_of_competiton_search.h"

QT_BEGIN_NAMESPACE
namespace Ui { class management_of_competition; }
QT_END_NAMESPACE

class management_of_competition : public QWidget {
Q_OBJECT

public:
    explicit management_of_competition(QWidget *parent = nullptr);
    ~management_of_competition() override;
    void refreshTable();

    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase competitions_db;

private:
    Ui::management_of_competition *ui;
    management_of_competition_cell *cell;
    management_of_competiton_search *search;

private slots:
    void pushButton_Add_clicked();
    void pushButton_Delete_clicked();
    void pushButton_Modify_clicked();
    void pushButton_Search_clicked();

    void receiveSaveInfo(QString name, QString group, QString nature, QString count, QString award);
    void receiveSearchInfo(QString type, QString content);
};


#endif //MANAGEMENT_OF_COMPETITION_H
