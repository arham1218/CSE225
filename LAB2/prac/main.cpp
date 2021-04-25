
#include "prac.h"
#include "prac.cpp"
#include <iostream>


using namespace std;

int main()
{
   dynArr<int> arham(10);



   int x;
   for(int i = 0; i < 10; i++)
   {
       cin >> x;
       cout << arham.setValue(i, x);
   }

   for(int i = 0, i < 10, i++)
   {

       cout << arham.getValue(i);
   }


}
