#include<iostream>
using namespace std;

unsigned long factorial( unsigned long );

int main(){
    int n = 6;
    unsigned long fact;

    fact = factorial(n);

    cout << fact;
    return 0;

}

unsigned long factorial(unsigned long n){
    if(n > 1){
        return n * factorial(n-1);
    }
    else{
        return 1;
    }
}