#include "employee.h"
#include <string>
#include <QDate>
using namespace std;

Employee::Employee() // Конструктор по умолчанию
{
    base_salary=0;
}
Employee::Employee(int _base_salary,string _name):base_salary(_base_salary),name(_name) // Базовое добавление
{}
void Employee:: AddDirector(const Director* const& boss)// Добавляем диретора
{}

int Employee::AddSalaryAllTime(const QDate* const& dateStartWork)//Расчет итоговой зарплаты
{
        int procentYear=3;
        QDate dateToday = QDate::currentDate();
        int tempYear=dateToday.year()-dateStartWork->year();
        int allProcent=tempYear*procentYear;
        if(allProcent>30)
            allProcent=30;
        int salaryAllTime;
        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}

int Employee:: GetBase_salary()
{
    return base_salary;
}
string Employee:: GetName()
{
    return name;
}

Employee::~Employee()
{

}
