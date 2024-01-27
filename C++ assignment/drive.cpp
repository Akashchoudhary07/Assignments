#include<iostream>
using namespace std;

int main()
{
    int age=16;
    {
        if(age<18)
        {
            cout<<"you can not drive";
        }

        else if(age>=18)
        {
            cout<<"you can drive";
        }

        return 0;
    }
}