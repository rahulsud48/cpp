#include<iostream>
#include<conio.h>

using namespace std;

struct parts{
    int modelnumber;
    int partnumber;
    float cost;
    
};


int main(){
    parts part1;

    part1.modelnumber = 6244;
    part1.partnumber = 373;

    part1.cost = 217.55F;

    cout <<"Cost: Rs."<<part1.cost;
}