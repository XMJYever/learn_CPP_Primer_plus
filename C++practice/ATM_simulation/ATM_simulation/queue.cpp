#include <iostream>
#include "queue.h"
#include <cstdlib>

Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
	//qsize �ǳ���(��const�޶�)�����Կ��Զ������г�ʼ���������ܸ�����ֵ
}

Queue::~Queue()
{
	//�������е����н��ȫ���ų�
	Node *temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;  //�ж��Ƿ����0���������0����Ϊtrue������Ϊfalse.
}

bool Queue::isfull() const
{
	return items == qsize;
}

int	Queue::queuecount() const
{
	return items;
}

// add item to queue
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
	rear = add;
	return true;
}

// Place front item into item variable and remove from queue
bool Queue::dequeue(Item & item)
{
	if (front == NULL)
	{
		return false;
	}
	item = front->item;
	items--;
	Node * temp;
	temp = front;
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
	processtime = std::rand() % 3 + 1;
	arrive = when;
}