#include <iostream>
#include "triangle.h"
#include "triangle.cpp"

using namespace std;

int main()
{
    triangle<int> triangleIntObject;
    triangle<double> triangleDoubleObject;

    int baseValueInt, heightValueInt;
    double baseValueDouble, heightValueDouble;

    ///for int value
    cout << "Enter Base(int): ";
    cin >> baseValueInt;
    triangleIntObject.setBase(baseValueInt);

    cout << "Enter Height(int): ";
    cin >> heightValueInt;
    triangleIntObject.setHeight(heightValueInt);

    cout << endl;

    cout << "Value of Hypotenuse(int): " << triangleIntObject.computeHypotenuse() << endl;
    cout << "Value of Area(int): " << triangleIntObject.computeArea() << endl;

    cout << endl;
    cout << endl;

    ///for double value
    cout << "Enter Base(double): ";
    cin >> baseValueDouble;
    triangleDoubleObject.setBase(baseValueDouble);

    cout << "Enter Height(double): ";
    cin >> heightValueDouble;
    triangleDoubleObject.setHeight(heightValueDouble);

    cout << endl;

    cout << "Value of Hypotenuse(double): " << triangleDoubleObject.computeHypotenuse() << endl;
    cout << "Value of Area(double): " << triangleDoubleObject.computeArea() << endl;

    return 0;
}
