#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>

using std::string;
const int NUM = 26;
const string wordlist[NUM] = { "apiary", "beetle", "cereal",
"danger","ensign", "florid", "garage", "health", "insult",
"jackal", "keeper", "loaner", "manage", "nonce", "onset",
"plaid", "quilt", "remote", "stolid", "train", "useful",
"valid", "whence","xenon","yearn","zippy" };

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::tolower;
	std::srand(std::time(0));

	char play;
	cout << "Will you want to play this game? <y/n>" << endl;
	cin >> play;
	play = tolower(play);

	while (play == 'y')
	{
		string target;
		target = wordlist[std::rand() % NUM];
		int length = target.length(); // 需要定义数据类型,int
		string attempt = string(length, '-');
		string badchars;
		int guesses = 6;

		cout << "Guess my secret word. It has " << length <<
			"letters, and you guess\n"
			<< "one letter at a time. You get " << guesses
			<< "wrong guesses.\n";
		cout << "Your word: " << attempt << endl;

		while (guesses > 0 && attempt != target)
		{
			char temp;
			cout << "Guess a letter: ";  
			cin >> temp;
			if (badchars.find(temp) != string::npos || attempt.find(temp) != string::npos)
			{
				cout << "you already guessed that. try again.\n";
				continue;
			}

			int loc = target.find(temp);
			if (loc == string::npos)
			{
				cout << "oh, bad guess!\n";
				--guesses;
				badchars += temp;
			}
			else
			{
				cout << "good guess!";
				attempt[loc] = temp;
				// 检查字符串后续是否还有temp字母
				loc = target.find(temp, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = temp;
					loc = target.find(temp, loc + 1);
				}
			}
			cout << "Your word: "<<attempt<<endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choice: "<<badchars << endl;
				cout << guesses << "guess left"<<endl;
			}
		}
		if (guesses > 0)
		{
			cout << "you are right.\n";
		}
		else
		{
			cout << "sorry, the word is " << target << ".\n";
			cout << "will you play again? <y/n>";
			cin >> play;
			play = tolower(play);
		}

		cout << "bye\n";

		return 0;

	}
}
