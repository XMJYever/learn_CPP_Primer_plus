#ifndef QUEUE1_H_
#define QUEUE1_H_

// This queue will contain Customer items
class Customer
{
private:
	long arrive;
	int processtime;
public:
	Customer(){arrive = processtime =0;};
	void set(long when);
	long when() const {return arrive};
	int ptime() const {return processtime};
};

typedef Customer Item;

class Queue
{
	enum {Q_SIZE = 10};

private:
	// class scope definitions
	// Node is a nested structure definition local to this class
	struct Node
	{
		Item item;
		Node * next;
	};
	// private class member
	Node *front;
	Node *rear;
	int	items;
	const int qsize;
		Queue (const Queue & q):qsize(0){}  // preemptive definition
		Queue & operator = (const Queue & q) {return *this}

public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue (const Item &item);  // add item to end
	bool dequeue (Item &item);  // remove item from front

};

#endif