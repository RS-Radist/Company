#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <QDate>
#include "Under.h"
#include <string>
class Under;
using namespace std;
class Director
{
protected:
    string name;
    Under* subWorking;
public:
    Director()
    {}
    virtual string GetName()=0;
    virtual void SetName(string _name)=0;
};
#endif // DIRECTOR_H
