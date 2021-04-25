#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynArr obj1;
    dynArr obj2(5);
    int n;
    cout<<"Enter five numbers: "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>n;
        obj2.setValue(i,n);
    }
    cout<<"Printing the inputs: "<<endl;
    for(int i=0; i<5; i++)
    {
        n=obj2.getValue(i);
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}









