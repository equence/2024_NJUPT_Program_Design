#include "update_scores.h"
#include <QSqlQuery>
#include <iostream>

void updateDepartmentScores() {
    // 打开数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Desktop/program/2024_NJUPT_Program_Design-master/files/sqlite.db");

    if (!db.open()) {
        std::cerr << "Failed to open the database." << std::endl;
        return;
    }

    // 查询每个院系的总分
    QString queryString = R"(
        SELECT 院系编号, SUM(分数) as 总分
        FROM results
        GROUP BY 院系编号
    )";
    QSqlQuery query(queryString);

    // 更新 departments 表中的院系总分
    while (query.next()) {
        QString departmentCode = query.value("院系编号").toString();
        int totalScore = query.value("总分").toInt();

        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE departments SET 院系总分 = :totalScore WHERE 院系编码 = :departmentCode");
        updateQuery.bindValue(":totalScore", totalScore);
        updateQuery.bindValue(":departmentCode", departmentCode);
        updateQuery.exec();
    }
    // 关闭数据库连接

    db.close();
}
