#include <iostream>
#include <string>

using namespace std;

typedef struct PIZZA_INFO
{
	string name;
	double size;
	double weight;
}ST_PIZZA_INFO;

int main()
{
	ST_PIZZA_INFO *pizza_info = new ST_PIZZA_INFO;

	cout << "please enter the size you wanted: " << endl;
	cin >> pizza_info->size;

	cin.get(); //获取了回车符， 为获取输入的name做准备, 从指定的输入流中提取一个字符，函数的返回值就是这个字符。
	cout << "enter the name: " << endl;
	getline(cin, pizza_info->name);

	cout << "enter the weight you wanted: " << endl;
	cin >> pizza_info->weight;

	cout << "The company name of pizza is " << pizza_info->name << ", the size of the pizza is " << pizza_info->size << ", the weight of the pizza is " << pizza_info->weight << endl;
	
	delete pizza_info;
	return 0;
}