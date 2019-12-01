#include "List01.h"

//记住还是得声明类模板
template <class nItem>
bool List<nItem>::add(nItem &item)
{
	if (top<MAX_NUM)
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

template <class nItem>
bool List<nItem>::isempty()
{
	if (top == 0)
	{
		return true;
	}
	else
		return false;
	// return top == 0;
}

template <class nItem>
bool List<nItem>::isfull()
{
	if (top == MAX_NUM - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class nItem>
void List<nItem>::visit(void(*pf)(nItem &))
{
	for (int i = 0; i < top; i++)
	{
		std::cout << "#" << i << ":";
		pf(items[i]);
	}
}

template <class nItem>
void origin(nItem &item)
{
	std::cout << item << std::endl;
}

template <class nItem>
void x2(nItem &item)
{
	item = item * 2;
	std::cout << item << std::endl;
}

template <class nItem>
void half(nItem &item)
{
	item = item / 2;
	std::cout << item << std::endl;
}