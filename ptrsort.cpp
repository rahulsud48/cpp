#include<iostream>
using namespace std;

const int N = 10;

int main(){
    void bsort(int*, int);
    

    

    int arr[N] = {37,84,62,91,11,65,57,28,19,47};

    bsort(arr,0);

    for(int i=0; i < N; i++){
        cout << arr[i] << endl;
    }

    return 0;

}

void bsort(int* ptr, int n){
    void sort(int*, int*);
    for(int j = 0; j < N-1; j++){
        for(int k=j+1; k < N; k++){
            sort(ptr+j, ptr+k);
        }
    }
}

void sort(int* ptr1, int* ptr2){
    if(*ptr1 > *ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}