#include <iostream>
using namespace std;

int main()
{
    int durationofcourse;

    cout<<"Enter your required years of course: ";
    cin>>durationofcourse;

    if (durationofcourse == 4)
    {
        cout<<"B.tech \n";
    }
    else if (durationofcourse == 3)
    {
        cout<<"BCA , B.scIT\n";
    }
    else if (durationofcourse >=5 && durationofcourse <=6)
    {
        cout<<"Master \n";
    }

    return 0;
}
