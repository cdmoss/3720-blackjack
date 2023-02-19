#include "Player.h"

/*
* Function: getName()
* Parameters: None
* Return Type: String
* Logic: Retuns name of player
*/
std::string Player::getName() const {
  std::string returnName;
  return returnName;
}

/*
* Function: hit(Card* card)
* Parameters: Card* card
* Return Type: void
* Logic: Add a card to the players current hand
*/
void Player::hit(Card *card) {
}

/*
* Function: split()
* Parameters: None
* Return Type: void
* Logic: Splits the players current hand in 2
*/
void Player::split() {
}

/*
* Function: stand()
* Parameters: None
* Return Type: void
* Logic: Indicate the player would not like a card hadden to
* their current hand
*/
void Player::stand() {
}

/*
* Function: checkBust()
* Parameters: None
* Return Type: bool
* Logic: Determine if players hand is bust, if so return true
* else false
*/
bool Player::checkBust() {
  bool returnBust;
  return returnBust;
}

/*
* Function: getRoundsWon()
* Parameters: None
* Return Type: int
* Logic: Retuns number of rounds the player has won
*/
int Player::getRoundsWon() {
  int returnRounds;
  return returnRounds;
}

/*
* Function: winRound()
* Parameters: None
* Return Type: void
* Logic: Makes the current player win the round
*/
void Player::winRound() {
}

/*
* Function: getTurnIsActive()
* Parameters: None
* Return Type: bool
* Logic: Retuns true if the players turn is active, else false
*/
bool Player::getTurnIsActive() {
  bool returnActive;
  return returnActive;
}

/*
* Function: getHand()
* Parameters: None
* Return Type: std::vector<Hand*>
* Logic: Returns the vector that holds pointers to all the
* players hands
*/
std::vector<Hand*> Player::getHand() {
  std::vector<Hand*> returnHand;
  return returnHand;
}