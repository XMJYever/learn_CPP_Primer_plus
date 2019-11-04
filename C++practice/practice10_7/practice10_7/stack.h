// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_
#include <iostream>

typedef unsigned long Item;  // 将unsigned long这个类型命别名为Item

class  Stack
{
public:
	 Stack();
	 bool isempty() const;
	 bool isfull() const;
	 // push() returns false if stack already is full, true otherwise
	 bool push(const Item & item);
	 // pop() return false if stack already is empty, ture otherwise
	 bool pop(Item & item);
	~ Stack();

private:
	enum { MAX = 10 };
	Item items[MAX];  // holds stack items
	int top;  // index for top stack item

};

 Stack:: Stack()
{
	top = 0;
}

 Stack::~ Stack()
{
	std::cout << "Bye.\n";
}

#endif