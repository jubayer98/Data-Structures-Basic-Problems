#include <iostream>
#include "SortedType.cpp"

using namespace std;

int main()
{
    ///creating sorted type object
    SortedType<int> sortedObject;
    cout << "sorted list is being created\n" << endl;

    ///print the length
    cout << "length is: " << sortedObject.LengthIs() << endl;
    cout << endl;

    ///inserting five items + print the list
    cout << "insert five items:" << endl;
    int x;
    for(int i=0; i<5; i++)
    {
        cin >> x;
        sortedObject.InsertItem(x);
    }
    cout << endl;

    cout << "print the list:" << endl;
    sortedObject.PrintList();
    cout << endl;

    ///retrieve items, return found or not found
    bool flag;
    int a[1];
    for(int i=0; i<2; i++)
    {
        cout << "enter item want to retrieve: ";
        cin >> a[i];
        sortedObject.RetrieveItem(a[i], flag);
        if(flag == true)
            cout << "item is found\n" << endl;
        else
            cout << "item is not found\n" << endl;
    }

    ///check list is full or not
    if(sortedObject.IsFull() == true)
        cout << "list is full\n" << endl;
    else
        cout << "list is not full\n" << endl;

    ///delete one item and print the list
    cout << "item wants to delete: ";
    cin >> x;
    sortedObject.DeleteItem(x);
    cout << "\nitem 1 is deleted and print the list:" << endl;
    sortedObject.PrintList();
    cout << endl;

    ///check list is full or not
    if(sortedObject.IsFull() == true)
        cout << "list is full" << endl;
    else
        cout << "list is not full" << endl;

    return 0;
}
