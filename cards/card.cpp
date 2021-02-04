#include "card.h"

void card::setSuit(int s)
{
    suit = s;
}

void card::setRank(int r)
{
    rank = r;
}

void card::setFaceUp(bool f)
{
    faceUp = f;
}



void card::printCard(ostream &os)
{
    static const char suitChar[] = {'C','D','H','S'};
    static const char rankChar[] = {'A','1','2','3','4','5','6','7','8','9','T','J','Q','K'};

    if(faceUp)
    {
        os << "| " <<  rankChar[rank] << " " << suitChar[suit] << " |";
    } else {
        os << "| # # |";
    }
}

void card::flipOver()
{
    faceUp = !faceUp;
}