#include<iostream>


using namespace std;

#include<conio.h>

char ch = 'a';

void get_char();
void putchar();

int main(){
    while( ch != '\r' ){
        get_char();
        putchar();
    }
    cout << endl;
    return 0;
}

void get_char(){
    ch = getch();
}

void putchar(){
    cout << ch;
}