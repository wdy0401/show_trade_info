#include "button_manager.h"

using namespace std;
button_manager::button_manager()
{
}
void button_manager::recv_info(const string & name)
{
    q_button * qb=new q_button();
    qb->init(name ,"a",1,0);
    emit this->show_job(qb);
}
