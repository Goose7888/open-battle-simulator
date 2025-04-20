// Initializes all data fields / arrays from JSON files

#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include <nlohmann/json.hpp>

#include "pokemonData.h"

using json = nlohmann::json;

class Initializer {

    public:
        // @short Populates a given array of PokemonData with all Pokemon Data
        // Reads from file pokedex.json
        void InitializePokemonData(std::vector<PokemonData>&, int);

        // void initializeMoveData(Move*, int);

        // void initializeItemData(Item*, int);
        
        void PrintPokemonData();
    
    private:
        json pokeData;
};
