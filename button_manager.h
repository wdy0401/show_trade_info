#ifndef BUTTON_MANAGER_H
#define BUTTON_MANAGER_H
#include"q_button.h"
#include<QObject>
#include<string>
class button_manager: public QObject
{
    Q_OBJECT
public:
    button_manager();
signals:
    void show_job(q_button *);
public slots:
    void recv_info(const std::string &);
};

#endif // BUTTON_MANAGER_H
