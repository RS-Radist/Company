#include "manager.h"

Manager::Manager()
{}
Manager::Manager(int _base_salary,string _name):base_salary(_base_salary),name(_name)
{
}
int Manager::AddSalaryAllTime(const QDate* const& temp)
{
        int procentYear=5;
        QDate dateToday = QDate::currentDate();
        int tempYear=dateToday.year()-temp->year();
        int allProcent=tempYear*procentYear;
        if(allProcent>40)
            allProcent=40;
       ///////////////////////
        int salaryAllTime;
        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}
void Manager:: AddDirector(const Director* const& boss)//string NameDirector)
{

}
void AddWorker(const Under* const& worker)
{

}
int Manager:: GetBase_salary()
{
    return base_salary;
}
void Manager:: SetName(string _name)
{
    name=_name;
}
string Manager:: GetName()
{
    return name;
}

