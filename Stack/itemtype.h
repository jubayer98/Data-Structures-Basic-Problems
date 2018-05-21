#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;

class itemtype
{
public:
    itemtype();
    void Print();
    void Initialize(int number);
    int getValue();

private:
    int value;
};

#endif // ITEMTYPE_H_INCLUDED
