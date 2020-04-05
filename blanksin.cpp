#include<iostream>
using namespace std;

int main(){
    char str[2000];

    cout << "\nEnter a string: ";
    cin.get(str, 2000, '$');
    cout << "\n Entered text is: " << str << endl;

    return 0;
}

