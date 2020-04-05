#include<iostream>
#include<conio.h>

using namespace std;

int main()
    {
        int chcount = 0;
        int wdcount = 1;

        char ch;

        cout << "Please enter a string"<<endl;

        while( (ch = getche()) != '\r')
            {
                if( ch==' ')
                    {
                        wdcount++;
                    }
                else
                    {
                        chcount++;
                    }
            }
        cout << "\nWords="<<wdcount<<endl
             << "Letters="<< chcount<<endl;

        return 0;
    }