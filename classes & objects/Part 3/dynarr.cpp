#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int r, int c) ///r for row and c for column
{
    data = new int *[r];
    size = r;
    for(int i=0; i<r; i++)
    {
        data[i] = new int[c]; ///to create every column for every row
    }
}

dynArr::~dynArr()
{
    delete [] data;
}

void dynArr::set(int indexOne, int indexTwo, int value)
{
    data[indexOne][indexTwo] = value; ///to set two dimensional array's row and column values from the user(value)
}

int dynArr::get(int indexOne, int indexTwo)
{
    return data[indexOne][indexTwo]; ///for getting two dimensional array's row and column values
}

void dynArr::allocate(int r, int c)
{
    data = new int *[r];
    size = r;
    for(int i=0; i<r; i++)
    {
        data[i] = new int[c];
    }
}
