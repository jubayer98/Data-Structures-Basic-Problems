#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

template<class ItemType>
struct NodeType
{
    ItemType info;
    NodeType* next;
};

template<class ItemType>
class SortedType
{
public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
    void PrintList();

private:
    NodeType<ItemType>* listData;
    int length;
    NodeType<ItemType>* currentPos;
};

#endif // SORTEDTYPE_H_INCLUDED
