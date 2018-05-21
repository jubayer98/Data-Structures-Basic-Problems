#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

template<class ItemType>

struct NodeType
{
    ItemType info;
    NodeType* next;
};

class FullQueue{};
class EmptyQueue{};

template<class ItemType>
class QueType
{
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
    void PrintQueue();
    int Length();

private:
    NodeType<ItemType>* front;
    NodeType<ItemType>* rear;
};

#endif // QUETYPE_H_INCLUDED
