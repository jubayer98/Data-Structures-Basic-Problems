#include "rectangle.h"
#include <iostream>
#include <math.h>

using namespace std;

template<class T>
rectangle<T>::rectangle()
{
    width = 0;
    height = 0;
}

template<class T>
void rectangle<T>::setWidth(T w)
{
    width = w;
}

template<class T>
void rectangle<T>::setHeight(T h)
{
    height = h;
}

template<class T>
T rectangle<T>::computeArea()
{
    area = width*height;
    return area;
}

