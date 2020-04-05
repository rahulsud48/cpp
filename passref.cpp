#include<iostream>
using namespace std;

int main(){
    float var = 10.0;

    float centimize(float*);

    cout << centimize(&var);

    return 0;
}

float centimize(float* m){
    return *m * 2.54;
}