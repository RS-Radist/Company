#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include <QDate>
#include "Under.h"
#include "Director.h"

using namespace std;

class Manager:public Under
{
private:
    int base_salary;
    string name;
    Under* newWorker;
    Director* directorEmplyee;
public:
    Manager();
    Manager(int _base_salary,string _name);
    void AddDirector(const Director* const& boss);// Добавление Диреткора
    void AddWorker(const Under* const& worker); // Добавление  подчененного
    int AddSalaryAllTime(const QDate* const& temp);//



    void SetName(string _name);
    string GetName();
    int GetBase_salary();

};
#endif // MANAGER_H
