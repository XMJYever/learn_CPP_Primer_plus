#include <iostream>
#include <string>
std::string;
using std::cout;
using std::cin;
using std::endl;

// ���ʹ��char��Ӧ��д��������ʽchar a[128];

int main()
{
	std::string firName, lasName;
	char grade;
	int age;

	std::cout << "What is your first name? ";
	getline(cin, firName);
	std::cout << endl;
	cout << "What is your last name? ";
	getline(cin, lasName);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lasName << ", " << firName<<endl;
	cout << "Grade: " << char(grade + 1)<<endl;
	cout << "Age: " << age << endl;
	system("pause");
	return 0;
}