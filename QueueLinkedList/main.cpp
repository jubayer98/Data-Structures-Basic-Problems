#include <iostream>
#include "QueType.cpp"
using namespace std;

int main()
{
    ///creating queue object
    QueType<int> queObject;
    cout << "Queue is created...\n" << endl;

    ///check if queue is empty or not
    if(queObject.IsEmpty() == true)
        cout << "Queue is empty...\n" << endl;
    else
        cout << "Queue is not empty...\n" << endl;

    ///enqueue items
    cout << "Enqueue four items:" << endl;
    NodeType<int> x;
    for(int i=0; i<4; i++)
    {
        cin >> x.info;
        queObject.Enqueue(x.info);
    }
    cout << endl;

    ///recheck queue is empty or not
    if(queObject.IsEmpty() == true)
        cout << "Queue is empty...\n" << endl;
    else
        cout << "Queue is not empty...\n" << endl;

    ///check if queue is full or not
    if(queObject.IsFull() == true)
        cout << "Queue is full...\n" << endl;
    else
        cout << "Queue is not full...\n" << endl;

    ///enqueue another item
    cout << "Enqueue another item: ";
    cin >> x.info;
    queObject.Enqueue(x.info);

    ///print all values
    cout << "\nPrinting full queue:" << endl;
    queObject.PrintQueue();
    cout << endl;

    ///recheck queue is full or not
    if(queObject.IsFull() == true)
        cout << "Queue is full...\n" << endl;
    else
        cout << "Queue is not full...\n" << endl;

    ///enqueue another item
    cout << "Enqueue one more item: ";
    cin >> x.info;
    queObject.Enqueue(x.info);
    cout << endl;

    ///dequeue two items
    for(int i=0; i<2; i++)
        queObject.Dequeue(x.info);
    cout << "Two items are dequeued...\n" << endl;

    ///dequeue another items
    queObject.Dequeue(x.info);
    cout << "One more item is dequeued...\n" << endl;

    ///print the remaining value
    cout << "Print the remaining values:" << endl;
    queObject.PrintQueue();
    cout << endl;

    ///dequeue three items
    for(int i=0; i<3; i++)
        queObject.Dequeue(x.info);
    cout << "Three items are dequeued...\n" << endl;

    ///check now queue is empty or not
    if(queObject.IsEmpty() == true)
        cout << "Queue is empty...\n" << endl;
    else
        cout << "Queue is not empty...\n" << endl;

    /*//check underflow or not
    queObject.Dequeue(x.info);
    if(queObject.IsEmpty() == -1)
        cout << "Queue is underflow...\n" << endl;
    else
        cout << "Queue is not underflow...\n" << endl;
    */

    //finding length
    QueType<int> newQueObject;
    cout << "\nEnqueue five items:" << endl;
    NodeType<int> number;

    for(int i=0; i<5; i++)
    {
        cin >> number.info;
        newQueObject.Enqueue(number.info);
    }

    cout << endl;

    cout << "Values in the queue are:" << endl;
    newQueObject.PrintQueue();

    cout << endl;

    cout << "Length of the Queue is: ";
    cout << newQueObject.Length();

    return 0;
}
