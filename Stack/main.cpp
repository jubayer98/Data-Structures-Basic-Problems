#include <iostream>
#include "itemtype.h"
#include "stacktype.h"

using namespace std;

int main()
{
    stacktype stackObject;
    itemtype stackItem;

    ///check stack is empty or not
    if(stackObject.IsEmpty() == true)
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    ///initialize items and push four items in the stack
    int x;
    cout << "\nPush four items: " << endl;
    for(int i=0; i<MAX_ITEMS-1; i++)
    {
        cin >> x;
        stackItem.Initialize(x);
        stackObject.Push(stackItem);
    }

    ///recheck stack is empty or not
    if(stackObject.IsEmpty() == true)
        cout << "\nStack is empty." << endl;
    else
        cout << "\nStack is not empty." << endl;

    ///check stack is full or not
    if(stackObject.IsFull() == true)
        cout << "\nStack is full." << endl;
    else
        cout << "\nStack is not full." << endl;

    ///print the value user pushed
    cout << "\nPrint four values you pushed: " << endl;
    stackObject.PrintStack();

    ///pushing another item
    int newX;
    cout << "\nPush another item: ";
    cin >> newX;
    stackItem.Initialize(newX);
    stackObject.Push(stackItem);

    ///print all five values user pushed
    cout << "\nPrint all values you pushed: " << endl;
    stackObject.PrintStack();

    ///check if stack is full or not
    if(stackObject.IsFull() == true)
        cout << "\nStack is full." << endl;
    else
        cout << "\nStack is not full" << endl;

    ///pop two items from the stack
    for(int i=0; i<2; i++)
        stackObject.Pop();
    cout << "\nTwo items are popped out." << endl;

    ///print the top item of the stack
    cout << "\nTop item is: ";
    stackItem = stackObject.Top();
    stackItem.Print();
    cout << endl;

    cout << "\nSum of ODD number in the stack: ";
    cout << stackObject.sumOdd() << endl;
    cout << endl;

    cout << "--- END ---\n" << endl;

    return 0;
}
