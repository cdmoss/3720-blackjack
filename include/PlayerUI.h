#ifndef PLAYERUI_H
#define PLAYERUI_H

#include "UI.h"
#include "Player.h"

class PlayerUI : public UI {
 public:
    /**
    * Displays the a player, hides one card
    * @param player the player who owns the hand to be displayed
    */
    virtual void displayHand(Player* player);
};

#endif
