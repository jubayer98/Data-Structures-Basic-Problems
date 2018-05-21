#include "sortedtype.h"
#include "itemtype.h"

#include <iostream>

using namespace std;

int main()
{
    SortedType sortedObject;

    cout << "Length of the List is: " << sortedObject.LengthIs() << "\n" <<endl;

    ///insert four items
    cout << "Insert Four Item: " << endl;
    for(int i=0; i<MAX_ITEMS-1; i++)
    {
        ItemType I;
        int x = 0;

        cin >> x;

        I.Initialize(x);
        sortedObject.InsertItem(I);
    }

    cout << endl;

    ///print four insert items
    cout << "Print Four Insert Items: " << endl;
    sortedObject.PrintList();
    cout << endl;

    ///print the length of the list
    cout << "\nLength of the list is: " << sortedObject.LengthIs() << endl;
    cout << endl;

    ///inserting one new item
    ItemType newI;
    int newX = 0;

    cout << "Insert One Item: ";
    cin >> newX;
    newI.Initialize(newX);
    sortedObject.InsertItem(newI);
    cout << endl;

    ///print five insert items with new one
    cout << "Print Five Insert Items with New One: " << endl;
    sortedObject.PrintList();
    cout << endl;
    cout << endl;

    ///retrieve one of the items from the list
    ItemType retrieveI;
    int retrieveX = 0;
    bool flag;

    for(int i=0; i<2; i++)
    {

        cout << "Insert the Item which You Want to Retrieve: ";
        cin >> retrieveX;
        retrieveI.Initialize(retrieveX);
        sortedObject.RetrieveItem(retrieveI, flag);

        if(flag == true)
            cout << "Item is FOUND :)" << endl;
        else
            cout << "Item is NOT FOUND :(" << endl;
    }

    ///print if list full or not
    if(sortedObject.IsFull() == true)
        cout << "\nList is Full *_*" << endl;

    ///delete one item and print if list full or not
    ItemType deleteI1;
    int deleteX1 = 0;

    cout << "\nInsert the Item Which You Want to Delete: ";
    cin >> deleteX1;
    deleteI1.Initialize(deleteX1);
    sortedObject.DeleteItem(deleteI1);
    cout << "Item " << deleteX1 << " is deleted successfully!" << endl;

    if(sortedObject.IsFull() != true)
        cout << "\nDelete one Item from the list, so the list is not FULL!" << endl;

    ///delete one more item and print the list
    ItemType deleteI2;
    int deleteX2 = 0;

    cout << "\nInsert one more item which you want to Delete: ";
    cin >> deleteX2;
    deleteI2.Initialize(deleteX2);
    sortedObject.DeleteItem(deleteI2);
    cout << "Item " << deleteX2 << " is deleted successfully!" << endl;
    cout << "\nAfter deleting " << deleteX1 << " and " << deleteX2 << " items, new list is: " << endl;
    sortedObject.PrintList();
    cout << endl;

    ///delete one more item too and print the list
    ItemType deleteI3;
    int deleteX3 = 0;

    cout << "\nInsert one last item which you want to Delete: ";
    cin >> deleteX3;
    deleteI3.Initialize(deleteX3);
    sortedObject.DeleteItem(deleteI3);
    cout << "Item " << deleteX3 << " is deleted successfully!" << endl;
    cout << "\nAfter deleting " << deleteX1 << ", " << deleteX2 << " and " << deleteX3 <<" items, new list is: " << endl;
    sortedObject.PrintList();

    cout << "\n\n--- END ---- " << endl;
    return 0;
}
