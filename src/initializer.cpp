#include "initializer.h"

using json = nlohmann::json;

void Initializer::InitializePokemonData(std::vector<PokemonData>& pokeDataArray, int length)
{
    std::cout << "Begin Reading Pokedex!" << std::endl;

    std::ifstream inFile("./pokemon.json/pokedex.json");

    if (!inFile)
    {
        throw std::runtime_error("Could not open pokedex.json");
    }

    pokeData = json::parse(inFile);
    inFile.close();

    std::cout << "Pokedex Read!" << std::endl;
    
    std::cout << "Updating Data Set!" << std::endl;

    for (int i = 0; i < length; i++)
    {
        // std::cout << pokeData[i] << std::endl;

        // Capture data points into arrays
        int id = pokeData[i]["id"];
        std::string english = pokeData[i]["name"]["english"];

        std::cout << "No " << id << " " << english << std::endl;
        
    }


}


void Initializer::PrintPokemonData()
{
    std::cout << std::setw(4) << pokeData << std::endl;
}
