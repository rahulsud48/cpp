#include<iostream>
#include<string.h>

using namespace std;

class String{
    private:
        enum {SZ = 80};
        char str[SZ];

    public:
        String(){
            strcpy(str, "");
        }

        String(char s[]){
            strcpy(str, s);
        }

        void display(){
            cout << str << endl;
        }

        String operator + (String ss){
            String temp;
            strcpy(temp.str, ss.str);
            strcat(str, temp.str);

            return temp;
        }
};

int main(){
    char a[] = "A";
    char b[] = "B";
    String s1 = a;
    String s2 = b;

    String s3;
    s3 = s1+s2;

    s3.display();

    return 0;
}

