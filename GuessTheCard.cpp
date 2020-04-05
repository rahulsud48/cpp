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

class deck{
    private:
        double all_cards[3][7];
    public:
        deck() {}

        void get_deck(double cards_[3][7]){
            all_cards[3][7] = cards_[3][7];
        }
    
};

int main(){
    card deck[52];
    int j;
    cout<<endl;
    for(j=0; j<52; j++){
        int num = (j%13) + 2;
        Suit su = Suit(j/ 13);
        deck[j].set(num, su);
    }
    cout << "\nOrdered deck:\n";
    for(j=0; j<52; j++){
        deck[j].display();
        cout << "   ";
        if(!( (j+1) % 13) ){
            cout << endl;
        }
    }

    srand( time(NULL) );

    for(j=0; j < 52; j++){
        int k = rand() % 52;

        card temp = deck[j];
        deck[j] = deck[k];
        deck[k] = temp;
    }

    cout << "\n21 cards were picked randomly, please select one card\n"<<endl;

    card deck_21[21];
    for( j=0; j<21; j++){
        deck_21[j] = deck[j];
        deck_21[j].display();
        cout << ", ";
        if (!( (j+1) % 3) ){
            cout << endl;
        }
    }

    int row_mid, row_prev, row_next;
    cout << "\nPlease pick the row of your card (1,2,3): "; cin >> row_mid;

    switch(row_mid){
        case 1: { row_prev = 2; row_next = 3; break; }
        case 2: { row_prev = 1; row_next = 3; break; }
        case 3: { row_prev = 2; row_next = 1; break; }
    }



    card deck_21_1[21];
    int i = 0;
    for( j=row_prev-1; j<21; j=j+3){
        deck_21_1[i] = deck_21[j];
        i++;
    }



    for( j=row_mid-1; j<21; j=j+3){
        deck_21_1[i] = deck_21[j];
        i++;
    }


    for( j=row_next-1; j<21; j=j+3){
        deck_21_1[i] = deck_21[j];
        i++;
    }

    for( j=0; j<21; j++){
        deck_21_1[j].display();
        cout << ", ";
        if (!( (j+1) % 3) ){
            cout << endl;
        }
    }

// second round from here
    // int row_mid, row_prev, row_next;
    cout << "\nPlease pick the row of your card (1,2,3): "; cin >> row_mid;

    switch(row_mid){
        case 1: { row_prev = 2; row_next = 3; break; }
        case 2: { row_prev = 1; row_next = 3; break; }
        case 3: { row_prev = 2; row_next = 1; break; }
    }



    card deck_21_2[21];
    i = 0;
    for( j=row_prev-1; j<21; j=j+3){
        deck_21_2[i] = deck_21_1[j];
        i++;
    }



    for( j=row_mid-1; j<21; j=j+3){
        deck_21_2[i] = deck_21_1[j];
        i++;
    }


    for( j=row_next-1; j<21; j=j+3){
        deck_21_2[i] = deck_21_1[j];
        i++;
    }

    for( j=0; j<21; j++){
        deck_21_2[j].display();
        cout << ", ";
        if (!( (j+1) % 3) ){
            cout << endl;
        }
    }

// third round from here

    // int row_mid, row_prev, row_next;
    cout << "\nPlease pick the row of your card (1,2,3): "; cin >> row_mid;

    switch(row_mid){
        case 1: { row_prev = 2; row_next = 3; break; }
        case 2: { row_prev = 1; row_next = 3; break; }
        case 3: { row_prev = 2; row_next = 1; break; }
    }



    card deck_21_3[21];
    i = 0;
    for( j=row_prev-1; j<21; j=j+3){
        deck_21_3[i] = deck_21_2[j];
        i++;
    }



    for( j=row_mid-1; j<21; j=j+3){
        deck_21_3[i] = deck_21_2[j];
        i++;
    }


    for( j=row_next-1; j<21; j=j+3){
        deck_21_3[i] = deck_21_2[j];
        i++;
    }

    cout << "\n Your Card is: "; deck_21_3[10].display();
    return 0;
}
