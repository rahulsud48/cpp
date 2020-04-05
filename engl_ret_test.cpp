#include<iostream>

using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance() : feet(0), inches(0) {}
        Distance(int ft, float in) :  feet(ft), inches(in) {}

        void get_distance(){
            cout << "\nEnter feet: "; cin >> feet;
            cout << "\nEnter inches: "; cin >> inches;
        }

        void show_dist(){
            cout << feet << "\'-" << inches << '\"';
        }

        Distance add_distance( Distance );
};

Distance Distance::add_distance( Distance dd){
    Distance temp;
    temp.inches = dd.inches + inches;
    temp.feet = dd.feet + feet;

    return temp
}