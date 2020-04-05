#include<iostream>
using namespace std;

struct card{
    int number;
    char suit;
};

class deck{
    private:
        int no_cards;
    public:
        deck(int no){
            no_cards = no;
            
        }

        void set(int number_, char suit_){
            number = number_;
            suit = suit_;
        }

        void display(){
            cout << "\n" << number << "-" << suit;
            cout << endl;
        }
};


card create_deck(){
    char suits[4] = {'D','C','S','H'};
    card deck[52];
    int k = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 1; j < 14; j++){
            deck[k].set(j,suits[i]);
            k++;
        }
    }

    return deck[52];
}



int main(){

    card deck_52[52] = create_deck();
    for(int k=0; k<52; k++){
        deck_52[k].display();
    }

}





