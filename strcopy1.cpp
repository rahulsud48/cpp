#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char str1[] = "Hello!"
                    "\nHow is it going?";

    const int MAX = 100;

    char str2[MAX];
    int k;
    for(k=0; k<strlen(str1);k++){
        str2[k] = str1[k];
    }

    str2[k] = '\0';

    cout << str2;
    return 0;
}