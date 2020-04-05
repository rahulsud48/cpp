#include<iostream>
#include<cstring>

using namespace std;

class part{
    private:
        char partname[30];
        int partnumber;
        float cost;

    public:
        void setpart(char pname[], int pn, float c){
            strcpy(partname, pname);
            partnumber = pn;
            cost = c;
        }
        void showpart(){
            cout << "\nName=" << partname;
            cout << ", number=" << partnumber;
            cout << ", cost = Rs." << cost;
        }
};

int main(){
    part part1, part2;

    part1.setpart("handle bolt", 4473, 217.55);
    part2.setpart("start lever", 9924, 419.25);

    cout << "\nFirst part: "; part1.showpart();
    cout << "\nSecond part: "; part2.showpart();
    cout << endl;
    return 0;

}