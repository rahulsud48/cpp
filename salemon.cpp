#include<iostream>
#include<iomanip>

using namespace std;

const int DISTRICTS = 4;

const int MONTHS = 3;

int main(){
    int d,m;

    double sales[DISTRICTS][MONTHS];

    cout << endl;

    for(d=0; d<DISTRICTS; d++){
        for(m=0; m<MONTHS; m++){
            cout << "\nEnter sales for district " << d+1;
            cout << ", month " << m+1 << ": ";
            cin >> sales[d][m];
        }
    }

    cout << sales[2][2];

    return 0;
}