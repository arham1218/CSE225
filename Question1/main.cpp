#include <iostream>
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int> st;
    SortedType<int> st2;
    SortedType<int> st3;
    SortedType<int> st4;
    int a,b;
    int x,y;
    cout << "Please enter how many number you want to insert in your list 1: ";
    cin >> x;

    for(int i=0; i<x; i++)
    {

        cin >>a;
        st.InsertItem(a);
    }
    cout << "Please enter how many number you want to insert in your list 2: ";
    cin >> y;

    for(int i=0; i<y; i++)
    {
        cin>>b;
        st2.InsertItem(b);
    }


    st.ResetList();
    for(int i=0; i<st.LengthIs(); i++)
    {
        st.GetNextItem(a);
        st2.ResetList();
        for(int i=0; i<st2.LengthIs(); i++)
        {
            st2.GetNextItem(b);
            if(a==b)
            {
                st3.InsertItem(a);
                break;
            }
        }

    }
    cout<< "Intersection:"<<endl;
    st3.ResetList();
    if(st3.LengthIs()==0)
    {
        cout<<"NULL"<<endl;
    }
    else
    {
        for(int i=0; i<st3.LengthIs(); i++)
        {
            st3.GetNextItem(a);
            cout<<a<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing the reversed merged list: "<<endl;
    for(int i=st3.LengthIs()-1; i>=0; i--)
    {
        st3.GetPreviousItem(a);
        cout<<a<<" ";
    }
    cout<<endl;


    return 0;
}

