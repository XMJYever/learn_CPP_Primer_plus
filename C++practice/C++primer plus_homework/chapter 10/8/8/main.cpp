#include <iostream>
#include "List01.h"
#include "List01.cpp"

int main()
{
	// һ��Ҫ���<>��ģ����
	List<int> list;
	if (list.isempty())
	{
		std::cout << "List is empty." << std::endl;
	}

	// ʹ��autoָ��
	auto item1 = 1;
	auto item2 = 2;
	auto item3 = 3;

	// ���
	list.add(item1);
	list.add(item2);
	list.add(item3);

	if (list.isfull())
	{
		std::cout << "List is full." << std::endl;
	}

	list.visit(origin);
	list.visit(x2);
	list.visit(half);

	system("pause");
	return 0;
}