#include<iostream>
using namespace std;

int add(int, int);

int main(){
    float n1, n2;
    cout << "Enter the first number: "; cin >> n1;
    cout << "Enter the second number: "; cin >> n2;

    cout << "\nAddition of the two numbers is: " << add(n1, n2);
}

int add(int n1, int n2){
    int n = n1 + n2;
    return n;
}