#include <iostream>
#include "card.h"
using std::cout;
using std::endl;
int main() {

    card AceC;
    card FiveS(5,card::SPADES);

    AceC.printCard(cout);
    cout << endl;
    FiveS.printCard(cout);
    cout << endl;

    FiveS.setRank(card::JACK);
    FiveS.setSuit(card::HEARTS);
    FiveS.printCard(cout);
    cout << endl;

    card *pKingD = new card(card::KING, card::HEARTS);

    (*pKingD).printCard(cout);
    cout << endl;
    pKingD->setSuit(card::CLUBS);
    pKingD->printCard(cout);
    cout << endl;


    return 0;
}