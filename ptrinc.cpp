#include<iostream>
using namespace std;

int main(){
    int intarray[] = {31, 51, 74, 14, 75};
    int* ptr;

    ptr = intarray;

    for(int j = 0; j < 5; j++){
        cout << *(ptr++) << endl;
    }

    return 0;
}