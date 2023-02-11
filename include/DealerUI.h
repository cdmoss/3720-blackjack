#ifndef DEALERUI_H
#define DEALERUI_H

#include "UI.h"

class DealerUI : public UI {
 public:
    /**
    * Displays the hand of a dealer, hides one card
    */
    virtual void displayHand();
};

#endif
