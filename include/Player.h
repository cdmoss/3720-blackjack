#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include "Hand.h"
#include <string>
#include <vector>

class Player {
 public:
  /**
   *	Constructor
   *	@param name : The player's name
   */
  Player(std::string name);

  /**
   *	Gets the player's name
   *	@returns the player's name
   */
  std::string getName() const;

  /**
   *	Make the player recieve a hit from the dealer
   *	@param card : The card given to the player
   */
  void hit(Card *card);

  /**
   *	Initiates a split on the player's hand
   */
  void split();

  /**
   *  Sets the current hand in play to stand status
   */
  void stand();

  /**
   * Checks if the player has gone bust
   * @return true if bust, else false
   */
  bool checkBust();

  /**
   * Retrieves the score of the player
   * @return the player's score
   */
  int getScore();

  /**
   * Gets the players hands
   * @return a vector of the player's current hands
   */
  std::vector<Hand*> getHand();

 private:
  std::vector<Hand*> hand;
  std::string name;
  int score;
  int currentHand; // informs hit, split, stand, checkBust, and getScore which hand to interact with
};
#endif
