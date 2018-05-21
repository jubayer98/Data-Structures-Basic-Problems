#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
   int x;

    dynArr objectOne(); ///object with no constructor argument
    dynArr objectTwo(5); ///object with the argument 5

    ///take five input values from the user and stored them in the array inside the second object using the set method
    for(int i=0; i<5; i++)
    {
        cin >> x;
        objectTwo.set(i, x);
    }

    ///for the second object, print all the values used just stored
    cout << "Before allocate: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << objectTwo.get(i) << endl;
    }

    cout << "After allocate: " << endl;
    objectTwo.allocate(8); ///call the void allocate function
    for(int i=0; i<8; i++)
    {
        cout << objectTwo.get(i) << endl;
    }

    return 0;
}
