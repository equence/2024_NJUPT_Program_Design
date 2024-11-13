//
// Created by osolemio on 24-11-13.
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
// You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef REFEREE_MAINWINDOW_H
#define REFEREE_MAINWINDOW_H

#include <QMainWindow>
#include "referee_submit_results.h"
#include "referee_handle_complaint.h"

QT_BEGIN_NAMESPACE
namespace Ui { class referee_MainWindow; }
QT_END_NAMESPACE

class referee_MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit referee_MainWindow(QWidget *parent = nullptr);
    ~referee_MainWindow() override;
    public slots:
    void slot1();
    void slot2();

private:
    Ui::referee_MainWindow *ui;
    referee_submit_results *page1;
    referee_handle_complaint *page2;
};


#endif //REFEREE_MAINWINDOW_H
