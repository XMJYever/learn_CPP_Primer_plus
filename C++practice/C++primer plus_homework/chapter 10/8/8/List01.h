#pragma once
#include <iostream>

#define MAX_NUM 25

// 类模板
template <class nItem>
class List
{
public:
	List() { top = 0; }
	~List() { };
	bool add(nItem &item);
	bool isfull();
	bool isempty();
	void visit(void(*pf)(nItem &));

private:
	nItem items[MAX_NUM];
	int top;
};

// 寻找初始值
template <class nItem>
void origin(nItem &item);

// 将值乘以2
template <class nItem>
void x2(nItem &item);

// 将值变为原来的一半
template <class nItem>
void half(nItem &item);