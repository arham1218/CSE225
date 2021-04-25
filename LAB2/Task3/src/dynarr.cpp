

#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s)
{
    data = new int*[s];
    for(int i=0; i<s; i++)
    {
        data[i]= new int[s];
    }
    size = s;
}
dynArr::~dynArr()
{
    for(int i=0; i<size; i++)
    {
        data[i];
    }
    delete [] data;
}
int dynArr::getValue(int row, int column)
{
    return data[row][column];
}
void dynArr::setValue(int row, int column, int value)
{
    data[row][column] = value;
}


