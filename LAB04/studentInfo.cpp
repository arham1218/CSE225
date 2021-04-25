#include "studentInfo.h"
#include<string>
#include<iostream>
using namespace std;

studentInfo::studentInfo()
{

}
studentInfo::studentInfo(int ID, string name, double cgpa)
{
    this->ID=ID;
    this->name=name;
    this->cgpa=cgpa;
}

void studentInfo::printInfo()
{
    cout<<endl;
    cout<< "ID : "<<ID<<endl;
    cout<< "Name : "<<name<<endl;
    cout<< "CGPA : "<<cgpa<<endl;
}
int studentInfo::getId(){
    return ID;
}
bool studentInfo::operator!=(studentInfo s){
    if(s.getId() != ID)
        return true;
    else
        return false;
}
bool studentInfo::operator==(studentInfo s){
    if(s.getId() == ID)
        return true;
    else
        return false;
}

