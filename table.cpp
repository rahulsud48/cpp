#include<iostream>
using namespace std;

void starline();  // delcleration of a function

int main(){
    starline();  // call function

    cout << "Step One" << endl;

    starline();

    cout << "Step 2" << endl;

    starline();

    return 0;
}

// function definition
void starline(){
    for(int j = 0; j < 45; j++){
        cout << "*";
    }
    cout << endl;
}