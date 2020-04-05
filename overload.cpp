#include<iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main(){
    repchar('+', 30);
    repchar();
    repchar('=');
    repchar('+', 30);
    repchar();
    return 0;
}

void repchar(){
    for(int i = 0; i < 45; i++){
        cout << "*";
    }
    cout << endl;
}

void repchar(char ch){
    for(int i = 0; i < 45; i++){
        cout << ch;
    }
    cout << endl;
}

void repchar(char ch, int n){
    for(int i = 0; i < n; i++){
        cout << ch;
    }
    cout << endl;
}