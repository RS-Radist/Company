#include "sales.h"

Sales::Sales()
{
    base_salary=0;
}
Sales::Sales(int _base_salary,string _name):base_salary(_base_salary),name(_name)
{}

void Sales:: AddDirector(const Director* const& boss)//string NameDirector)
{

}




void Sales::AddWorker(const Under* const& worker)
{

}


int Sales::AddSalaryAllTime(const QDate* const& temp,const Under* const teamUnder)
{
        int procentYear=5;
        QDate dateToday = QDate::currentDate();
        int tempYear=dateToday.year()-temp->year();
        int allProcent=tempYear*procentYear;
        if(allProcent>35)
            allProcent=35;
       ///////////////////////
        int salaryAllTime;
        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}


void Sales::SetName(string _name)
{
    name=_name;
}
void Sales::AddWorkDate(int year,int month,int day)
{
    QDate date;
    date.setDate(year,month,day);
}
string Sales::GetName()
{
    return name;
}
int Sales:: GetSalary()
{
    return base_salary;
}

