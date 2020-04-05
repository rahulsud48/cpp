#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

void startline();
void engldisp( char, Distance );


int main(){
    Distance d1;

    Distance d2 = {5, 3};

    cout << "Please input distance 1 feet: "; cin >> d1.feet;
    cout << "\nPlease input distance 1 inches:"; cin >> d1.inches;

    engldisp( 'x', d1 );
    engldisp( 'w', d2 );

    return 0;
}

void starline(){
    for (int i = 0; i < 45; i++){
        cout << "*";
    }
    cout << endl;
}

void engldisp( char name, Distance d){
    cout << endl;
    starline();
    cout << name;
    cout << "\nThe Feet entered is: "<< d.feet;
    cout << " and the inches entered is: " << d.inches << endl;
    starline();
}

