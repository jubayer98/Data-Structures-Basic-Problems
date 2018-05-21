#include <iostream>
#include "StackType.h"
using namespace std;

template<class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}

template<class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}

template<class ItemType>
ItemType StackType<ItemType>::Top()
{
    if(IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType<ItemType>* location;
    try
    {
        location = new NodeType<ItemType>;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    else
    {
        NodeType<ItemType>* location;
        location = new NodeType<ItemType>;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template<class ItemType>
void StackType<ItemType>::Pop()
{
    if(IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType<ItemType>* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template<class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType<ItemType>* tempPtr;
    while(topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template<class ItemType>
void StackType<ItemType>::PrintStack()
{
    NodeType<ItemType> *tempPtr;
    tempPtr = topPtr;
    while(tempPtr != NULL)
    {
        cout << tempPtr->info << endl;
        tempPtr = tempPtr->next;
    }
}

template<class ItemType>
void StackType<ItemType>::ReplaceItem(int oldItem, int newItem)
{
    NodeType<ItemType> *tempPtr;
    tempPtr = topPtr;
    while(tempPtr != NULL)
    {
        if(tempPtr->info == oldItem)
        {
            tempPtr->info = newItem;
            tempPtr = tempPtr->next;
        }
        else
            tempPtr = tempPtr->next;
    }
}
