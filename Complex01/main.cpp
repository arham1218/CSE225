#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex c1(2,6);
    Complex c2(2,7);

    cout<<"The first complex number: "<<endl;
    c1.Print();
    cout<<"The second complex number: "<<endl;
    c2.Print();

    Complex c_add;
    Complex c_sub;
    Complex c_mult;

    c_add=c1+c2;
    cout<<"Addition: "<<endl;
    c_add.Print();

    c_sub=c1-c2;
    cout<<"Subtraction: "<<endl;
    c_sub.Print();

    c_mult=c1*c2;
    cout<<"Multiplication: "<<endl;
    c_mult.Print();

    if(c1!=c2)
        cout<<"The complex numbers are not equal!"<<endl;
    else
        cout<<"The complex numbers are equal!"<<endl;

    return 0;
}

