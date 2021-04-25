#include <iostream>

#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int> st;
    cout<<"Length of the list is : "<<st.LengthIs()<<endl;
    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    int a;
    st.ResetList();
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(a);
        cout<<a<<" ";
    }
    cout<<endl;

    //retrieving 6
    bool f=false;
    a=6;
    st.RetrieveItem(a,f);
    if(f==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;


    //retrieving 5
    a=5;
    st.RetrieveItem(a,f);
    if(f==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;


    if(st.LengthIs()==MAX_ITEMS)
    {
        cout<<"List is full"<<endl;
    }
    else
        cout<<"List is not full"<<endl;

    st.DeleteItem(1);
    st.ResetList();
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(a);
        cout<<a<<" ";
    }
    cout<<endl;

    if(st.LengthIs()==MAX_ITEMS)
    {
        cout<<"List is full"<<endl;
    }
    else
        cout<<"List is not full"<<endl;


    SortedType<timeStamp> st2;
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    //Insert
    st2.InsertItem(t1);
    st2.InsertItem(t2);
    st2.InsertItem(t3);
    st2.InsertItem(t4);
    st2.InsertItem(t5);

    //Delete
    st2.DeleteItem(t4);

    //Print
    timeStamp tmp;
    st.ResetList();
    cout<<endl;
    for(int i=0; i<st2.LengthIs(); i++)
    {
        st2.GetNextItem(tmp);
        tmp.printInfo();
    }

    return 0;
}
