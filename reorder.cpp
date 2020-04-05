#include<iostream>
using namespace std;

int main(){
    int n1 = 10, n2 = 2;
    void order(int&, int&);
    order(n1, n2);

    cout << n1 << "  " << n2;

    return 0;
}

void order(int& n11, int& n22){
    if(n11>n22){
        int temp;
        temp = n11;
        n11 = n22;
        n22 = temp;
    }

}