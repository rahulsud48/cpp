#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:

        Distance() : feet(0), inches(0.0){
            /* First Constructor */
        }

        Distance(int feet_, float inches_) : feet(feet_), inches(inches_){
            /* Second Constructor */
        }

        void get_distance(int feet_, float inches_){
            /* Third Constructor */
            feet = feet_;
            inches = inches_;
        }

        void display(){
            cout << "Feet: " << feet;
            cout << "\nInches: " << inches;
            cout << endl;
        }

        void add(Distance d){
            feet += d.feet;
            inches += d.inches;
        }

        Distance scale(float n){
            Distance temp(feet,inches);
            temp.feet *= n;
            temp.inches *= n;

            return temp;
        }

        void mul_dist(Distance, Distance);
};

void Distance::mul_dist(Distance dd1, Distance dd2){
    feet *= dd1.feet * dd2.feet;
    inches *= dd2.inches * dd2.inches;
}

int main(){
    Distance d1(6,4), d2(10,2);
    Distance d4, d5;
    d5.get_distance(20, 30.0);
    d1.display();
    d2.display();

    d1.add(d2);
    d1.display();

    Distance d3 = d1.scale(0.5);
    d3.display();

    d1.mul_dist(d2, d3);
    d1.display();

    d5.mul_dist(d1, d4);
    d5.display();
    
    return 0;
}