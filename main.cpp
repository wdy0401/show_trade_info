#include "mainwindow.h"
#include "q_button.h"
#include "button_manager.h"
#include "../gpp_qt/wfunction/udp_receiver.h"
#include <QApplication>
#include <QMessageBox>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Time limitation
    {
        QDateTime current_date_time = QDateTime::currentDateTime();
        QString current_date = current_date_time.toString("yyyy-MM-dd");
        if(current_date>"2016-12-31")
        {
            QMessageBox::about(0,"本软件已过期","请联系兴证期货资管部续期");
            return 0;
        }
    }

    MainWindow w;
    udp_receiver * ur=new udp_receiver();
    button_manager * bm=new button_manager();

    ur->init(32011);

    QObject::connect(bm,&button_manager::show_job,&w,&MainWindow::add_button);
    QObject::connect(ur,&udp_receiver::broadcast_string,bm,&button_manager::recv_info);



    w.show();

    return a.exec();
}
