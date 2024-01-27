#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :-"<<endl;
    cin>>age;
    if(age >=18)
    {
        cout<<"You can watch web series"<<endl;
    }
    else
    {
        cout<<"You are not eligible to watch web series"<<endl;
    }
    return 0;
}