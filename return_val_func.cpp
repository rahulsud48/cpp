#include<iostream>
using namespace std;

float lbstokg(float);

int main(){
    float lbs, kgs;

    cout << "\nEnter your weight in pounds: ";
    cin >> lbs;

    kgs = lbstokg(lbs);

    cout << "\nThe converted weight is: " << kgs;

    return 0;
}

float lbstokg(float lb){
    return 0.453592 * lb;
}