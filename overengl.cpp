#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

void disp( Distance );
void disp( float );

int main(){
    Distance d1 = {10, 2};
    float d2 = 5.1;


    disp(d2);
    disp(d1);
}

void disp( Distance d){
    cout << "\nFeet: " << d.feet;
    cout << "\nInches: " << d.inches;
}

void disp( float d){
    cout << "\nInches: " << d;
}