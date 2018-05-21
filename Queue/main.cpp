#include <iostream>
#include "QueType.cpp"

using namespace std;

int main()
{
     // specify size so it gives overflow error once the size has been exceeded

    //int x;
    QueType<int> queObject(6);

    ///print if the queue is empty or not
    if(queObject.IsEmpty() == true)
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;



    ///enqueue four items
    //cout << "\nEnter the size of the Queue: ";

    cout << "\nEnqueue four items:" << endl;

    int n;
    for(int i=0; i<4; i++)
    {
        //int n;
        cin >> n;
        queObject.Enqueue(n);
    }

    queObject.PrintQueue();

    ///print if queue is empty or not
    if(queObject.IsEmpty() == true)
        cout << "\nQueue is empty." << endl;
    else
        cout << "\nQueue is not empty." << endl;

    ///print if queue is full or not
    if(queObject.IsFull() == true)
        cout << "\nQueue is full." << endl;
    else
        cout << "\nQueue is not full." << endl;

    ///enqueue another item
    cout << "\nEnqueue another item: ";
    queObject.Enqueue(6);

    ///print all values in the queue
    cout << "\nPrint all values in the queue:" << endl;
    queObject.PrintQueue();
    cout << endl;

    ///print if the queue is full or not
    if(queObject.IsFull() == true)
        cout << "\nQueue is full." << endl;
    else
        cout << "\nQueue is not full." << endl;
    //---- wrong approach

    /*
    try
    {
        queObject.Enqueue(8);
    }
    catch(FullQueue e)
    {
        cout<<"Overflow"<<endl;
    }
    */

    ///dequeue two items
    //int n;
    queObject.Dequeue(n);
    cout<<"Dequeued element:"<<n<<endl;
    queObject.Dequeue(n);
    cout<<"Dequeued element:"<<n<<endl;


    //queObject.Dequeue(7);
    cout << "\nTwo items are dequeued." << endl;

    ///print three values remaining in the queue
    cout << "\nPrint the remaining values:" << endl;
    queObject.PrintQueue();
    cout << endl;

    return 0;
}
