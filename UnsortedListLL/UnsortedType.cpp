#include "UnsortedType.h"
#include <iostream>
using namespace std;

template<class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template<class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
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
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType<ItemType>* location;
    location = new NodeType<ItemType>;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;
}

template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType<ItemType>* location = listData;
    NodeType<ItemType>* tempLocation;

    if(item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while(!(item == (location->next)->info))
            location = location->next;

        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template<class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    NodeType<ItemType>* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;

    while(moreToSearch && !found)
    {
        if(item == location->info)
            found = true;
        else
        {
            location = location->next;
            moreToSearch = (location != NULL);
        }
    }
}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType<ItemType>* tempPtr;

    while(listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}

template<class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;

    item = currentPos->info;
}

template<class ItemType>
void UnsortedType<ItemType>::PrintList()
{
    NodeType<ItemType>* location = listData;
    while(location != NULL)
    {
        cout << location->info << endl;
        location = location->next;
    }
}
