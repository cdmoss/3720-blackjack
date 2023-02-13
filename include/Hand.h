/*
 * Hand.h
 *
 *  Created on: Feb. 11, 2023
 *      Author: josh
 */

#ifndef INCLUDE_HAND_H_
#define INCLUDE_HAND_H_

#include "Card.h"
#include <vector>

class Card;

class Hand {
 public:
  /**
   * Create a Hand object
   * @param cards: vector of card pointers pointing to cards in the hand
   */
  Hand(std::vector<Card*> cards);

  /**
   * gets cards in a hand and returns them as a vector
   * @return a vector of cards
   */
  std::vector<Card*> getCards();

  /**
   * adds a card to a hand
   * @param card: a card pointer
   */
  void addCard(Card *card);

  /**
   * returns the score
   * @return the score as an integer
   */
  int getScore();

  /**
   * removes a card from the hand
   */
  void removeCard();

  /**
   * sets the hand to finished and not draw a card (when stand is called or the hand goes bust)
   * @param stand: bool for whether the hand is finished or not
   */
  void setFinished(bool stand);

  /**
   * gets the finished status of the hand
   */
  bool getFinished();

 private:
  std::vector<Card*> cards;  //a vector of card pointers in the hand
  int score;  // the score of the hand
  bool stand;  //whether the hand is going to stand or not
};

#endif /* INCLUDE_HAND_H_ */
