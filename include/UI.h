#ifndef UI_H
#define UI_H

class UI {
 public:
  /**
    * Displays the hand of a player
    * @param player the player who owns the hand to be displayed
    */
  virtual void displayHand(Player* player) = 0;

  /**
   *    Displays helpful information to the UI
   */
  virtual void help();

  /**
   *    Function which handles the input for a player during their turn
   *    @return the choice of the player
   */
  virtual int handleInput();

   /**
   *    Displays the winner(s) to the UI
   */
  virtual void displayWinner();

  /**
   *    Asks player if they want to play again
   *    @return true : if Players choice is to play again, false otherwise
   */
  virtual bool playAgain();
};

#endif
