//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ATHLETE_CHECK_RESULTS_H
#define ATHLETE_CHECK_RESULTS_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class athlete_check_results; }
QT_END_NAMESPACE

class athlete_check_results : public QWidget {
Q_OBJECT

public:
    explicit athlete_check_results(QWidget *parent = nullptr);
    ~athlete_check_results() override;

private:
    Ui::athlete_check_results *ui;
};


#endif //ATHLETE_CHECK_RESULTS_H
