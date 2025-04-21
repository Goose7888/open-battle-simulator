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
        
        friend std::ostream& operator<<(ostream& os, Pokemon& poke);

    private:
        PokemonData* data;
        std::string ability;
        char gender; // Can be 'm' 'f' or 'u'

        std::vector<Move*> moves;
};
