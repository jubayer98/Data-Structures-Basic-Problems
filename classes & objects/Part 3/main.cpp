#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynArr objectOne();
    dynArr objectTwo(3, 3);

    int x;

    cout << "Enter 3x3 arrays:" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> x;
            objectTwo.set(i, j, x);
        }
    }

    cout << "Before Allocation: " << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << objectTwo.get(i, j) << "\t";
        }
        cout << "\n";
    }

    cout << "After Allocation: " << endl;
    objectTwo.allocate(4, 4);
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << objectTwo.get(i, j) << "\t";
        }
        cout << "\n";
    }

    return 0;
}
