#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <QDate>
#include "Director.h"
using namespace std;
class Employee
{
private:
    string name;
    int base_salary;
    Director* directorEmplyee;
public:
    Employee();// Конструктор по умолчанию
    Employee(int _base_salary,string _name);// Базовое добавление
    void AddDirector(const Director* const& boss);//Добавляем диреткора
    int AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты
    int GetBase_salary();// Геттер на зарпдату
    string GetName(); // Геттер на имя

    ~Employee(); // дитсруктор






};

#endif // EMPLOYEE_H

