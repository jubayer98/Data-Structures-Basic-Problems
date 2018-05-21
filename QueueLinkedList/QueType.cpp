#include "QueType.h"
#include <iostream>
using namespace std;

template<class ItemType>
QueType<ItemType>::QueType()
{
    rear = front = NULL;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
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
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if(IsFull())
        throw FullQueue();
    else
    {
        NodeType<ItemType>* newNode;
        newNode = new NodeType<ItemType>;
        newNode->info = newItem;
        newNode->next = NULL;

        if(rear == NULL)
            front = newNode;
        else
            rear->next = newNode;

        rear = newNode;
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(IsEmpty())
        throw EmptyQueue();
    else
    {
        NodeType<ItemType>* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;

        if(front == NULL)
            rear = NULL;

        delete tempPtr;
    }
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType<ItemType>* tempPtr;

    while(front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}

template<class ItemType>
void QueType<ItemType>::PrintQueue()
{
    NodeType<ItemType> *tempPtr;
    tempPtr = front;
    while(tempPtr != NULL)
    {
        cout << tempPtr->info << endl;
        tempPtr = tempPtr->next;
    }
}

template<class ItemType>
int QueType<ItemType>::Length()
{
    NodeType<int> *tempPtr;
    tempPtr = front;
    int sum = 0;

    while(tempPtr != NULL)
    {
        tempPtr = tempPtr->next;
        sum = sum+1;
    }
    return sum;
}
