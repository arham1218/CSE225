#include <iostream>
#include "Zoo.h"
#include<string>
using namespace std;

int main()
{
    Zoo z1(7,13,17);
    Zoo z2(6,28,2);
    Zoo z3(8,7,14);

    z1.setValue("Tiger",4,0);
    z1.setValue("Lion",3,1);
    z1.setValue("Elephant",5,2);
    z1.setValue("Zebra",2,3);
    z1.setValue("Deer",7,4);
    z1.setValue("Crocodile",10,5);
    z1.setValue("Snake",20,6);

    z2.setValue("Tiger",1,0);
    z2.setValue("Lion",3,1);
    z2.setValue("Deer",3,2);
    z2.setValue("Zebra",4,3);
    z2.setValue("Crocodile",5,4);
    z2.setValue("Monkey",25,5);


    z3.setValue("Tiger",4,0);
    z3.setValue("Lion",2,1);
    z3.setValue("Deer",5,2);
    z3.setValue("Zebra",1,3);
    z3.setValue("Crocodile",3,4);
    z3.setValue("Turtles",25,5);
    z3.setValue("Elephant",2,6);
    z3.setValue("Birds",15,7);

    cout<<"Task 2-----------------------------------------------------------------------\n"<<endl;
    cout<<"1. Which zoo has Elephants?"<<endl;
    if(z1.getAnimalIndex("Elephant")!=-1)
    {
        cout<<"ZOO_01 has Elephants"<<endl;
    }
    if(z2.getAnimalIndex("Elephant")!=-1)
    {
        cout<<"ZOO_02 has Elephants"<<endl;
    }
    if(z3.getAnimalIndex("Elephant")!=-1)
    {
        cout<<"ZOO_03 has Elephants"<<endl;
    }

    cout << endl;
    cout<<"2. How many Snakes does ZOO_01 has?"<<endl;
    int n;
    n=z1.getAnimalIndex("Snake");
    if(n!=-1)
    {
        cout<<"ZOO_01 has "<<z1.getNoanimalExist(n)<<" Snakes"<<endl;
    }
    else
    {
        cout<<"There is no snake in ZOO_01"<<endl;
    }
    cout << endl;

    cout<<"3. Which zoo should I go to if I want to see Turtles?"<<endl;
    if(z1.getAnimalIndex("Turtles")!=-1)
    {
        cout<<"You should go to ZOO_01 to see Turtles"<<endl;
    }
    if(z2.getAnimalIndex("Turtles")!=-1)
    {
        cout<<"You should go to ZOO_02 to see Turtles"<<endl;
    }
    if(z3.getAnimalIndex("Turtles")!=-1)
    {
        cout<<"You should go to ZOO_03 to see Turtles"<<endl;
    }
    cout<<endl;

    cout<<"4. Which zoo has the highest number of Deer?"<<endl;
    int a,b,c;
    a=z1.getAnimalIndex("Deer");
    b=z2.getAnimalIndex("Deer");
    c=z3.getAnimalIndex("Deer");
    if(a!=-1)
    {
        a=z1.getNoanimalExist(a);
    }
    if(b!=-1)
    {
        b=z2.getNoanimalExist(b);
    }
    if(c!=-1)
    {
        c=z3.getNoanimalExist(c);
    }

    if(a >= b && a >= c)
        cout << "The highest number of Deer is in ZOO_01: " << a;

    if( b>= a && b >= c)
        cout <<"The highest number of Deer is in ZOO_02: " << b;

    if(c >= a && c >= b)
        cout << "The highest number of Deer is in ZOO_03: " << c;


    cout<<"\n"<<endl;


    cout<<"5. Which zoo has the least number of Tiger and Lion combined?"<<endl;
    int x,y,z;
    a=z1.getAnimalIndex("Tiger");
    b=z2.getAnimalIndex("Tiger");
    c=z3.getAnimalIndex("Tiger");
    x=z1.getAnimalIndex("Lion");
    y=z2.getAnimalIndex("Lion");
    z=z3.getAnimalIndex("Lion");
    if(a!=-1)
    {
        a=z1.getNoanimalExist(a);
    }
    if(b!=-1)
    {
        b=z2.getNoanimalExist(b);
    }
    if(c!=-1)
    {
        c=z3.getNoanimalExist(c);
    }
    if(x!=-1)
    {
        x=z1.getNoanimalExist(x);
    }
    if(y!=-1)
    {
        y=z2.getNoanimalExist(y);
    }
    if(z!=-1)
    {
        z=z3.getNoanimalExist(z);
    }
    int s1,s2,s3;
    s1=a+x;
    s2=b+y;
    s3=c+z;

    if(s1 <= s2 && s1 <= s3)
        cout << "The least number of Tiger and Lion combined is in ZOO_01: " << s1;

    if( s2 <= s1 && s2 <= s3)
        cout <<"The least number of Tiger and Lion combined is in ZOO_02: " << s2;

    if(s3 <= s1 && s3 <= s2)
        cout << "The least number of Tiger and Lion combined is in ZOO_03: " << s3;

    cout<<"\n"<<endl;
    cout<<"Task 3-----------------------------------------------------------------------\n"<<endl;

    cout<<"1. Add a function that will return the total number of animals in a zoo."<<endl;
    cout<<"Total number of animals in a ZOO_01 is: "<<z1.gettotalNoOfAnimal()<<endl;
    cout<<"Total number of animals in a ZOO_01 is: "<<z2.gettotalNoOfAnimal()<<endl;
    cout<<"Total number of animals in a ZOO_01 is: "<<z3.gettotalNoOfAnimal()<<endl;
    cout<<endl;
    cout<<"2. Add a distance function that takes the user’s co-ordinate as inputs and returns the distance between the zoo and the user."<<endl;
    int c1,c2;
    cout<<"Input x co-ordinate: "<<endl;
    cin>>c1;
    cout<<"Input y co-ordinate: "<<endl;
    cin>>c2;

    cout<<"Distance from ZOO_01: "<<z1.distance(c1,c2)<<endl;
    cout<<"Distance from ZOO_02: "<<z2.distance(c1,c2)<<endl;
    cout<<"Distance from ZOO_03: "<<z3.distance(c1,c2)<<endl;

    cout<<endl;
    cout<<"3. Add a print function that will print the list of animals the zoo has with their respective quantity."<<endl;
    cout<<"ZOO_01: "<<endl;
    z1.print();





    cout<<"\nTask 4-----------------------------------------------------------------------\n"<<endl;


    int m1,m2,m3;
    m1=z1.gettotalNoOfAnimal();
    m2=z2.gettotalNoOfAnimal();
    m3=z3.gettotalNoOfAnimal();
    cout<<"1. Print which of the 3 zoos has the most number of animals."<<endl;
    if(m1 >= m2 && m1 >= m3)
        cout << "ZOO_01 has the most animal: " << m1;

    if( m2>= m1 && m2 >= m3)
        cout <<"ZOO_02 has the most animal: " << m2;

    if(m3 >= m1 && m3 >= m2)
        cout << "ZOO_03 has the most animal: " << m3;

    cout<<"\n"<<endl;


    int cox=-7,coy=7;
    float k1,k2,k3;
    k1=z1.distance(cox,coy);
    k2=z2.distance(cox,coy);
    k3=z3.distance(cox,coy);
    cout<<"2. If my co-ordinate is (-7,7), which zoo is the closest to me?"<<endl;
    if( k1>= k2 && k1 >= k3)
        cout << "ZOO_01 is closest to you. Distance: " << k1;

    if( k2>= k1 && k2 >= k3)
        cout <<"ZOO_02 is closest to you. Distance: " << k2;

    if(k3 >= k1 && k3 >= k2)
        cout << "ZOO_03 is closest to you. Distance: " << k3;

    cout<<"\n"<<endl;


    cout<<"3. Assume ZOO_1 and ZOO_2 are going to marge. Now create a new zoo combining the two zoos together."<<endl;

    Zoo z4(8,13,17);

    z4=z1+z2;
    z4.print();
    string st;
    cout<<endl;
    cout<<"4. Write some codes so that a user can look up the quantity of any animal from the new zoo that you just created."<<endl;
    cout<<"Input the name of an animal to see its quantity: "<<endl;
    cin>>st;
    n=z4.getAnimalIndex(st);
    cout<<z4.getNoanimalExist(n)<<endl;



    return 0;

}
