#include <iostream>
#include "UnsortedType.cpp"
#include "studentInfo.h"
using namespace std;

int main()
{
    UnsortedType <int> ut;
    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    int t;
    //printing the list
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(t);
        cout<<t<<" ";
    }
    cout<<endl;

    cout<<"Length of the list is : "<<ut.LengthIs()<<endl;
    ut.InsertItem(1);
    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(t);
        cout<<t<<" ";
    }
    cout<<endl;

    //retrieving 4
    bool f=false;
    t=4;
    ut.RetrieveItem(t,f);
    if(f==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    //retrieving 5
    t=5;
    ut.RetrieveItem(t,f);
    if(f==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    //retrieving 9
    t=9;
    ut.RetrieveItem(t,f);
    if(f==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    //retrieving 10
    t=10;
    ut.RetrieveItem(t,f);
    if(f==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    if(ut.LengthIs()==MAX_ITEMS)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }

    ut.DeleteItem(5);
    ut.ResetList();

    if(ut.LengthIs()==MAX_ITEMS)
    {
        cout<<"List is full"<<endl;
    }
    else
        cout<<"List is not full"<<endl;

    ut.DeleteItem(1);
    ut.ResetList();

    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(t);
        cout<<t<<" ";
    }
    cout<<endl;

    ut.DeleteItem(6);
    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(t);
        cout<<t<<" ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"Student Info"<<endl;

    //studentInfo class
    UnsortedType<studentInfo>ut2;
    studentInfo s1(15234,"Jon",2.6);
    ut2.InsertItem(s1);
    studentInfo s2(13732,"Tyrion",3.9);
    ut2.InsertItem(s2);
    studentInfo s3(13569,"Sandor",1.2);
    ut2.InsertItem(s3);
    studentInfo s4(15467,"Ramsey 2",3.1);
    ut2.InsertItem(s4);
    studentInfo s5(16285,"Arya",3.1);
    ut2.InsertItem(s5);

    ut2.DeleteItem(s4);

    studentInfo temp(13569,"",0);
    ut2.RetrieveItem(temp,f);
    if(f)
    {
        cout<<"Item is found"<<endl;
        temp.printInfo();
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    studentInfo temp2;
    ut2.ResetList();
    cout<<endl;
    cout<<"Printing the list"<<endl;
    for(int i=0; i<ut2.LengthIs(); i++)
    {
        ut2.GetNextItem(temp2);
        temp2.printInfo();
    }
    cout<<endl;




    return 0;
}
