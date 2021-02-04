#include <iostream>

#ifndef CARDS_CARD_H
#define CARDS_CARD_H

using std::ostream;

class card {

private:
    int suit;
    int rank;
    bool faceUp;

public:
    static const int CLUBS = 0;
    static const int DIAMONDS = 1;
    static const int HEARTS = 2;
    static const int SPADES = 3;
    static const int ACE = 1;
    static const int JACK = 11;
    static const int QUEEN = 12;
    static const int KING = 13;

    card(int r, int s): rank(r), suit(s), faceUp(true) {}; //Specific Constructor
    card(): card(ACE, CLUBS) {}; //Default Constructor

    //Mutators  -- Setters
    void setSuit(int s);
    void setRank(int r);
    void setFaceUp(bool f);

    //Inspectors  -- Getters
    int getSuit() {return suit;};
    int getRank() {return rank;};
    bool getFaceUp() {return faceUp;};

    //Facilitators  -- Utility
    void printCard(ostream &os);
    void flipOver();
};


#endif //CARDS_CARD_H
