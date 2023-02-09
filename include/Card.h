#ifndef CARD_H
#define CARD_H

enum Rank {
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

enum Suit {
    CLUB,
    SPACE,
    HEART,
    DIAMOND
};

class Card {
 public:
    /**
    *   Create a Card object
    *   @param suit : The suit (symbol) the card has
    *   @param rank : The rank (number or letter) the card has
    */
    Card(Suit suit, Rank rank);

    /**
    *   Retrieve the rank of the card
    *   @return The rank of the card
    */
    virtual Rank getRank();

    /**
    *   Return the value of the deck. A card's value is the rank they 
    *   have. If the rank is a J/Q/K, their value is 10. If the Rank
    *   is an Ace, run aceValue to determine its value.
    *   @return The value of the card
    */
    virtual int getValue();

    /**
    *    Calculates the value of an Ace card depending on the hand
    *    score. If the player's hand score is less than 21, the ace's
    *    value will be 11. If the player's score exceeds 21 with
    *    an Ace in their hand, the Ace's value will be considered as 1.
    *    @return The value of the ace card
    */
    virtual int aceValue(Hand*);

 private:
    Suit suit;
    Rank rank;
    int value;
    bool isAce;
};
#endif
