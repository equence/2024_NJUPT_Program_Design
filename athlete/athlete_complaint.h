//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ATHLETE_COMPLAINT_H
#define ATHLETE_COMPLAINT_H

#include <QWidget>
#include <QSqlQuery>


QT_BEGIN_NAMESPACE
namespace Ui { class athlete_complaint; }
QT_END_NAMESPACE

class athlete_complaint : public QWidget {
Q_OBJECT

public:
    explicit athlete_complaint(QWidget *parent = nullptr);
    ~athlete_complaint() override;
    void refreshTable();
    //定义一个变量，用于增删改查
    QString queryString;
    QSqlDatabase results_db;

    public slots:
    void slot1();

private:
    Ui::athlete_complaint *ui;
};


#endif //ATHLETE_COMPLAINT_H
