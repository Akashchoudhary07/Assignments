#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    char maritalstatus;
    cout << "Enter you age :-";
    cin >> age;
    cout << "Enter you gender(M/F) :-";
    cin >> gender;
    cout << "Enter you maritalstatus(Y/N) :-";
    cin >> maritalstatus;
    if (age >= 18)
    {
        if (gender == 'M')
        {
            cout << "You are eligible to join militry." << endl;
        }
        else if (gender == 'F')
        {
            if (maritalstatus == 'Y')
            {
                cout << "You are eligible to join militry." << endl;
            }
            else if (maritalstatus == 'N')
            {
                cout << "You are not eligible for militry." << endl;
            }   
        }
        else
        {
            cout << "Invalid gender !" << endl;
        }
    }
    else
    {
        cout << "You are not eligible for militry." << endl;
    }
    return 0;
}