#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("Man");
    string s2 = "Beast";
    string s3;

    s3 = s1;
    
    cout << s3 << endl;

    s3 = "Neither " + s1 + " nor ";
    s3 += s2;

    cout << s3 << endl;

    cout << "s1 =" << s1 << endl;
    cout << "s2 =" << s2 << endl;
    s1.swap(s2);

    cout << "s1 =" << s1 << endl;
    cout << "s2 =" << s2 << endl;

    return 0;
     
    
}