#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

template <class ItemType>

struct NodeType
{
    ItemType info;
    NodeType* next;
};

class FullStack{};
class EmptyStack{};

template <class ItemType>
class StackType
{
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    void PrintStack();
    void ReplaceItem(int, int);

private:
    NodeType<ItemType>* topPtr;
};

#endif // STACKTYPE_H_INCLUDED
