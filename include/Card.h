#ifndef CARD_H
#define CARD_H

#include "Hand.h"

// Forward declarations to be removed once other classes have been created
class Hand;

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
  SPADE,
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
   *   Return the value of the card. A card's value is the rank they
   *   have. If the rank is a J/Q/K, their value is 10. If the Rank
   *   is an Ace, run aceValue to determine its value.
   *   @return The value of the card
   */
  virtual int getValue();

  /**
   *   Returns the suit of the card
  */
  virtual Suit getSuit();

 private:
  Suit suit;
  Rank rank;
  int value;
  bool isAce;
};
#endif
