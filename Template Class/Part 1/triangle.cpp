#include "triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

template<class T>
triangle<T>::triangle()
{
    base = 0;
    height = 0;
}

template<class T>
void triangle<T>::setBase(T b)
{
    base = b;
}

template<class T>
void triangle<T>::setHeight(T h)
{
    height = h;
}

template<class T>
T triangle<T>::computeHypotenuse()
{
    hypotenuse = sqrt((base*base)+(height*height));
    return hypotenuse;
}

template<class T>
T triangle<T>::computeArea()
{
    area = 0.5*base*height;
    return area;
}


