#include<iostream>
using namespace std;

int main(){
    int intarray[5] = {31, 51, 74, 14, 75};

    for(int j = 0; j < 5; j++){
        cout << *(intarray+j) << endl;
    }

    return 0;
}