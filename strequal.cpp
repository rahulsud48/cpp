#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        enum { SZ = 80 };
        char str[SZ];

    public:
        String() : str("") {}
        String(char s[]){
            strcpy(str, s);
        }

        void display(){
            cout << str << endl;
        }

        bool operator == (String) const;
};

bool String :: operator == (String s) const{
    return( strcmp(str, s.str)==0) ? true : false;
}

int main(){
    char a[] = "A";
    char b[] = "A";
    String s1 = a;
    String s2 = b;

    if(s1 == s2){
        cout << "T";
    }

    else{
        cout << "F";
    }

    return 0;
}
