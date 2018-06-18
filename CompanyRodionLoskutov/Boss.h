#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H
#include <string>
#include <QtSql>
#include <Director.h>

using namespace std;
class Boss:public Director
{  
private:
string name;
public:
    Boss(string _name):name(_name)
    {
    }
    string GetName()
    {
        return name;
    }
    void SetName(string _name)
    {
        name=_name;
    }

};


#endif // ABSTRACTCLASS_H
