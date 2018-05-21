#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include "itemtype.h"

class FullStack
{};

class EmptyStack
{};

class stacktype
{
public:
    stacktype();
    bool IsFull();
    bool IsEmpty();
    void Push(itemtype item);
    void Pop();
    itemtype Top();
    void PrintStack();
    int sumOdd();

private:
    int top;
    itemtype items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
