#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    float divindend, divisor;
    char ch;

    do {
        cout<< "Enter dividend: "; cin >> divindend;
        cout<< "Enter divisor: "; cin >> divisor;
        if(divisor == 0){
            cout << "Illegal divisor\n";
            continue;
        }

        cout << "Division is: " << divindend/divisor;
        cout << "\n Do you want to continue(y/n)?: "; cin>>ch;

    } while( ch != 'n');
    return 0;
}