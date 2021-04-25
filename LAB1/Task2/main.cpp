#include <iostream>

using namespace std;

int main()
{
    int i, row, col;

    cout << "Enter the number of rows: ";

    cin >> row;

    cout << "Enter the number of columns: ";

    cin >> col;

    char **arr;

    arr = new char* [row];

    for(i = 0; i < row; i++)
    {
        arr[i] = new char (col);

    }

    cout << "Enter the string: ";

    for(i = 0; i < row; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < row; i++)
    {
        cout << arr[i] << " ";


    }


    for(i = 0; i < row; i++)
    {
        delete [] arr[i];

    }

    delete [] arr;


}
