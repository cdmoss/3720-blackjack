#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Blackjack.h"
#include <string>

// Mock class for UI
class MockUI : public UI {
 public:
  MOCK_METHOD(displayHand, void(Player*));
  MOCK_METHOD(help, void());
  MOCK_METHOD(handleInput, int());
  MOCK_METHOD(handleInput, void());
  MOCK_METHOD(playAgain, bool());
};

class MockDeck : public Deck {
 public:
  MOCK_METHOD(dealCard, Card*());
  MOCK_METHOD(shuffle, void());
  MOCK_METHOD(addCard, void(Card*));
};

class MockPlayer : public Player {
 public:
    MOCK_METHOD(getName, std::string());
    MOCK_METHOD(hit, void(Card*));
    MOCK_METHOD(split, void());
    MOCK_METHOD(stand, void());
    MOCK_METHOD(checkBust, bool());
    MOCK_METHOD(getRoundsWon, int());
    MOCK_METHOD(winRound, void());
    MOCK_METHOD(getTurnIsActive, bool());
    MOCK_METHOD(getHand, std::vector<Hand*>());
};

TEST_F(BlackjackTest, playGameTest) {
    // set up mocks
    MockUI ui;
    MockDeck deck;
    MockPlayer player1("test1");
    MockPlayer player2("test2");
    std::vector<Player*> players;
    players.push_back(&player1);
    players.push_back(&player2);
    MockPlayer dealer("dealer");

    EXPECT_CALL(deck, shuffle()).Times(1).WillOnce(Return());
    EXPECT_CALL(deck, dealCard()).Times(6)
        .WillOnce(Return(&Card(Suit::SPADE, Rank::ACE)))
        .WillOnce(Return(&Card(Suit::CLUB, Rank::ACE)))
        .WillOnce(Return(&Card(Suit::CLUB, Rank::ACE)))

    Blackjack game(players, dealer, deck, ui);

    game.playGame();
}
