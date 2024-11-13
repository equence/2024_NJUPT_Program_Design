//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef REFEREE_SUBMIT_RESULTS_H
#define REFEREE_SUBMIT_RESULTS_H

#include <QSqlQuery>
#include <QWidget>
#include "referee_submit_results_cell.h"

QT_BEGIN_NAMESPACE
namespace Ui { class referee_submit_results; }
QT_END_NAMESPACE

class referee_submit_results : public QWidget {
Q_OBJECT

public:
    explicit referee_submit_results(QWidget *parent = nullptr);
    ~referee_submit_results() override;
    void refreshTable();
    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase results_db;

    public slots:
    void slot1();
    void slot2();

    void receiveRefereeInfo(QString number, QString name, QString college, QString event, QString mark, QString ranking);

private:
    Ui::referee_submit_results *ui;
    referee_submit_results_cell *cell;

};


#endif //REFEREE_SUBMIT_RESULTS_H
