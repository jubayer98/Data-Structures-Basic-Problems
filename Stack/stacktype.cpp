#include "stacktype.h"

stacktype::stacktype()
{
    top = -1;
}

bool stacktype::IsEmpty()
{
    return (top == -1);
}

bool stacktype::IsFull()
{
    return (top == MAX_ITEMS-1);
}

void stacktype::Push(itemtype newItem)
{
    if(IsFull())
        throw FullStack();

    top++;
    items[top] = newItem;
}

void stacktype::Pop()
{
    if(IsEmpty())
        throw EmptyStack();

    top--;
}

itemtype stacktype::Top()
{
    if(IsEmpty())
        throw EmptyStack();

    return items[top];
}

void stacktype::PrintStack()
{
    for(int i=top; i>=0; i--)
        items[i].Print();

    cout << endl;
}

int stacktype::sumOdd()
{
    int sum = 0;
    for(int i=0; i<=MAX_ITEMS; i++)
    {
        int val = items[i].getValue();

        if(val%2 == 1)
            sum = sum+val;
    }

    return sum;
}
