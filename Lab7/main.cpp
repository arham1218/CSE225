#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{

    QueType<int> q1(5);
    QueType<int> q2(5);

    if(q1.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    q1.Enqueue(5);
    q1.Enqueue(7);
    q1.Enqueue(4);
    q1.Enqueue(2);

    if(q1.IsEmpty())

    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    if(q1.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;
    }
    q1.Enqueue(6);
    int n;
    while(!q1.IsEmpty())
    {

        q1.Dequeue(n);
        cout<<n<<" ";
        q2.Enqueue(n);

    }
    cout<<endl;
    while(!q2.IsEmpty())
    {
        q2.Dequeue(n);
        q1.Enqueue(n);
    }
    if(q1.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;
    }
    if(!q1.IsFull())
    {
        q2.Enqueue(10);
    }
    else
    {
        cout<<"Queue Overflow"<<endl;
    }
    q1.Dequeue(n);
    q1.Dequeue(n);
    while(!q1.IsEmpty())
    {

        q1.Dequeue(n);
        cout<<n<<" ";
        q2.Enqueue(n);

    }
    cout<<endl;
    while(!q2.IsEmpty())
    {
        q2.Dequeue(n);
        q1.Enqueue(n);
    }

    q1.Dequeue(n);
    q1.Dequeue(n);
    q1.Dequeue(n);


    if(q1.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    if(!q1.IsEmpty())
    {
        q1.Dequeue(n);
    }
    else
    {
        cout<<"Queue Underflow"<<endl;
    }

    q1.Enqueue(5);
    q1.Enqueue(7);
    q1.Enqueue(4);
    q1.Enqueue(2);
    q1.Enqueue(6);

    int a;
    QueType<string> q;
    q.Enqueue("1");
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Binary values of each integer from 1 to "<<n<<":"<<endl;
    int i=1;
    string x;
    while (i<=a)
    {
        q.Dequeue(x);
        cout<<x<<endl;
        q.Enqueue(x+"0");
        q.Enqueue(x+"1");
        i++;

    }

    return 0;


}
