#include<iostream>
#include<conio.h>

using namespace std;

enum itsaWord { No, Yes};

int main(){
    itsaWord isWord = No;

    char ch = 'a';

    int wordcount = 0;

    cout << "Enter a phrase:\n";

    do {
        ch = getche();
        if(ch == ' ' || ch == '\r'){
            if( isWord == Yes){
                wordcount++;
                isWord = No;
            }
        }
        else{
            if( isWord == No){
                isWord = Yes;
            }
        }
    } while( ch != '\r');
    cout<<"\nWord count"<<wordcount;
    return 0;
}