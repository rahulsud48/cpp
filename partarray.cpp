#include<iostream>
using namespace std;

const int SIZE = 4;

struct part{
    int modelnumber;
    int partnumber;
    float cost;
};

void display(part);

int main(){
    int n;
    part Part_a[SIZE] = {{1, 100, 117.25},
                         {2, 200, 150.35},
                         {3, 300, 541.97},
                         {4, 400, 1001.01}};
    part b = {1, 100, 117.25};

    for(n=0; n<SIZE; n++){
        display(Part_a[n]);
    }
}

void display(part p){
    cout << "***********************";
    cout << "\n\nModel: " << p.modelnumber << endl;
    cout << "Part: " << p.partnumber << endl;
    cout << "Cost: $" << p.cost << endl;
}