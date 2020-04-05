#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char str1[] = "Tiger, tiger, burning bright\n"
                    "In the forest of the night!";

    const int MAX = 100;
    char str2[MAX];

    strcpy(str2, str1);
    cout << str2 << endl;

    return 0;
}