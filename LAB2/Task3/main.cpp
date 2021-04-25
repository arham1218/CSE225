#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number of rows and columns: " << endl;
    cin>>n;
    dynArr a(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Set value for row "<<i<<" and column "<<j<<": ";
            cin>>m;
            a.setValue(i,j,m);
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a.getValue(i,j)<<" ";
        }
        cout<<endl;

    }

    return 0;
}


