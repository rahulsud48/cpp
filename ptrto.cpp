#include<iostream>
using namespace std;

int main(){
    int var1, var2;
    int* ptr;

    ptr = &var1;
    *ptr = 37;

    cout << ptr << endl;
    var2 = *ptr;




    cout << ptr << endl;
    cout << var2 << endl;

    cout << &var2 << endl;

    
    return 0;
}