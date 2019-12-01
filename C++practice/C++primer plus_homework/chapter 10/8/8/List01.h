#pragma once
#include <iostream>

#define MAX_NUM 25

// ��ģ��
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

// Ѱ�ҳ�ʼֵ
template <class nItem>
void origin(nItem &item);

// ��ֵ����2
template <class nItem>
void x2(nItem &item);

// ��ֵ��Ϊԭ����һ��
template <class nItem>
void half(nItem &item);