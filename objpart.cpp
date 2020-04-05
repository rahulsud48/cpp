#include<iostream>

using namespace std;

class part{
    private:
        int modelnumber;
        int partnumber;
        float cost;

    public:
        void setparameters(int mn, int pn, float c){
            modelnumber = mn;
            partnumber = pn;
            cost = c;
        }

        void showdata(){
            cout << "\nModel Number is: " << modelnumber;
            cout << "\nPart Number is: " << partnumber;
            cout << "\nCost is: " << cost;
        }
};

int main(){
    part p1, p2;

    p1.setparameters(1, 1, 200.00F);
    p2.setparameters(1, 2, 300.00F);

    p1.showdata();
    p2.showdata();

    return 0;
}
