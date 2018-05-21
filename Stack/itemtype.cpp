#include "itemtype.h"

itemtype::itemtype()
{
    value = 0;
}

void itemtype::Initialize(int number)
{
    value = number;
}

void itemtype::Print()
{
    cout << value << " ";
}

int itemtype::getValue()
{
    return value;
}
