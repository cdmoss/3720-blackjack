#include <string>
#include "gtest.gtest.h"
#include "Player.h"

TEST_F(PlayerTest, PlayerTestSequence) {
    //Creating player object with name "John"
    Player* player = new Player("John");

    //Checking the players name was correctly stored as "John"
    EXPECT_EQ(player->getName(), "John");

    //Creating a few basic Cards
    Card* ace_spade = new Card(Rank::ACE, Suit::SPADE);
    Card* ace_heart = new Card(Rank::ACE, Suit::HEART);

    //Using hit(Card*) method to add cards to players hand
    player->hit(ace_spade);
    player->hit(ace_heart);

    //Checking the players hand size
    EXPECT_EQ(player->getHand().sizeof(), 1);

    //Expecting the first card returned from their hand is an ACE
    EXPECT_EQ(player->getHand().at(0)->getCards().at(0)->getRank(),
    Rank::ACE);

    //Splitting the players hand
    player->split();

    //Verifying the player now has 2 hands
    EXPECT_EQ(player->getHand().sizeof(), 2);

    //Creating 2 new Card*
    Card* ten_spade = new Card(Rank::TEN, Suit::SPADE);
    Card* eight_spade = new Card(Rank::EIGHT, Suit::SPADE);
    Card* king_heart = new Card(Rank::KING, Suit::HEART);
    Card* jack_club = new Card(Rank::JACK, Suit::CLUB);

    //Adding the ten of spades and 8 of spades into players hand
    player->hit(ten_spade);
    player->hit(eight_spade);

    //Checking to see if the hand is a bust (should return true)
    EXPECT_TRUE(player->checkBust());

    //Settings the players hand score to 0 and their status to true
    player->getHand().at(0)->setScore(0);
    player->getHand().at(0)->setStatus(true);

    //Expect the players hand score to be 0
    EXPECT_EQ(player->getHand().at(0)->getScore(), 0);

    //Moving to the players next hand
    player->setHand(1);

    //Adding the jack to the players hand
    player->hit(jack_club);

    //Setting the players score to 21, and status to true
    player->getHand().at(0)->setScore(21);
    player->getHand().at(0)->setStatus(true);

    //Expect the playesr score to be 21
    EXPECT_EQ(player->getHand().at(1)->getScore(), 21);

    //Verifying hand status is true
    EXPECT_TRUE(player->getHand().at(1)->getStatus());

    //Expecting this players bust to be false
    EXPECT_FALSE(player->checkBust());

    //Expect the players score to be 0
    EXPECT_EQ(player->getScore(), 0);

    //Deleting pointers
    delete John;
    delete ace_spade, ace_heart, ten_spade, eight_spade, king_heart,
    jack_club;
}
