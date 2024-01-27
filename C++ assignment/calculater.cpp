#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4, c;
    int calculater;
    cout << "Choose any case for arihtmetic operation:";
    cin >> calculater;
    switch (calculater)
    {
    case 1:
        c = a + b;
        cout << "The addition of a and b is"<<c;
            break;
    case 2:
        c = a - b;
        cout << "The subtraction of a and b is "<<c;
            break;
    case 3:
        c = a / b;
        cout << "The division of a and b is" <<c;
            break;
    case 4:
        c = a * b;
        cout << "The multiplication of a and b is"<<c;
            break;
    default:
        cout << "invalid";
        break;
    }
}