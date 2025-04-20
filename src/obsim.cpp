


// INITIAL GOAL:
//  ONLY SUPPORT GEN 1, THEN EXTEND SUPPORT

#include <iostream>
#include <vector>

#include "initializer.h"
#include "pokemonData.h"

int main(int argc, char** argv)
{
    // Vars for reference arrays
    int pokeDataLength = 151;
    std::vector<PokemonData> pokeDataArr;

    // Declare Objects
    Initializer init;

    // Execution Starts Here
    init.InitializePokemonData(pokeDataArr, pokeDataLength);
    //init.PrintPokemonData();

    return 0;
}
