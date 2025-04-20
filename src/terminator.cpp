

#include "terminator.h"

void Terminator::FreePokeDataArr(std::vector<PokemonData>& pokeDataArr)
{
    for (int i = 0; i < pokeDataArr.size() - 1; i++)
    {
        delete &pokeDataArr.at(i);
    }
}
