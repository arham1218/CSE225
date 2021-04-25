#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>
using namespace std;
class studentInfo
{
    public:
        studentInfo();
        studentInfo(int,string,double);
        void printInfo();
        bool operator !=(studentInfo);
        bool operator ==(studentInfo);
        int getId();

    private:
        int ID;
        string name;
        double cgpa;
};

#endif // STUDENTINFO_H
