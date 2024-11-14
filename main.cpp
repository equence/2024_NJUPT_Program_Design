#include <QApplication>
#include <QCoreApplication>
#include "login.h"
#include <QSqlDatabase>
#include "result_sort.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Login l;
    l.show();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../files/sqlite.db");
    updateRankings(db);

    return QApplication::exec();
}
