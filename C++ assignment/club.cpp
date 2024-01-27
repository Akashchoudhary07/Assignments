#include <iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if (age >= 18)
    {
        cout<<"You can go to club and drink\n";
    }
    else if (age >=15 && age<12)
    {
        cout<<"You can go to club but can't drink\n";
    }
    else
    {
        cout<<"ghar per bethe raho aur pogo dekho\n";
    }

    return 0;
}
