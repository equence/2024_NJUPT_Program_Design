//
// Created by wangm on 24-11-12.
//

#ifndef MANAGEMENT_OF_COMPETITION_CELL_H
#define MANAGEMENT_OF_COMPETITION_CELL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class management_of_competition_cell; }
QT_END_NAMESPACE

class management_of_competition_cell : public QWidget {
Q_OBJECT

public:
    explicit management_of_competition_cell(QWidget *parent = nullptr);
    ~management_of_competition_cell() override;
    Ui::management_of_competition_cell *ui;
    signals:
    void sendInfo(QString name, QString group, QString nature, QString count, QString award);

private:


    private slots:
    void pushButton_Save_clicked();
};


#endif //MANAGEMENT_OF_COMPETITION_CELL_H
