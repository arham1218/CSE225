#include <iostream>
#include <string>
#include "StackType.cpp"
using namespace std;

int main()
{
    StackType <int> st;
    StackType <int> st2;
    if(st.IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if(st.IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    if(st.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;


    while(!st.IsEmpty())
    {
        st2.Push(st.Top());
        st.Pop();
    }
    while(!st2.IsEmpty())
    {
        cout<<st2.Top()<<" ";
        st.Push(st2.Top());
        st2.Pop();
    }
    cout<<endl;

    st.Push(3);

    while(!st.IsEmpty())
    {
        st2.Push(st.Top());
        st.Pop();
    }
    while(!st2.IsEmpty())
    {
        cout<<st2.Top()<<" ";
        st.Push(st2.Top());
        st2.Pop();
    }
    cout<<endl;
    if(st.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    st.Pop();
    st.Pop();

    cout<<"Top item: "<<st.Top()<<endl;

    StackType <char> st3;
    string s="()";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st3.Push(s[i]);

        }
        else if(s[i] == ')')
        {
            st3.Pop();
        }

    }

    if(st3.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balanced"<<endl;

    StackType <char> st4;
    string s2="(())()(()())()";

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == '(')
        {
            st4.Push(s2[i]);

        }
        else if(s2[i] == ')')
        {
            st4.Pop();
        }

    }

    if(st4.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balanced"<<endl;

    StackType <char> st5;
    string s3="(())()((()";

    for (int i = 0; i < s2.length(); i++)
    {
        if (s3[i] == '(')
        {
            st5.Push(s3[i]);

        }
        else if(s3[i] == ')')
        {
            st5.Pop();
        }

    }

    if(st5.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balanced"<<endl;

    StackType <char> st6;
    string s4="(())()((()";

    for (int i = 0; i < s4.length(); i++)
    {
        if (s4[i] == '(')
        {
            st6.Push(s4[i]);

        }
        else if(s4[i] == ')')
        {
            st6.Pop();
        }

    }

    if(st6.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not balanced"<<endl;



    return 0;
}
