#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char direction = 'a';
    int x=10, y= 10;

    while (direction != '\r')
    {
        cout<<"\nPlease enter the direction (n,s,e,w): "; 
        direction = getch();
        cout << direction;

        switch(direction)
        {
            case 'n':
                y++;
                break;
            case 's':
                y--;
                break;
            case 'e':
                x++;
                break;
            case 'w':
                x--;
                break;
            case '\r':
                cout << "\nThe final location is: "<< x <<","<< y;
                break;
            
        }
    }
    return 0;
}