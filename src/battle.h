/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//               battle.h                  //
//                                         //
/////////////////////////////////////////////

#pragma once
#include <vector>
#include "pokemon.h"

class Battle
{
    public:
        // Sets up battle environment and fills players' teams
        Battle();

        // Returns winner
        // Calcualated as same value as passed to it
        // 0 for p1
        // 1 for p2
        int EndBattle(int);

    private:
        // Contains state of field
        // (eg. weather, spikes, stat buffs)
        struct Field
        {
            std::string weather;
            // Prolly a lot of bools here for each type of field state
        };

        struct Player
        {
            std::vector<Pokemon> team;
        };

        Player player1;
        Player player2;
};
