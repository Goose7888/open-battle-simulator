////////////////////////////////////////////
///                                      ///
///        Open Battle Simulator         ///
///                                      ///
///            Trevor Clark              ///
///                                      ///
///   --------------------------------   ///
///                                      ///
///              pokemon.h               ///
///                                      ///
////////////////////////////////////////////

#pragma once

class Pokemon {

    public:

        Pokemon(uint32_t idNo, uint32_t type,
                uint32_t hp, uint32_t attack,
                uint32_t defense, uint32_t spattack,
                uint32_t spdefense, uint32_t speed,
                Move first, Move second, Move third,
                Move fourth, char gender);
        

    
    private:

        uint32_t idNo;

        uint32_t type;

        struct stats {
            uint32_t hp;
            uint32_t attack;
            uint32_t defense;
            uint32_t spattack;
            uint32_t spdefense;
            uint32_t speed;
        };

        struct moves {
            Move first;
            Move second;
            Move third;
            Move fourth;
        };

        uint32_t current_hp;

        char gender;

};
