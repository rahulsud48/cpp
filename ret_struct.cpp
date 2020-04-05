#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

Distance add(Distance, Distance);
void disp(Distance);

int main(){
    Distance d1 = {5,2};
    Distance d2 = {3,7};

    disp(add(d1, d2));


}

Distance add(Distance d1, Distance d2){
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    return d3;
}

void disp( Distance d){
    cout << "\nFeet: " << d.feet;
    cout << "\nInches: " << d.inches;
}