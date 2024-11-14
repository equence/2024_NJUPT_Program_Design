#ifndef UPDATE_RANKINGS_H
#define UPDATE_RANKINGS_H

#include <QSqlDatabase>
#include <QString>
#include <vector>

// 定义一个结构体，用于存储运动员的成绩信息
struct AthleteResult {
    QString number;     // 运动员号码
    QString name;       // 运动员姓名
    QString college;    // 院系编号
    QString event;      // 项目编号
    int score;          // 分数
    int ranking;        // 排名
    QString status;     // 状态
};

// 比较函数声明，用于排序
bool compareResults(const AthleteResult &a, const AthleteResult &b);

// 声明更新排名的函数
void updateRankings(QSqlDatabase &db);

#endif // UPDATE_RANKINGS_H
