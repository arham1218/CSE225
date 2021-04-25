#include "timeStamp.h"
#include<iostream>
using namespace std;

timeStamp::timeStamp()
{

}
timeStamp::timeStamp(int seconds, int minutes, int hours)
{
    this->seconds=seconds;
    this->minutes=minutes;
    this->hours=hours;
}

void timeStamp::printInfo()
{
    if(seconds<10)
    {
        cout<<"0"<<seconds<<":";
    }
    else
        cout<<seconds<<":";
    if(minutes<10)
    {
        cout<<"0"<<minutes<<":";
    }
    else
        cout<<minutes<<":";
    if(hours<10)
    {
        cout<<"0"<<hours<<endl;
    }
    else
        cout<<hours<<endl;

}
int timeStamp::gethours()
{
    return hours;
}
bool timeStamp::operator!=(timeStamp t)
{
    if(hours!=t.gethours())
        return true;
    else
        return false;
}
bool timeStamp::operator>(timeStamp t)
{
    if(hours>t.gethours())
        return true;
    else
        return false;
}
bool timeStamp::operator<(timeStamp t)
{
    if(hours<t.gethours())
        return true;
    else
        return false;
}
