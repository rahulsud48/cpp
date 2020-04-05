#include<iostream>
using namespace std;

class Counter{
    protected:
        int count;
    public:
        Counter() : count(0){}
        Counter(int c) : count(c){}

        void display(){
            cout << count <<endl;;
        }

        Counter operator ++ (){
            return Counter(++count);
        }
};

class CountDn : public Counter{
    public:
        CountDn() : Counter(){}
        CountDn(int c): Counter(c){}
        Counter operator -- (){
            return Counter(--count);
        }
};

int main(){
    CountDn c1;
    c1.display();
    --c1, --c1, ++c1;
    c1.display();

    return 0;
}