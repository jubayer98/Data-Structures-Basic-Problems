#include <iostream>
#include "rectangle.h"
#include "rectangle.cpp"

using namespace std;

int main()
{
    rectangle<int> rectangleIntObject;
    rectangle<double> rectangleDoubleObject;

    int widthValueInt, heightValueInt;
    double widthValueDouble, heightValueDouble;

    cout << "Enter the Width(int): ";
    cin >> widthValueInt;
    rectangleIntObject.setWidth(widthValueInt);

    cout << "Enter the Height(int): ";
    cin >> heightValueInt;
    rectangleIntObject.setHeight(heightValueInt);

    cout << "\nArea of the Rectangle(int): " << rectangleIntObject.computeArea() << endl;

    cout << endl;
    cout << endl;

    cout << "Enter the Width(double): ";
    cin >> widthValueDouble;
    rectangleDoubleObject.setWidth(widthValueDouble);

    cout << "Enter the Height(double): ";
    cin >> heightValueDouble;
    rectangleDoubleObject.setHeight(heightValueDouble);

    cout << "\nArea of the Rectangle(double): " << rectangleDoubleObject.computeArea() << endl;


    return 0;
}
