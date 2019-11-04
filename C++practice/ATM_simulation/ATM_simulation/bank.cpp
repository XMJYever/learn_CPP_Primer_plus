// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include "queue.h"
#include <ctime>     // for time()
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	
	// setting things up
	std::srand(std::time(0));  // random initializing of rand()

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);  //line queue holds up to qs people

	cout << "Enter the number of simulation hours: ";
	int hours;   // hours of simulation
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours; // # of cycles

	cout << "Enter the average number of customers per hour: ";
	double perhour;   // average # of arrival per hour
	cin >> perhour;
	double min_per_cust;   // average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;            // new customer data
	long turnaways = 0;   // turned away(�ܾ�) by full queue
	long customers = 0;   // joined the queue
	long served = 0;      // served during the simulation
	long sum_line = 0;    // cumulative line length
	int wait_time = 0;    //  time until autoteller is free
	long line_wait = 0;   // cumulative time in line

	// run simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))   // have newcomer
		{
			if (line.isfull())
			{
				turnaways++;
			}
			else
				customers++;
			temp.set(cycle);
			line.enqueue(temp);
		}

		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);   // attend next customer
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}

		if (wait_time > 0)
		{
			wait_time--;
		}
		sum_line += line.queuecount();
	}

	// reporting results
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "   customers served: " << served << endl;
		cout << "     turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "average wait time: "
			<< (double)line_wait / served << "minutes\n";
	}
	else
	{
		cout << "No customers!\n";
	}
	cout << "Done!\n";

	system("pause");
	return 0;

}


// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand() *x / RAND_MAX < 1);   //����ͻ������ƽ��ʱ��������1���ӣ���÷�����Ч�����ȷʵ��Ҫ�������������������ʱ��ֱ��ʣ�����ÿ��ѭ������10����
}