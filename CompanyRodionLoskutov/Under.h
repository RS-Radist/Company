

#ifndef WORKING_H
#define WORKING_H
#include <string>
#include "Director.h"
class Director;
using namespace std;
class Under
{
protected:
  int base_salary;
  string name;
  Director* boss;
public:
  Under()
  {}
  Under(int _base_salary,string _name):base_salary(_base_salary),name(_name)
  {}

  virtual string GetName()=0;
  virtual int GetSalary()=0;
  virtual void SetName(string _name)=0;
  virtual void SetSalary(int _base_salary)=0;
  virtual void AddDirector(const Director* const& boss)=0;
  virtual void AddWorkDate(int year,int month,int day)=0;

};
#endif // WORKING_H
