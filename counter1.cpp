#include<iostream>
using namespace std;

class counter{
    private:
        unsigned int count;
        char name;
    public:
        counter(int count_, int name_) : count(count_), name(name_){
            /* Empty */
        }


        void inc_count(){
            count ++;
        }

        int get_count(){
            return count;
        }

        void show_count(){
            cout << '\n' << name << ": " << get_count();
        }
};

int main(){
    counter c1(0, 'A'), c2(10, 'B');

    c1.show_count();
    c2.show_count();

    for(int i = 0; i < 100; i++){
        c1.inc_count();
    }

    for(int j = 0; j < 25; j++){
        c2.inc_count();
        c2.show_count();
    }

    c1.show_count();

    return 0;

    
}