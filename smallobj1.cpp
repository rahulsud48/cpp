#include<iostream>
using namespace std;


struct Distance{
    int feet;
    float inches;
};

class calculator{
    private:
        int ft, in;
    public:
        void get_distance(Distance d){
            ft = d.feet;
            in = d.inches;
        }

        Distance scale(float n){
            Distance temp;
            temp.feet = ft * n;
            temp.inches = in * n;
            return temp;
        }

        void output(Distance d){
            cout << d.feet << "-" << d.inches;
        }
};

int main(){
    Distance d = {2,10}, dd;

    calculator cal;
    cal.get_distance(d);
    dd = cal.scale(0.5);
    cout << "Scaled by: "; cal.output(dd);
    return 0;
}