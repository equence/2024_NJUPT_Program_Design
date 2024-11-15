#include "update_scores.h"
#include <QSqlQuery>
#include <iostream>
#include <vector>
#include <algorithm>

// 结构体用于存储院系总分和排名
struct DepartmentScore {
    QString departmentCode;
    int totalScore;
    int ranking;
};

// 比较函数用于排名
bool compareDepartmentScores(const DepartmentScore &a, const DepartmentScore &b) {
    return a.totalScore > b.totalScore; // 院系总分从高到低排序
}

void updateDepartmentScores() {
    // 打开数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../files/sqlite.db");

    if (!db.open()) {
        std::cerr << "Failed to open the database." << std::endl;
        return;
    }

    // 查询每个院系的总分
    QString queryString = ("SELECT 院系编号, SUM(分数) as 总分 FROM results GROUP BY 院系编号");
    QSqlQuery query(queryString);

    // 存储每个院系的总分
    std::vector<DepartmentScore> departmentScores;
    while (query.next()) {
        DepartmentScore score;
        score.departmentCode = query.value("院系编号").toString();
        score.totalScore = query.value("总分").toInt();
        departmentScores.push_back(score);
    }

    // 对院系总分进行排序
    std::sort(departmentScores.begin(), departmentScores.end(), compareDepartmentScores);

    // 更新排名
    for (size_t i = 0; i < departmentScores.size(); ++i) {
        departmentScores[i].ranking = i + 1;
    }

    // 将总分和排名更新到 departments 表中
    for (const auto &dept : departmentScores) {
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE departments SET 院系总分 = :totalScore, 院系排名 = :ranking WHERE 院系编号 = :departmentCode");
        updateQuery.bindValue(":totalScore", dept.totalScore);
        updateQuery.bindValue(":ranking", dept.ranking);
        updateQuery.bindValue(":departmentCode", dept.departmentCode);
        qDebug() << "UPDATE departments SET 院系总分 = " << dept.totalScore << ", 院系排名 = " << dept.ranking << " WHERE 院系编号 = " << dept.departmentCode;
        updateQuery.exec();
    }

    // 关闭数据库连接
    //db.close();
}
