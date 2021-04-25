#include <iostream>
#include<cmath>
using namespace std;

float sumOfSeries(int i, int n, float s)
{
    if (i>=n)
        return s;

    else
    {
        float x;
        x=pow(2,i);
        s=s+(float)1/x;
        return sumOfSeries(i+1,n,s);
    }
}
int main()
{
    float sum=sumOfSeries(0,3,0);
    cout<<sum;

    return 0;
}

