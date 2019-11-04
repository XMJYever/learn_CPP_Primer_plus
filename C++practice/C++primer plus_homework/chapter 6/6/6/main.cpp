#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

struct Patron
{
	std::string name;
	double amount;
};

int main()
{
	int contributors = 0;
	int top_contributors = 0;
	int low_contributors = 0;
	cout << "Please enter the number of contributers: "<<endl;
	cin >> contributors;

	struct Patron *trPatron = new struct Patron[contributors];
	for (int i = 0; i < contributors; i++)
	{
		cin.get();

		cout << "enter the contributor's name"<<endl;
		getline(cin, trPatron[i].name);

		cout << "enter the amount: " << endl;
		cin >> trPatron[i].amount;
		
	}
	
	for (int i = 0; i < contributors; i++)
	{
		if (trPatron[i].amount > 10000)
		{
			cout << "Top contributor's name: " << trPatron[i].name << endl;
			cout << "Top contributor's amount" << trPatron[i].amount << endl;
			top_contributors++;
		}
	}
	if (top_contributors == 0)
	{
		cout << "none" << endl;
	}

	cout << "Patrons: " << endl;
	for (int i = 0; i < contributors; i++)
	{
		if (trPatron[i].amount < 10000)
		{
			cout << "Low contributors' name: " << trPatron[i].name << endl;
			cout << "Low contributors' amount: " << trPatron[i].amount << endl;
			low_contributors++;
		}
	}
	if (low_contributors == 0)
	{
		cout << "none" << endl;
	}

	system("pause");
	return 0;
}