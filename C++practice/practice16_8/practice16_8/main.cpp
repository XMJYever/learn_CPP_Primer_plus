#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

struct Review
{
	std::string title;
	int rating;
};

bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
	using std::cout;
	using std::vector;
	vector<Review> books; //分配容器类
	Review temp;
	while (FillReview(temp))
	{
		books.push_back(temp);
	}
	int num = books.size();
	if (num > 0)
	{
		cout << "thank you. you entered the following:\n"
			<< "rating \t book\n";
		for (int i = 0; i < num; i++)
		{
			ShowReview(books[i]);
		}

		cout << "Reprising:\n"
			<< "Rating\tBook\n";
		vector<Review>::iterator pr;  //vector中的迭代器
		for (pr = books.begin(); pr != books.end(); pr++)
		{
			ShowReview(*pr);
		}
		vector <Review> oldlist(books); // copy constructor used
		if (num > 3)
		{
			// remove 2 items
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "after erasure:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
			{
				ShowReview(*pr);
			}
			// insert 1 items
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "After insetion:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
			{
				ShowReview(*pr);
			}
			//交换两个容器的内容
			books.swap(oldlist);
			cout << "Swapping oldlist with books:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
			{
				ShowReview(*pr);
			}
		}
	}
	else
	{
		cout << "Nothing entered, nothing gained.\n";
	}
	return 0;
}

bool FillReview(Review & rr)
{
	std::cout << "please enter book title (quit to quit): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "quit")
	{
		return false;
	}
	std::cout << "please enter book rating: ";
	std::cin >> rr.rating;
	if (!std::cin>>rr.rating)
	{
		return false;
	}

	while (std::cin.get() != '\n')
	{
		continue;
	}
	return true;
}

void ShowReview(const Review & rr)
{
	std::cout << "tile: " << rr.title << " , rating: " << rr.rating << std::endl;
}