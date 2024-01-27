#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    char ch='A';
    cout<<"Enter your number:-";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            cout<<ch;
            ch++;
        }
        ch='A';
        cout<<"\n";
    }
    




}