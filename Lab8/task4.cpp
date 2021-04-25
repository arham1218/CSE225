#include <iostream>

using namespace std;

int findMin(int a[], int size)
{
    if(size==1)
    {
        return a[0];
    }
    else
    {
      return min(a[size-1],findMin(a,size-1));
    }

}
int main()
{
    int A[]={9,2,8,5,-3,1,0,21};
    int n;
    n=sizeof(A)/sizeof(A[0]);
    cout <<"The minimum element of the array is: "<<findMin(A,n);
    return 0;
}

