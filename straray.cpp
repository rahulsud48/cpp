#include<iostream>

using namespace std;

int main(){
    const int DAYS = 7;
    const int MAX = 10;

    char star[DAYS][MAX] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday"};

    for(int j=0; j<DAYS; j++){
        for (int k =0; k < 3; k++){
            cout << star[j][k];
        }
        cout << endl;
    }

    return 0;
}

