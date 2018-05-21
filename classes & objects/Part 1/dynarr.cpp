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
    data = new int[s];
    size = s;
}

dynArr::~dynArr() ///destructor to delete and invoke data to free the memory unless garbage values
{
    delete [] data;
}

int dynArr::get(int index) ///to get values from the user just stored using set method
{
    return data[index];
}

void dynArr::set(int index, int value) ///to set values by the user
{
    data[index] = value;
}

///building functions themselves
