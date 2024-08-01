//*****************************************************************************************************
//
//		File:					node.h
//
//		This program will build a linked list based queue and test the data structure.
//	
//		Other files required: 
//			1.	qDriver.cpp
//          2.  queue.h
//			
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

template <typename TYPE>
struct node
{
	TYPE data;
	node<TYPE>* next;

	node();
	node(const TYPE& d, node<TYPE>* n = nullptr);
};

//*****************************************************************************************************

template<typename TYPE>
node<TYPE>::node()
{
	data = 0;
	next = nullptr;
}

//*****************************************************************************************************

template<typename TYPE>
node<TYPE>::node(const TYPE& d, node<TYPE>* n)
{
	data = d;
	next = n;
}

//*****************************************************************************************************

#endif

