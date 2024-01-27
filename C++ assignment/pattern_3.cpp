#include<iostream>
using namespace std;
int main()
{
    int num,i,j,no=0;
    cout<<"Enter your number:-";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            no++;
            cout<<no;
        }
        cout<<"\n";
    }




}