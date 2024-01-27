#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter the vowel :-";
    cin>>character;
    
    switch(character)
    {
        case 'a':
        cout<<"It's a vowel";
        break;
         case 'e':
        cout<<"It's a vowel";
        break;
         case 'i':
       cout<<"It's a vowel";
        break;
         case 'o':
        cout<<"It's a vowel";
        break;
         case 'u':
        cout<<"It's a vowel";
        break;
        default:
        cout<<"It's a consonant";
        break;
    }
    return 0;
}        