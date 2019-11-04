#include <iostream>
#include "Queue1.h"

Queue::Queue(int qs)
{
	front = rear = NULL;
	items = 0;
	qsize = qs;
}

Queue::~Queue()
{
	//将队列中的所有结点全都排出
	Node *temp;
	while (!front)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;  //判断是否等于0，如果等于0，则为true，否则为false.
}

bool Queue::isfull() const
{
	return items == qsize;
}

int	Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue(const Item &item)
{
	if (isfull())
	{
		return false;
	}
	Node * add = new Node;  // create node
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
	{
		front = add;
	}
	else
		rear->next = add;
	return true;
}

// Place front item into item variable and remove from queue
bool dequeue(Item &item)
{
	if (front == NULL)
	{
		return false;
	}
	else
		Node *temp = front;
		front = front->next;
		delete temp;
	if (items == 0)
	{
		rear = NULL;
	}
	return true;
}

// time set to a random value in the range 1-3
void Customer::set(long when)
{
	processtime = std::rand() % 3+1;
	arrive = when;
}