#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QString>
#include <QVariant>
#include <vector>
#include <algorithm>
#include <iostream>

struct AthleteResult {
    QString number;
    QString name;
    QString college;
    QString event;
    int score;
    int ranking;
    QString status;
};

// 比较函数，用于排序
bool compareResults(const AthleteResult &a, const AthleteResult &b) {
    if (a.event == b.event) {
        return a.score > b.score; // 分数从高到低排序
    }
    return a.event < b.event; // 项目编号从小到大排序
}

void updateRankings() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../files/sqlite.db");
    if (!db.open()) {
        std::cerr << "Failed to open the database." << std::endl;
        return;
    }

    QSqlQuery query("SELECT * FROM results");
    std::vector<AthleteResult> results;

    // 从数据库中读取数据
    while (query.next()) {
        AthleteResult result;
        result.number = query.value("运动员号码").toString();
        result.name = query.value("运动员姓名").toString();
        result.college = query.value("院系编号").toString();
        result.event = query.value("项目编号").toString();
        result.score = query.value("分数").toInt();
        result.status = query.value("状态").toString();
        results.push_back(result);
    }

    // 对数据进行排序
    std::sort(results.begin(), results.end(), compareResults);

    // 更新排名
    QString currentEvent;
    int currentRanking = 0;
    for (size_t i = 0; i < results.size(); ++i) {
        if (results[i].event != currentEvent) {
            currentEvent = results[i].event;
            currentRanking = 1;
        } else {
            currentRanking++;
        }
        results[i].ranking = currentRanking;
    }

    // 将更新后的数据写回数据库
    for (const auto &result : results) {
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE results SET 排名 = :ranking WHERE 运动员号码 = :number AND 项目编号 = :event");
        updateQuery.bindValue(":ranking", result.ranking);
        updateQuery.bindValue(":number", result.number);
        updateQuery.bindValue(":event", result.event);
        updateQuery.exec();
    }

    //db.close();
}
