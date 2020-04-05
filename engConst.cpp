#include<iostream>

using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance(): feet(0), inches(0){}
        Distance(int ft, float in): feet(ft), inches(in) {}

        void getdist(){
            cout << "\nEnter feet: "; cin >> feet;
            cout << "\nEnter inches: "; cin >> inches;
        } 

        void show(){
            cout << "Feet: " << feet; cout << "Inches: " << inches;
        }

        Distance add_dist(const Distance&) const;
};


Distance Distance::add_dist(const Distance& dd)const {
    Distance temp;

    feet = 0;
    
}