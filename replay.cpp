#include<iostream>
using namespace std;

int main(){
    int age[4];
    int nos[6] = {1,2,3,4,5,6};
    for(int j=0; j<4;j++){
        cout << "Enter an age: ";
        cin >> age[j];
    }

    cout << age[0];
}

