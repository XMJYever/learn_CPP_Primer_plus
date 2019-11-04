// outfile.cpp -- writing to a file
#include <iostream>
#include <fstream> //定义了一个用于处理输出的ofstream类

int main() {
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outFile;  // create object for output
	outFile.open("C:\\Users\\XMJYever\\Desktop\\carinfo.txt");

	cout << "Enter the make and model of automobile";
	cin.getline(automobile, 50);
	cout << "Enter the model year:";
	cin >> year;
	cout << "Enter the original asking price:";
	cin >> a_price;
	b_price = 0.913 * a_price;

	//display information on screen with cout

	cout << fixed; // 用一般的方法输出浮点数，而不是科学计数法
	cout.precision(2); //小数点后两位
	cout.setf(ios_base::showpoint); //设置格式标志来控制输出形式
	cout << "Make and model:" << automobile << endl;
	cout << "Year:" << year << endl;
	cout << "Was asking $:" << a_price << endl;
	cout << "Now asking $:" << b_price << endl;

	//now do exact same things using outFile instead of cout	
	outFile << fixed;  //将cout显示到屏幕上的内容写入到了文件carinfo.tex中
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $: " << a_price << endl;
	outFile << "Now asking $: " << b_price << endl;

	outFile.close();
	return 0;
}