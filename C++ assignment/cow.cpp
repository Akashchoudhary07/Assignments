#include <iostream>
using namespace std;
int main()
{

    int elephant,cow,dog;
    cout<<"enter the length of elephant:";
    cin>>elephant;
    cout<<"enter the value of cow:";
    cin>>cow;
    cout<<"enter the value of dog:";
    cin>>dog;
    if (cow > dog)
    {
        if (elephant > cow)
        {
            cout<<"elephant is big";
        }
        else
        {
            cout<<"Cow is big";
        }
    }

    return 0;
}