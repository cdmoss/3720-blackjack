#ifndef BLACKJACK_H
#define BLACKJACK_H

//#include "Player.h"
//#include "Deck.h"
//#include "UI.h"

#include <vector>

// Forward declarations to be removed once other classes have been created
class Player;
class Deck;
class UI;

class Blackjack {
    public:
    /**
    *   Create a Blackjack object
    *   @param players : Vector of Player pointers to Players who are playing the game
    *   @param dealer : Player pointer indicating the Dealer of the game
    *   @param deck : Deck pointer indicating the deck of cards to be played
    *   @param ui : UI pointer indcating the initial User Interface
    */
    Blackjack(vector::vector<Player*> players, Player* dealer,
    Deck* deck, UI* ui);

    /**
    *   Play a round of blackjack
    */
   virtual void playRound();

   /**
   *    Reset the current round of blackjack to its default state
   */
   virtual void resetRound(); 

   /**
   *    Deal a card to a specified player
   *    @param player : The Player designated to recieve the dealt card
   */
   virtual void dealCard(Player* player);

   /**
   *    Check to see if a players hand is a bust
   *    @return True is the hand is above 21, false otherwise
   */
   virtual bool checkBust();

   /**
   *    Check to see if the game has been won
   *    @return True if the game has been won, false otherwise
   */
   virtual bool checkWin();

   /**
   *    Dealer plays their turn 
   */
   virtual void dealerPlay();

   /**
   *    Player plays their turn
   */
   virtual void playerPlay();

   /**
   *    Change the view for blackjack
   *    @param ui : UI pointer that indicates the User interface to change to
   */
   virtual void setUI(UI* ui);

   private:
   Player* dealer;  /**< Dealer of the game */
   vector::vector<Player*> players; /**< List of players in the game */
   Deck* deck;  /**< Deck of cards to be used */
   UI* ui;  /**< Current user interface */
};

#endif