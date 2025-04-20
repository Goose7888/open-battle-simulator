/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//                                         //
//                                         //
/////////////////////////////////////////////


// INITIAL GOAL:
//  ONLY SUPPORT GEN 1, THEN EXTEND SUPPORT

#include <iostream>
#include <vector>

#include "initializer.h"
// #include "terminator.h"
#include "pokemonData.h"

int main(int argc, char** argv)
{
    // Vars for reference arrays
    int pokeDataLength = 387;
    std::vector<PokemonData> pokeDataArr;

    // Declare Objects
    Initializer init;
    // Terminator terminate;

    // Execution Starts Here
    init.InitializePokemonData(pokeDataArr, pokeDataLength);


    // Test for correct capturing of data
    for (int i = 0; i < pokeDataArr.size() - 1; i++)
    {
        std::cout << pokeDataArr.at(i);
    }

    //terminate.FreePokeDataArr(pokeDataArr); 
    return 0;
}
