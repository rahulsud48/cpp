#include<iostream>
#include<conio.h>

using namespace std;

int add(int,int);



int main(){

    int x, y;

    cout << "\nEnter num1: "; cin>>x;
    cout << "\nEnter num2: "; cin>>y;
    
    x = add(x,y);
    cout<< "The sum is: " << x;
    return 0;
}

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}