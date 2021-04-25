#ifndef TIMESTAMP_H
#define TIMESTAMP_H
using namespace std;
class timeStamp
{
    public:
        timeStamp();
        timeStamp(int,int,int);
        void printInfo();
        bool operator !=(timeStamp);
        bool operator >(timeStamp);
        bool operator <(timeStamp);
        int gethours();

    private:
        int seconds,minutes,hours;
};
#endif // TIMESTAMP_H
