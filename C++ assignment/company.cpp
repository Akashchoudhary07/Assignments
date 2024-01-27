#include <iostream>
using namespace std;

int main()
{
    int yearsOfService;
    int salary;

    cout<<"Enter the number of years of service: ";
    cin>>yearsOfService;

    cout<<"Enter the salary: ";
    cin>>salary;

    if (yearsOfService >= 5)
    {
        if (salary >= 5000)
        {
            cout<<"You are eligible for a promotion and a salary raise.\n";
        }
        else
        {
            cout<<"You are eligible for a promotion.\n";
        }
    }
    else
    {
        if (salary >= 7000)
        {
            cout<<"You are eligible for a salary raise.\n";
        }
        else
        {
            cout<<"You are not eligible for a promotion or a salary raise at the moment.\n";
        }
    }

    return 0;
}
