#include <iostream>
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    ///creating unsorted type object
    UnsortedType<int> unsortedObject;
    cout << "unsorted list is being created\n" << endl;

    ///inserting four items + print the list
    cout << "insert four items:" << endl;
    int x;
    for(int i=0; i<4; i++)
    {
        cin >> x;
        unsortedObject.InsertItem(x);
    }
    cout << endl;

    cout << "print the list:" << endl;
    unsortedObject.PrintList();
    cout << endl;

    ///print the length
    cout << "\nlength is: " << unsortedObject.LengthIs() << endl;
    cout << endl;

    ///insert one more item + print the new list
    cout << "insert another item: ";
    cin >> x;
    unsortedObject.InsertItem(x);
    cout << endl;

    cout << "print the new list:" << endl;
    unsortedObject.PrintList();
    cout << endl;

    ///retrieve items, return found or not found
    bool flag;
    int a[3];
    for(int i=0; i<4; i++)
    {
        cout << "enter item want to retrieve: ";
        cin >> a[i];
        unsortedObject.RetrieveItem(a[i], flag);
        if(flag == true)
            cout << "item is found\n" << endl;
        else
            cout << "item is not found\n" << endl;
    }

    ///check list is full or not
    if(unsortedObject.IsFull() == true)
        cout << "list is full\n" << endl;
    else
        cout << "list is not full\n" << endl;

    ///delete one item and check list is full or not
    cout << "item wants to delete: ";
    cin >> x;
    unsortedObject.DeleteItem(x);
    cout << "item 5 is deleted\n" << endl;
    if(unsortedObject.IsFull() == true)
        cout << "list is full\n" << endl;
    else
        cout << "list is not full\n" << endl;

    ///delete one more item and print the list
    cout << "another item wants to delete: ";
    cin >> x;
    unsortedObject.DeleteItem(x);
    cout << "item 1 is deleted and list is:" << endl;
    unsortedObject.PrintList();
    cout << endl;

    ///delete another item and print the list
    cout << "one more item wants to delete: ";
    cin >> x;
    unsortedObject.DeleteItem(x);
    cout << "item 6 is deleted and list is:" << endl;
    unsortedObject.PrintList();

    return 0;
}
