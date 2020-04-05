#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

void scale( Distance&, float);
void disp( Distance );

int main(){
    Distance d1 = {10, 3};

    scale(d1, .5);

    disp(d1);

    return 0;
}

void scale(Distance& d, float n){
    d.feet = d.feet * n;
    d.inches = d.inches *n;
}

void disp( Distance d){
    cout << "\nFeet: " << d.feet;
    cout << "\nInches: " << d.inches;
}