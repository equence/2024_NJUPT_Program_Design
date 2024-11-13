//
// Created by wangm on 24-11-12.
//

#ifndef MANAGEMENT_OF_COMPETITON_SEARCH_H
#define MANAGEMENT_OF_COMPETITON_SEARCH_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class management_of_competiton_search; }
QT_END_NAMESPACE

class management_of_competiton_search : public QWidget {
Q_OBJECT

public:
    explicit management_of_competiton_search(QWidget *parent = nullptr);
    ~management_of_competiton_search() override;
    public slots:
    void button_Search_clicked();
    signals:
    void sendSearchInfo(QString type, QString content);

private:
    Ui::management_of_competiton_search *ui;
};


#endif //MANAGEMENT_OF_COMPETITON_SEARCH_H
