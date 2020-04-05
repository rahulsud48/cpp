#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance() : feet(0), inches(0){};
        Distance(int feet_,float inches_):feet(feet_),inches(inches_){
            /* Constructor */
        }

        void display() const{
            cout << feet << "-" << inches << endl;
        }

};

int main(){
    Distance dist[100];

}