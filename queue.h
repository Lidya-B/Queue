//*****************************************************************************************************
//
//		File:					queue.h
//
//		This program will build a linked list based queue and test the data structure.
//	
//		Other files required: 
//			1.	node.h
//          2.  qDriver.cpp
//			
//*****************************************************************************************************

#ifndef QUEUE_H
#define QUEUE_H

//*****************************************************************************************************

#include "node.h"
#include <new>

//*****************************************************************************************************

template <typename TYPE>
class Queue
{
private:
	node<TYPE>* front;
	node<TYPE>* rear;
	int numvalues;
public:
	Queue();
	~Queue();
	bool enqueue(const TYPE& datain);
	bool dequeue(TYPE& dataout);
	bool viewFront(TYPE& dataout)const;
	bool viewRear(TYPE& dataout)const;
	int getNumValues()const;
	bool isFull()const;
	bool isEmpty()const;

};

//*****************************************************************************************************

template<typename TYPE>
Queue<TYPE>::Queue()
{
	front = nullptr;
	rear = nullptr;
	numvalues = 0;

}

//*****************************************************************************************************

template<typename TYPE>
Queue<TYPE>::~Queue()
{
	node<TYPE>* temp = front;

	while (front != nullptr)
	{
		front = front->next;
		delete temp;
	}

	rear = nullptr;
	numvalues = 0;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE>::enqueue(const TYPE& datain)
{
	bool success = false;

	node<TYPE>* pnew;
	pnew = new (nothrow)node<TYPE>(datain);

	if (pnew)
	{
		if (rear)
		{
			rear->next = pnew;

		}
		else
		{
			front = pnew;

		}

		rear = pnew;
		numvalues++;

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE>::dequeue(TYPE& dataout)
{
	bool success = false;

	node<TYPE>* pDel = front;

	if (front)
	{
		dataout = front->data;
		front = front->next;
		numvalues--;
		delete pDel;
		success = true;

		if (front == nullptr)
		{
			rear = nullptr;

		}

	}

	return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE>::viewFront(TYPE& dataout) const
{
	bool success = front;

	if (front)
	{
		dataout = front->data;
		success = true;

	}

	return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE>::viewRear(TYPE& dataout) const
{
	bool success = false;

	if (rear)
	{
		dataout = rear->data;
		success = true;

	}

	return success;
}

//*****************************************************************************************************

template<typename TYPE>
int Queue<TYPE>::getNumValues() const
{
	return (numvalues);
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE>::isFull() const
{
	bool success = false;

	node<TYPE>* pnew;
	pnew = new (nothrow)node<TYPE>;

	if (pnew) 
	{
		delete pnew;
		success = true;
	}

	return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE>::isEmpty() const
{
	return (front==nullptr);

}

//*****************************************************************************************************

#endif