#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynArr obj1;
    //changing the size of the array
    obj1.allocate(3);
    int n;
    cout<<"Enter three numbers: "<<endl;
    for(int i=0; i<3; i++)
    {
        cin>>n;
        obj1.setValue(i,n);
    }
    cout<<"Printing the inputs: "<<endl;
    for(int i=0; i<3; i++)
    {
        n=obj1.getValue(i);
        cout<<n<<" ";
    }
    return 0;
}

