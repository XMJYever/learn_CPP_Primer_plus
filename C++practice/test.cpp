#include <iostream>

using namespace std;

int main()
{
    double Daphne_account = 100;
    double Cleo_account = 100;
    int years = 0;

    while (Daphne_account >= Cleo_account)
    {
        years++;
        Cleo_account = Cleo_account + Cleo_account * 0.05;
        Daphne_account += 10;
    }

    cout << "After " << years << " years. " << "Cleo account which is " << Cleo_account << " will more than Daphne account which is " << Daphne_account << "." << endl;
    return 0;
}