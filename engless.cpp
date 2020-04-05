#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0) {}
        Distance(int feet_,float inches_):feet(feet_),inches(inches_){}

        void show(){
            cout << "Feet: " << feet <<endl;
            cout << "Inches: " << inches << endl;
        }

        bool operator > (Distance) const;
};

bool Distance :: operator > (Distance d2) const{
    float f1 = feet + inches/12;
    float f2 = d2.feet + d2.inches/12;
    return (f1>f2) ? true : false;
}

int main(){
    Distance dist1(2, 2.0), dist2 (5, 6.0);

    if ( dist1 > dist2){
        cout << "T" << endl;
    }
    else{
        cout << "F" << endl;
    }

    return 0;


}