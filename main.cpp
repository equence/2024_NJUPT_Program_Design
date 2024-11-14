#include <QApplication>
#include <QCoreApplication>
#include "login.h"
#include <QSqlDatabase>
#include "result_sort.h"
#include "update_scores.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Login l;
    l.show();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../files/sqlite.db");
    db.open();
    updateRankings(db);
    updateDepartmentScores();
    return QApplication::exec();
}
