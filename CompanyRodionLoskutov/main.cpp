#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <string>
#include <QDate>
#include <sqlite3.h>
#include <QtSql>
#include "Boss.h"
#include "employee.h"
#include "manager.h"
#include "sales.h"
/*
Есть компания, у компании могут быть сотрудники. Сотрудник характеризуется именем,
датой поступления на работу, базовой ставкой.
Сотрудники бывают 3 видов - Employee, Manager, Sales. У каждого сотрудника может быть
начальник. У каждого сотрудника кроме Employee могут быть подчинённые.

1. Зарплата сотрудника Employee - это базовая ставка плюс 3% за каждый год работы
в компании, но не больше 30% суммарной надбавки
2. Зарплата сотрудника Manager - это базовая ставка плюс 5% за каждый год работы в
компании (но не больше 40% суммарной надбавки за стаж работы) плюс 0,5%
зарплаты всех подчинённых первого уровня.
3. Зарплата сотрудника Sales - это базовая ставка плюс 1% за каждый год работы в
компании (но не больше 35% суммарной надбавки за стаж работы) плюс 0,3%
зарплаты всех подчинённых всех уровней.
4. У сотрудников (кроме Employee) может быть любое количество подчинённых
любого вида.


Есть компания, у компании могут быть сотрудники.
1)Сотрудник характеризуется именем,датой поступления на работу, базовой ставкой. +
2)Сотрудники бывают 3 видов - Employee, Manager, Sales.+
3)У каждого сотрудника может быть начальник.+
4)У каждого сотрудника кроме Employee могут быть подчинённые.

 */
//class StartDialog:public QPushButton
//{
//  Q_OBJECT
//public:
//    StartDialog(/*создание кнопки QWidhet*  but=0) : QpushButton("Press Me",but)*/)
//    {
//                    //пишщем Connect
//                    connect (this,SIGNAL(clicked()),SLOT(slotButtonClicked()));
//    }
//public slots:
//    void slotButtonClicked()
//    {
//        //Описание кнопкип получение , если мы нажимаем ок и вводим пароль
//        // так же можно описать вариан нажатия кнопки Cancel
//    }
//};
int main(int argc,char* argv[])
{
    QApplication a(argc, argv);
    Boss A("Raul");
    Employee Q(100,"Ronaldo");
    //Q.AddDirector(&A);







    QWidget wgt;
    wgt.setWindowTitle("Password");

    QPalette pall;
    pall.setColor(wgt.backgroundRole(),Qt::white);// Выбор цвета
    wgt.setPalette(pall); // Установка цвета
    wgt.setAutoFillBackground(true);



    QFrame* fr=new QFrame;
    fr->setFrameStyle(QFrame::Box|QFrame::Plain);
    fr->setLineWidth(3);
    QPushButton* but1=new QPushButton("OK");
    QPushButton* but2=new QPushButton("Cancel"); // Уставновка кнопок


//    QHBoxLayout* boxL=new QHBoxLayout;
//    boxL->setContentsMargins(10,10,10,10);
//    boxL->setSpacing(20);
//    boxL->addWidget(but1);
//    boxL->addWidget(but2);
//    wgt.setLayout(boxL);

//    wgt.resize(250,250);
//  //pas
//    bool Bok;
//    QString str=QInputDialog::getText(0,
//                                      "Input",
//                                      "Name",
//                                      QLineEdit::Password,
//                                      "Manager",
//                                      &Bok);
//    if (Bok==true)
//    {
//        vector<Employee> EMP;
//        for(vector<Employee>:iterator it=EMP.begin();it!=EMP.end();it++) // Прописать доступ к данным !!!
//        {
//            if (EMP[*it]=)
//        }


//    }
//    if (Bok==false)
//    {
//        QWidget* failbut=new QWidget;
//        failbut->setWindowTitle("Fail");
//        failbut->show();
//    }



    wgt.show();// Общий вывод

    return a.exec();
}
