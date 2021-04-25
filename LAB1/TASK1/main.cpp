#include <iostream>

using namespace std;

int main()
{
    int x,n;

    cout << "Enter the size of the array:" << endl;
    cin >>n;

    int *arr;

    arr = new int(n);

    cout << "Enter " << n << " elements" << endl;

    for (x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    cout << "You entered: ";

    for (x = 0; x < n; x++)
    {

        cout << arr[x] << " ";
    }

    delete [] arr;

    return 0;
}

