#ifndef DECK_H
#define DECK_H

#include "Card.h"

#include <vector>

class Deck {
 public:
  /**
   *   Create a Deck object
   *   @param cards : Vector of Card pointers to Cards that are in the deck
   */
  Deck(std::vector<Card*> cards);

  /**
   *    Randomize the order of the deck
   */
  virtual void shuffle();

  /**
   *    Return a random card from the deck to deal
   *    @return The randomly picked card object
   */
  virtual Card* dealCard();

  /**
   *    Add a Card to the deck
   *    @param card : The card being added
   */
  virtual void addCard(Card card);

 private:
  std::vector<Card*> Cards; /**< List of cards in the deck */
};

#endif
