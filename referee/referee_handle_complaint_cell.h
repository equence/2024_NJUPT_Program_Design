//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef REFEREE_HANDLE_COMPLAINT_CELL_H
#define REFEREE_HANDLE_COMPLAINT_CELL_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class referee_handle_complaint_cell; }
QT_END_NAMESPACE

class referee_handle_complaint_cell : public QWidget {
Q_OBJECT

public:
    explicit referee_handle_complaint_cell(QWidget *parent = nullptr);
    ~referee_handle_complaint_cell() override;
    Ui::referee_handle_complaint_cell *ui;
    public slots:
    void slot1();
    signals:
    void sendRefereeInfo(QString mark, QString ranking);

private:

};


#endif //REFEREE_HANDLE_COMPLAINT_CELL_H
