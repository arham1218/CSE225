#include <iostream>

using namespace std;

int sumOfDigits(int x)
{
    if (x==0)
    {
        return 0;
    }
    return (x%10+sumOfDigits(x/10));
}
int main()
{
    int num=123456,n;
    n=sumOfDigits(num);
    cout << "Sum of the digit is: "<<n<<endl;
    return 0;
}

