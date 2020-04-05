#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

class NUMB{
    private:
        int num;
    public:
        NUMB() {}

        void set(int num_){
            num = num_ + 1;
        }

        void show();
};

void NUMB :: show(){
    cout << num << " ";
}

int main(){
    NUMB deck[10];

    for(int i = 0; i < 10; i++){
        deck[i].set(i);
    }

    cout << "\nOredered" << endl;

    for(int i =0; i<10; i++){
        deck[i].show();
    }


    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        int k = rand() % 10;
        NUMB temp = deck[i];
        deck[i] = deck[k];
        deck[k] = temp;
    }

    cout << "\nShuffled" << endl;

    for(int i =0; i<10; i++){
        deck[i].show();
    }

    return 0;
}