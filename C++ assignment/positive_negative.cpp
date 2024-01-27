#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter your number :-";
    cin >> number;

    if (number > 0)
    {
        cout << "number is positive .";
    }
    else if (number < 0)
    {
        cout << "Number is negative .";
    }
    else
    {
        cout << "Number is zero .";
    }

    return 0;
}