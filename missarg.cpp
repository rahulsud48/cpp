#include<iostream>
using namespace std;

void repchar(char='*', int=45);

int main(){
    repchar('+', 30);
    repchar('=');
    repchar('+', 30);
    repchar();
    return 0;
}


void repchar(char ch, int n){
    for(int i = 0; i < n; i++){
        cout << ch;
    }
    cout << endl;
}