#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int speed;
    cout << "\nEnter 33,45, or 78: ";cin >> speed;
    switch(speed)
    {
        case 33:
            cout<<"A";
            break;
        case 45:
            cout<<"B";
            break;
        case 78:
            cout<<"C";
            break;
    }
    return 0;
}