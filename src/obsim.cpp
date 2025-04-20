/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//               obsim.cpp                 //
//                                         //
/////////////////////////////////////////////


// INITIAL GOAL:
//  ONLY SUPPORT GEN 3, THEN EXTEND SUPPORT

#include <iostream>
#include <vector>

#include "initializer.h"
#include "pokemonData.h"

int main(int argc, char** argv)
{
    // Vars for reference arrays
    int pokeDataLength = 387;
    std::vector<PokemonData> pokeDataArr;

    // Declare Objects
    Initializer init;

    // Execution Starts Here
    init.InitializePokemonData(pokeDataArr, pokeDataLength);


    // Test for correct capturing of data
    for (int i = 0; i < pokeDataArr.size() - 1; i++)
    {
        std::cout << pokeDataArr.at(i);
    }

    return 0;
}
