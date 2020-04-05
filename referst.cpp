#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

void scale( Distance, float);
void display( Distance);

int main(){
    Distance d1 = {12, 6.5};
    Distance d2 = {10, 5.5};

    scale(d1, 0.5);
    scale(d2, 0.5);

    display(d1);
    display(d2);
}

void scale(Distance dd, float factor){
    float inches = (dd.feet*12 + dd.inches) * factor;
    dd.feet = static_cast<int>(inches / 12);
    dd.inches = inches - dd.feet*12;
}

void display( Distance d){
    cout << "Feet: " << d.feet << ", Inches: " << d.inches << endl;
}