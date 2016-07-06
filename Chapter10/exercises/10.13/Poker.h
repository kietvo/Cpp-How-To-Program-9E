/*
 * =====================================================================================
 *
 *       Filename:  Poker.h
 *
 *    Description:  Exercise 10.13: Card Shuffling and Dealing
 *
 *        Version:  1.0
 *        Created:  05/07/16 17:05:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "Hand.h"

#include <vector>

class Poker{
    public:
        Poker();

        void go();

    private:
        unsigned int numPlayers;

        bool running;

        std::vector<Hand> players;

        void setPlayers();
        void processTurns();
        void showResult();
        bool playAgain();
};
