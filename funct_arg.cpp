#include<iostream>
using namespace std;

void repchar(char ch, int n){
    for(int i = 0; i < n; i++){
        cout << ch;
    }
    cout << endl;
}

int main(){

    repchar('#', 30);
    repchar('#', 40);
    repchar('+',15);

    return 0;
}