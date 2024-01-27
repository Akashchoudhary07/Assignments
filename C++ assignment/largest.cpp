#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
           cout<<"Numbr 1 is largest.";
        }
        else
        {
           cout<<"Number 3 is largest.";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout<<"Number 2 is largest.";
        }
        else
        {
            cout<<"Number 3 is largest.";
        }
    }

    return 0;
}
