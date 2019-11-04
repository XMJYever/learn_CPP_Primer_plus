#include <iostream>

using namespace std;
const int SLEN = 30;

struct  student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get()!='\n')
	{
		continue;
	}
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int enter = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the information of student #" << i + 1 << endl;
		cout << "Enter full name(blank line to quit): ";
		cin.getline(pa[i].fullname, SLEN);
		cout << "Enter hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enter ooplevel: ";
		while (cin.get() != '\n')
		{
			continue;
		}
		enter++;
	}
	return enter;
}

void display1(student st)
{
	cout << "Using display1(student st): " << endl;
	cout << "Full name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}
void display2(const student *st)
{
	cout << "Using display2(const student *st)" << endl;
	cout << "Full name: " << st->fullname << endl;
	cout << "Hobby: " << st->hobby << endl;
	cout << "Ooplevel: " << st->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	cout << "Using display3(const student pa[], int n)" << endl;;
	for (int i = 0; i < n; i++)
	{
		cout << "Infomation of student #" << i + 1 << ": " << endl;
		cout << "Full name: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Ooplevel: " << pa[i].ooplevel << endl;
	}
}