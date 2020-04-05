#include<iostream>
using namespace std;

class stack{
    private:
        enum { MAX = 10 };
        int st[MAX];
        int top;
    public:
        stack(){
            top = -1;
        }

        void push(int var){
            st[++top] = var;
        }

        int pop(){
            return st[top--];
        }

        void display(){
            cout << pop() << endl;
        }

};

int main(){
    stack s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);

    s1.display();
    s1.display();
    s1.display();

    return 0;

}