#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

enum Suit {clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card{
    private:
        int number;
        Suit suit;

    public:
        card() {}

        void set(int n, Suit s){
            suit = s;
            number = n;
        }
        void display();
};

void card::display(){
    if( number >= 2 && number <= 10){
        cout << number;
    }
    else{
        switch(number){
            case jack: {cout << "J"; break;}
            case queen: {cout << "Q";  break;}
            case king: {cout << "K"; break;}
            case ace: {cout << "A"; break;}
        }}

    switch(suit){
        case clubs: { cout << "C"; break;}
        case diamonds: { cout << "D"; break;}
        case hearts: { cout << "H"; break;}
        case spades: { cout << "S"; break;}
    }
}



int main(){
    // card deck[4][13];
    // int j,k;
    // cout<<endl;
    // for(j=0; j<4; j++){
    //     for(k=0; k < 13; k++){
    //     int num = (k%13) + 2;
    //     Suit su = Suit(j);
    //     deck[j][k].set(num, su);
    //     }
    // }

    // cout << "\nOrdered deck:\n";
    // for(j=0; j<4; j++){
    //     for(k=0;k<13;k++){
    //         deck[j][k].display();
    //         cout << "   ";
    //         if(( (k+1) == 13)  ){
    //             cout << endl;
    //         }
    //     }
    // }

// shuffle the cards
    card shuffle_deck[52];
    srand( time(NULL) );


    for(j=0; j < 21; j++){
        int k = rand() % 21;

        card temp = deck[j];
        deck[j] = deck[k];
        deck[k] = temp;
    }

    // cout << "\nShuffled deck: \n";

    // int row;
    // cout << '\n Please pick the card and tell the row (1, 2 , 3)'; cin row;

    // for( j=0; j<21; j++){
    //     deck[j].display();
    //     cout << ", ";
    //     if (!( (j+1) % 3) ){
    //         cout << endl;
    //     }
    // }

    // card subset[3][7];

    // for(j=0; j < 3; j++){
    //     for( int k=0; k<7; k++){


    //         subset[j][k] = deck[j*k];
    //         deck[j] = deck[k];
    //         deck[k] = temp;
    //     }

    // }

    return 0;
}
