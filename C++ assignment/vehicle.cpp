#include <iostream>
using namespace std;

int main()
{
    int Vehicaltyre;

   cout<<"Enter the number of tyres :-";
   cin>>Vehicaltyre;
    if (Vehicaltyre == 4)
    {
        cout<<"Car or pickup"<<endl;
    }
    else if (Vehicaltyre == 3)
    {
        cout<<"Rickshaw"<<endl;
    }
    else if (Vehicaltyre == 2)
    {
        cout<<"Bike or cycle"<<endl;
    }
    else
    {
        cout<<"Vehical not available"<<endl;
    }

    return 0;
}
