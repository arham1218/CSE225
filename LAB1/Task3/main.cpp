#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col;

    cout << "Enter the number of rows: ";

    cin >> row;

    int col2[row];



    int **arr;

    arr = new int* [row];



    for(i = 0; i < row; i++)
    {


        cout << "Enter the number of columns: ";

        cin >> col;

        col2[i] = col;

        arr[i] = new int [col];

        cout << "Enter the elements: ";

        for(j = 0; j < col; j++)
        {

            cin >> arr[i][j];

        }



    }




    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col2[i]; j++)
        {
            cout << arr[i][j] << " ";


        }

        cout << "" << endl;



    }



    for( i = 0; i < row; i++)
    {
        delete [] arr[i];

    }

     delete [] arr;



    return 0;
}
