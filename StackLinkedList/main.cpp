#include <iostream>
#include "StackType.cpp"

using namespace std;

int main()
{
    StackType<int> stackObject;
    cout << "Stack is created...\n" << endl;

    ///check at the initial time stack is empty or not
    if(stackObject.IsEmpty() == true)
        cout << "Stack is empty...\n" << endl;
    else
        cout << "Stack is not empty...\n" << endl;

    ///pushing for items
    cout << "Push four items:" << endl;

    NodeType<int> x;
    for(int i=0; i<4; i++)
    {
        cin >> x.info;
        stackObject.Push(x.info);
    }
    cout << endl;

    ///after pushing again check stack is empty or not
    if(stackObject.IsEmpty() == true)
        cout << "Stack is empty...\n" << endl;
    else
        cout << "Stack is not empty...\n" << endl;

    ///checking stack is full or not
    if(stackObject.IsFull() == true)
        cout << "Stack is full...\n" << endl;
    else
        cout << "Stack is not full...\n" << endl;

    ///print the values of the stack
    cout << "Printing the stack:" << endl;
    stackObject.PrintStack();
    cout << endl;

    ///push new item in the stack
    cout << "Push another item: ";
    cin >> x.info;
    stackObject.Push(x.info);
    cout << endl;

    ///printing new stack
    cout << "\nNew stack is printing..." << endl;
    stackObject.PrintStack();
    cout << endl;

    ///giving all values to check stack is full or not
    if(stackObject.IsFull() == true)
        cout << "\Stack is full...\n" << endl;
    else
        cout << "\Stack is not full...\n" << endl;

    ///pop two items
    for(int i=0; i<2; i++)
        stackObject.Pop();
    cout << "Two items are popped...\n" << endl;

    ///print the top item
    cout << "Top item is: " << stackObject.Top() << "\n" << endl;

    ///replacing items
    StackType<int> newStackObject;

    cout << "\nPush five items:" << endl;
    NodeType<int> newItem;
    for(int i=0; i<5; i++)
    {
        cin >> newItem.info;
        newStackObject.Push(newItem.info);
    }
    cout << endl;

    cout << "\nValues in the stack are:" << endl;
    newStackObject.PrintStack();

    int oldI, newI;
    cout << "Enter the item want to replace: ";
    cin >> oldI;

    cout << "Enter the item put in replace value: ";
    cin >> newI;

    newStackObject.ReplaceItem(oldI, newI);

    cout << endl;

    cout << "After replacing item:" << endl;
    newStackObject.PrintStack();

    return 0;
}
