#include<iostream>
using namespace std;

int main(){
    void order(int*, int*);

    int n1=99, n2=11;
    int n3=22, n4=88;

    order(&n1,&n2);
    order(&n3,&n4);

    cout << n1 << endl;
    cout << n2 << endl;

    cout << n3 << endl;
    cout << n4 << endl;

    return 0;
}

void order(int* ptr1, int* ptr2){
    if(*ptr1 > *ptr2){
        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}