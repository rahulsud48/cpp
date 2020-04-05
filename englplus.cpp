#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0) {};

        Distance(int feet_,float inches_):feet(feet_),inches(inches_){}

        void showdist() const{
            cout << feet << "\'-" << inches << '\"' << endl;
        }

        Distance operator + ( Distance ) const;
};

Distance Distance :: operator + (Distance d2) const{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    return Distance(f,i);
}


int main(){
    Distance d1(10,2), d2(5,13), d3;

    d3 = d1 + d2;

    d3.showdist();

    return 0;


}