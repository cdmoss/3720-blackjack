#ifndef PLAYERUI_H
#define PLAYERUI_H

#include "UI.h"

class PlayerUI : public UI {
 public:
    /**
    * Displays the hand of a player
    */
    virtual void displayHand();
};

#endif
