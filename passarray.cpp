#include<iostream>
using namespace std;

const int MAX = 5;

int main(){
    void centimize(float*);

    float varay[5] = {1,2,3,4,5};

    centimize(varay);

    for(int j=0; j <MAX; j++){
        cout << varay[j] << endl;
    }

    return 0;
}



void centimize(float* ptrd){
    for(int j =0; j < MAX; j++){
        *ptrd++ *= 2.54;
    }
}