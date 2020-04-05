#include<iostream>
#include<conio.h>

using namespace std;

int main()
    {
        char dir='a';
        int x=10, y=10;
        cout << "Type Enter to quit\n";
        while( dir != '\r' )
            {
                cout << "\nYour location is " << x << ", " << y;
                cout << "\nPress directory key (n,s,e,w): ";

                dir = getche();
                if( dir=='n')
                {
                    y++;   
                }
                else
                {
                    if( dir=='s')
                    {
                        y--;
                    }
                    else
                    {
                        if( dir=='e')
                        {
                            x++;
                        }
                        else
                        {
                            if( dir=='w')
                            {
                                x--;
                            }
                        }
                        
                    }
                }
                
            }
        return 0;
    }