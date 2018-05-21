#include "unsortedtype.h"

UnsortedType::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

void UnsortedType::MakeEmpty()
{
    length = 0;
}

bool UnsortedType::IsFull()
{
    return (length == MAX_ITEMS);
}

int UnsortedType::LengthIs()
{
    return length;
}

void UnsortedType::ResetList()
{
    currentPos = -1;
}

void UnsortedType::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}

void UnsortedType::InsertItem(ItemType item)
{
    info[length] = item;
    length++;
}

void UnsortedType::DeleteItem(ItemType item)
{
    int location = 0;

    while(item.ComparedTo(info[location]) != EQUAL)
        location++;

    info[location] = info[length - 1];
    length--;
}

void UnsortedType::RetrieveItem(ItemType& item, bool& found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;

    while(moreToSearch && !found)
    {
        switch(item.ComparedTo(info[location]))
        {
        case LESS:
        case GREATER:
            location++;
            moreToSearch = (location < length);
            break;
        case EQUAL:
            found = true;
            item = info[location];
        }
    }
}

void UnsortedType::PrintList()
{
    for(int i=0; i<length; i++)
    {
        info[i].Print();
    }
}
