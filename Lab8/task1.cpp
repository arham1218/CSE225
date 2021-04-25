#include <iostream>

using namespace std;

int fib(int x)
{
    if((x==1)||(x==0))
    {
        return(x);
    }
    else
    {
        return(fib(x-1)+fib(x-2));
    }
}
int main()
{
    int num,n;
    cout << "Enter a number: ";
    cin >> num;
    cout<<endl;
    cout << "Fibonacci Series : ";
    for(int i=0;i<num;i++)
    {
        n=fib(i);
    }
    cout<<n;

    return 0;
}

