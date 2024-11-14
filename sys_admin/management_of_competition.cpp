//
// Created by wangm on 24-11-12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_management_of_competition.h" resolved

#include "management_of_competition.h"
#include "ui_management_of_competition.h"


int state = 0;

management_of_competition::management_of_competition(QWidget *parent) :
    QWidget(parent), ui(new Ui::management_of_competition) {
    ui->setupUi(this);
    cell = new management_of_competition_cell;
    search = new management_of_competiton_search;
    connect(cell, SIGNAL(sendInfo(QString, QString, QString, QString, QString)), this, SLOT(receiveSaveInfo(QString, QString, QString, QString, QString)));
    connect(search, SIGNAL(sendSearchInfo(QString, QString)), this, SLOT(receiveSearchInfo(QString, QString)));

    competitions_db = QSqlDatabase::addDatabase("QSQLITE");
    competitions_db.setDatabaseName("../files/sqlite.db");
    competitions_db.open();
    refreshTable();
}

management_of_competition::~management_of_competition() {
    competitions_db.close();
    delete ui;
}

void management_of_competition::pushButton_Add_clicked() {
    cell->show();
    state = 1;
}

void management_of_competition::pushButton_Delete_clicked() {
    //获取选中的行
    int curRow = ui->tableWidget->currentRow();
    QSqlQuery query;
    queryString = QString("delete from departments where 项目名称 = '%1'").arg(ui->tableWidget->item(curRow, 0)->text());
    query.exec(queryString);
    refreshTable();
    state = 2;
}

void management_of_competition::pushButton_Modify_clicked() {
    //获取选中的行
    int row = ui->tableWidget->currentRow();
    //获取选中行的数据
    QString name_buf = ui->tableWidget->item(row, 0)->text();
    QString group_buf = ui->tableWidget->item(row, 1)->text();
    QString nature_buf = ui->tableWidget->item(row, 2)->text();
    QString count_buf = ui->tableWidget->item(row, 3)->text();
    QString award_buf = ui->tableWidget->item(row, 4)->text();
    //显示修改界面
    cell->show();
    //设置修改界面的数据
    cell->ui->lineEdit_Name->setText(name_buf);
    cell->ui->comboBox_Group->setCurrentText(group_buf);
    cell->ui->comboBox_Nature->setCurrentText(nature_buf);
    cell->ui->lineEdit_Count->setText(count_buf);
    cell->ui->lineEdit_Award->setText(award_buf);
    state = 3;
}

void management_of_competition::pushButton_Search_clicked() {
    search->show();
    state = 4;
}


void management_of_competition::receiveSaveInfo(QString name, QString group, QString nature, QString count, QString award) {
    switch (state) {
        case 1: {
            //插入数据
            queryString = QString("insert into competitions(项目名称, 所属组别, 项目性质, 名次, 获奖情况) values('%1', '%2', '%3', '%4', '%5')")
                    .arg(name).arg(group).arg(nature).arg(count).arg(award);
            QSqlQuery query;
            query.exec(queryString);
            refreshTable();
            break;
        }
        case 3: {
            //获取行数
            int curRow = ui->tableWidget->currentRow();
            //更新数据库
            queryString = QString("update competitions set 项目名称 = '%1', 所属组别 = '%2', 项目性质 = '%3', 名次 = '%4', 获奖情况 = '%5' where 项目名称 = '%6'")
                    .arg(name).arg(group).arg(nature).arg(count).arg(award).arg(ui->tableWidget->item(curRow, 0)->text());
            QSqlQuery query;
            query.exec(queryString);
            refreshTable();
            break;
        }
    }
}

void management_of_competition::receiveSearchInfo(QString type, QString content) {
    int type_select = 0;
    if(type == "项目名称")
        type_select = 0;
    else if(type == "所属组别")
        type_select = 1;
    else if(type == "项目性质")
        type_select = 2;
    else if(type == "名次")
        type_select = 3;
    else if(type == "获奖情况")
        type_select = 4;
    //获取行数
    int row = ui->tableWidget->rowCount();
    //遍历所有行
    for (int i = 0; i < row; i++) {
        //获取每一行的所选的内容
        QString item = ui->tableWidget->item(i, type_select)->text();
        //判断是否包含输入的内容
        if (item.contains(content)) {
            //设置选中
            ui->tableWidget->selectRow(i);
            //设置当前行
            ui->tableWidget->setCurrentItem(ui->tableWidget->item(i, 0));
        }
    }
}

void management_of_competition::refreshTable() {
    ui->tableWidget->setRowCount(0);
    queryString = QString("select * from competitions");
    QSqlQuery query(queryString);
    int curRow = 0;
    while(query.next()) {
        QString name = query.value("项目名称").toString();
        QString group = query.value("所属组别").toString();
        QString nature = query.value("项目性质").toString();
        QString count = query.value("名次").toString();
        QString award = query.value("获奖情况").toString();
        ui->tableWidget->insertRow(curRow);
        ui->tableWidget->setItem(curRow, 0, new QTableWidgetItem(name));
        ui->tableWidget->setItem(curRow, 1, new QTableWidgetItem(group));
        ui->tableWidget->setItem(curRow, 2, new QTableWidgetItem(nature));
        ui->tableWidget->setItem(curRow, 3, new QTableWidgetItem(count));
        ui->tableWidget->setItem(curRow, 4, new QTableWidgetItem(award));
        curRow++;
    }
}
