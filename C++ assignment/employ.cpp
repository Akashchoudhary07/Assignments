#include <iostream>
using namespace std;

int main()
{
    int yearsOfexperience;

    cout<<"Enter the number of years of experience: ";
    cin>>yearsOfexperience;

    if (yearsOfexperience >= 10)
    {
        cout<<"Congratulations! You are a senior employee.\n";
    }
    else if (yearsOfexperience >= 5 && yearsOfexperience < 10)
    {
        cout<<"You are an experienced employee.\n";
    }
    else if (yearsOfexperience >= 1 && yearsOfexperience < 5)
    {
        cout<<"You are a junior employee.\n";
    }

    return 0;
}
