//*****************************************************************************************************
//
//		File:					qDriver.cpp
//
//		This program will build a linked list based queue and test the data structure.
//	
//		Other files required: 
//			1.	node.h
//          2.  queue.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "node.h"
#include "queue.h"

//*****************************************************************************************************

int main()
{
    Queue<int> myQueue; 

    for (int i = 1; i <= 5; ++i) 
    {
        myQueue.enqueue(i);
    }

    cout << "Number of values in the queue: " << myQueue.getNumValues() << endl;

    cout << endl;

    int frontValue;
    myQueue.viewFront(frontValue);
    cout << "Front value: " << frontValue << endl;

    int rearValue;
    myQueue.viewRear(rearValue);
    cout << "Rear value: " << rearValue << endl;

    cout << endl;

    int dequeuedValue;

    while (!myQueue.isEmpty()) 
    {
        myQueue.dequeue(dequeuedValue);
        cout << "Dequeued value: " << dequeuedValue << endl;
    }

    cout << endl;
    cout << "Number of values in the queue: " << myQueue.getNumValues() << endl;

    if (myQueue.isEmpty())
    {
        cout << "The list is empty." << endl;
    }
    else
    {
        cout << "the list is not empty." << endl;
    }

    if (myQueue.isFull())
    {
        cout << "The list is not full." << endl;
    }
    else
    {
        cout << "the list is full." << endl;
    }

    return 0;
}

//*****************************************************************************************************

