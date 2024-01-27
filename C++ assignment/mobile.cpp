#include <iostream>
using namespace std;
int main()
{
    int choice, iphone, Vivo, Oneplus, Oppo;
    cout << "Press 1 if you want iphone" << endl;
    cout << "Press 2 if you want Vivo" << endl;
    cout << "Press 3 if you want Oneplus" << endl;
    cout << "Press 4 if you want Oppo" << endl;

    cout << "Enter your choice :-" ;
    cin >> choice;

    if (choice == 1)
    {
        cout << "\n--->you have selected iphoneAvailable stock:\n\n1.iphone 13\n2.iphone 13pro\n3.iphone 14\n4.iphone 14pro" << endl;
        cout << "\n\n--->Choose any one option:\n\nPress 1 if you want 'iphone 13'\nPress 2 if you want 'iphone 13pro'\npress 3 if you want 'iphone 14'\nPress 4 if you want 'iphone 14pro'\n\n"
             << endl;
        cout << "choose your required iphone:\n";
        cin >> iphone;
        if (iphone == 1)
        {
            cout << "\n---->1. iphone 13\n\nPrice:- Rs.68,000\nRAM:- 4GB\nStorage:- 128GB\nColour:- Green";
        }
        else if (iphone == 2)
        {
            cout << "\n---->2. iphone 13pro\n\nPrice:- Rs.90,000\nRAM:- 6GB\nStorage:- 256GB\nColour:- White";
        }
        else if (iphone == 3)
        {
            cout << "\n---->3. iphone 14\n\nPrice:- Rs.1,00,000\nRAM:- 8GB\nStorage:- 256GB\nColour:- Green";
        }
        else if (iphone == 4)
        {
            cout << "\n---->4. iphone 14pro\n\nPrice:- Rs.1,50,000\nRAM:- 8GB\nStorage:- 512GB\nColour:- White";
        }
        else
        {
            cout << "Mobile not available !";
        }
    }
    else if (choice == 2)
    {
        cout << "\n--->you have selected Vivo\n\nAvailable stock:\n\n1.Vivo Y22\n2.Vivo Y16\n3.Vivo Y56\n4.Vivo Y02" << endl;
        ;
        cout << "\n\n--->Choose any one option:\n\nPress 1 if you want 'Vivo Y22'\nPress 2 if you want 'Vivo Y16'\npress 3 if you want 'Vivo Y56'\nPress 4 if you want 'Vivo Y02'\n"
             << endl;
        ;
        cout << "choose your required Vivophone:\n";
        cin >> Vivo;
        if (Vivo == 1)
        {
            cout << "\n---->1. Vivo Y22\n\nPrice:- Rs.32,000\nRAM:- 4GB\nStorage:- 128GB\nColour:- Blue";
        }
        else if (Vivo == 2)
        {
            cout << "\n---->2. Vivo Y16\n\nPrice:- Rs.56,000\nRAM:- 6GB\nStorage:- 256GB\nColour:- White";
        }
        else if (Vivo == 3)
        {
            cout << "\n---->3. Vivo Y56\n\nPrice:- Rs.45,000\nRAM:- 6GB\nStorage:- 128GB\nColour:- Green";
        }
        else if (Vivo == 4)
        {
            cout << "\n---->4. Vivo Y02\n\nPrice:- Rs.1,50,000\nRAM:- 8GB\nStorage:- 512GB\nColour:- White";
        }
        else
        {
            cout << "Mobile not available !";
        }
    }
    else if (choice == 3)
    {
        cout << "\n--->you have selected Oneplus\n\nAvailable stock:\n\n1.Oneplus Nord CE 3Lite 5G\n2.Oneplus Nord CE 2Lite 5G \n3.Oneplus 8T 5G\n4.Oneplus 11R 5G" << endl;
        cout << "\n\n--->Choose any one option:\n\nPress 1 if you want 'Oneplus Nord CE 3Lite 5G'\nPress 2 if you want 'Oneplus Nord CE 2Lite 5G'\npress 3 if you want 'Oneplus 8T 5G'\nPress 4 if you want 'Oneplus 11R 5G'\n" <<endl;
        cout << "choose your required Oneplus:\n";
        cin >> Oneplus;
        if (Oneplus == 1)
        {
            cout << "\n---->1. 'Oneplus Nord CE 3Lite 5G'\n\nPrice:- Rs.42,000\nRAM:- 4GB\nStorage:- 128GB\nColour:- Blue";
        }
        else if (Oneplus == 2)
        {
            cout << "\n---->2. 'Oneplus Nord CE 2Lite 5G'\n\nPrice:- Rs.56,000\nRAM:- 6GB\nStorage:- 256GB\nColour:- White";
        }
        else if (Oneplus == 3)
        {
            cout << "\n---->3. 'Oneplus 8T 5G'\n\nPrice:- Rs.55,000\nRAM:- 6GB\nStorage:- 128GB\nColour:- Green";
        }
        else if (Oneplus == 4)
        {
            cout << "\n---->4. 'Oneplus 11R 5G'\n\nPrice:- Rs.1,00,000\nRAM:- 8GB\nStorage:- 512GB\nColour:- Black";
        }
        else
        {
            cout << "Mobile not available !";
        }
    }
    else if (choice == 4)
    {
        cout << "\n--->you have selected Oppo\n\nAvailable stock:\n\n1.Oppo Reno8 T\n2.Opppo A78 5G\n3.Oppo A77s\n4.Oppo F21s Pro" << endl;
        cout << "\n\n--->Choose any one option:\n\nPress 1 if you want 'Oppo Reno8 T'\nPress 2 if you want 'Opppo A78 5G'\npress 3 if you want 'Oppo A77s'\nPress 4 if you want 'Oppo F21s Pro'\n"
             << endl;
        cout << "choose your required Oppophone:\n";
        cin >> Oppo;
        if (Oppo == 1)
        {
            cout << "\n---->1. 'Oppo Reno8 T'\n\nPrice:- Rs.32,000\nRAM:- 4GB\nStorage:- 128GB\nColour:- Blue";
        }
        else if (Oppo == 2)
        {
            cout << "\n---->2. 'Opppo A78 5G'\n\nPrice:- Rs.56,000\nRAM:- 6GB\nStorage:- 256GB\nColour:- White";
        }
        else if (Oppo == 3)
        {
            cout << "\n---->3. 'Oppo A77s'\n\nPrice:- Rs.45,000\nRAM:- 6GB\nStorage:- 128GB\nColour:- Green";
        }
        else if (Oppo == 4)
        {
            cout << "\n---->4. 'Oppo F21s Pro'\n\nPrice:- Rs.90,000\nRAM:- 8GB\nStorage:- 512GB\nColour:- White";
        }
        else
        {
            cout << "Mobile not available !";
        }
    }

    return 0;
}