#include <iostream>
using namespace std;

int main()
{
    int time;

    cout<<"Enter the time:- ";
    cin>>time;

    if (time >= 3 && time < 12)
    {
    cout<<"Good morning!\n";
    }
    else if (time >= 12 && time < 18)
    {
        cout<<"Good afternoon!\n";
    }
    else if ((time >= 18 && time < 24) || (time > 0 && time < 3))
    {
        cout<<"Good evening!\n";
    }
    else
    {
        cout<<"Invalid time\n";
    }

    return 0;
}
