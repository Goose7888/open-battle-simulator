/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//               pokemon.h                 //
//                                         //
/////////////////////////////////////////////

#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "pokemonData.h"
#include "move.h"

class Pokemon 
{
    public:

        Pokemon(PokemonData& data, char gender);
        

        friend std::ostream& operator<<(std::ostream& os, Pokemon& poke);

    private:
        PokemonData* data;
        std::string ability;
        char gender; // Can be 'm' 'f' or 'u'

        std::vector<Move*> moves;
};
