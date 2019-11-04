//sumfile.cpp -- functions with an array argument
#include <iostream>
#include <fstream>
#include <cstdlib>  // support for exit()

const int SIZE = 60;

int main() {
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	ifstream fin;

	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open)
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value; //get first value
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;  //get next value
	}
	if (inFile.eof())
		cout << "End of file reached .\n";
	else if (inFile.fail)
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated for unknown reason.\n";
	}
	if (count == 0)
	{
		cout << "Items read: " << count << endl;
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
	return 0;
}