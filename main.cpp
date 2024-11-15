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


    updateRankings();
    updateDepartmentScores();
    return QApplication::exec();
}
