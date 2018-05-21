#include "SortedType.h"
#include <iostream>
using namespace std;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    listData = currentPos = NULL;
}

template<class ItemType>
int SortedType<ItemType>::LengthIs()
{
    return length;
}

template<class ItemType>
bool SortedType<ItemType>::IsFull()
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
void SortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType<ItemType>* newNode;
    NodeType<ItemType>* predLoc;
    NodeType<ItemType>* location;
    bool moreToSearch;

    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);

    while(moreToSearch)
    {
        if(location->info < item)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }

    newNode = new NodeType<ItemType>;
    newNode->info = item;

    if(predLoc == NULL)
    {
        newNode->next = listData;
        listData = newNode;
    }
    else
    {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}

template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
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
void SortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    NodeType<ItemType>* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;

    while(moreToSearch && !found)
    {
        if(item == location->info)
            found = true;
        else if(item > location->info)
        {
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }
}

template<class ItemType>
void SortedType<ItemType>::MakeEmpty()
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
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}

template<class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}

template<class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;

    item = currentPos->info;
}

template<class ItemType>
void SortedType<ItemType>::PrintList()
{
    NodeType<ItemType>* location = listData;
    while(location != NULL)
    {
        cout << location->info << endl;
        location = location->next;
    }
}
