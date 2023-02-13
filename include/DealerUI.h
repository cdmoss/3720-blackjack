#ifndef DEALERUI_H
#define DEALERUI_H

#include "UI.h"
#include "Player.h"

class DealerUI : public UI {
 public:
    /**
    * Displays the hand of a dealer, hides one card
    * @param player the player who owns the hand to be displayed
    */
    virtual void displayHand(Player* player);
};

#endif
