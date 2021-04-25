#include <iostream>
using namespace std;


int sequence(int x)
{
    if(x==0||x==2)
    {
        return 3;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return(sequence(x-1) + sequence(x-2) + sequence(x-3));
    }
}


int main()
{
    int a,b,i;
    cout << "Enter an integer: " <<endl;
    cin >> a;
    cout << "The output sequence : " <<endl;

    for(i=0; i<a; i++)
    {
        b = sequence(i);
        cout << b << " ";
    }

    return 0;
}
