#ifndef SALES_H
#define SALES_H
#include "Under.h"
#include <QDate>
#include "Director.h"
#include <string>
using namespace std;

class Sales:public Under
{
private:
    int base_salary;
    string name;
    Under* newWorker;
    Director* directorEmplyee;
public:
    Sales();
    Sales(int _base_salary,string _name);
    void AddDirector(const Director* const& boss);
    void AddWorker(const Under* const& worker);
    int AddSalaryAllTime(const QDate* const& temp,const Under* const teamUnder);
    void SetName(string _name);
    void AddWorkDate(int year,int month,int day);
    string GetName();
    int GetSalary();
};

#endif // SALES_H

