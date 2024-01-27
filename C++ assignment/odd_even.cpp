#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "enter your number :- ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "NUmber is even .";
    }
    else
    {
        cout << "Number us odd .";
    }

    return 0;
}
