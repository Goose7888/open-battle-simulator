////////////////////////////////////////////
///                                      ///
///        Open Battle Simulator         ///
///                                      ///
///            Trevor Clark              ///
///                                      ///
///   --------------------------------   ///
///                                      ///
///              move.h                  ///
///                                      ///
////////////////////////////////////////////

#pragma once

// Move as in a Pokemon "Move"
// An Attack, or otherwise
class Move 
{
    public:



    private:

        char category;
        /* 'p' for physical
         * 's' for special
         * 'n' for status (null damage) */

        uint32_t baseDamage;
        uint32_t type;

        uint32_t maxPP;
        uint32_t curPP;
};
