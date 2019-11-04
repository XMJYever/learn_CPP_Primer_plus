#include <iostream>

using namespace std;

struct fish
{
	const char *type;
	int weight;
	float length;
	/* some really interesting data,etc. */

	void say() {
		cout << type << "的重量是：" << weight << ", 长度是:" << length << endl;
	}

};

int main() {
	fish f1, f2, f3;
	f1.type = "shark";
	f1.weight = 456;
	f1.length = 45.2;
	//fish *p2 = new fish;
	fish *p1 = &f2;
	p1->type = "white";
	p1->weight = 12;
	p1->length = 23.4f;
	p1->say();
	system("pause");
	return 0;
}