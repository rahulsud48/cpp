#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance(int feet_, float inches_) : feet(feet_), inches(inches_){
            /* Constructor 1*/
        }


        Distance add_distance(const Distance&) const;

};

Distance Distance :: add_distance(const Distance& d2) const{
    Distance temp(2,5);
    feet = 10;
    d2.feet = 10;
}