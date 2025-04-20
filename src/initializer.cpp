/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//            initializer.cpp              //
//                                         //
/////////////////////////////////////////////

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
        // Capture data points into arrays
        int id = pokeData[i]["id"];
        std::string english = pokeData[i]["name"]["english"];
        std::string japanese = pokeData[i]["name"]["japanese"];
        std::string chinese = pokeData[i]["name"]["chinese"];
        std::string french = pokeData[i]["name"]["french"];
        std::string type1 = pokeData[i]["type"][0];
        std::string type2 = "null";
        int hp = pokeData[i]["base"]["HP"];
        int attack = pokeData[i]["base"]["Attack"];
        int defense = pokeData[i]["base"]["Defense"];
        int spAttack = pokeData[i]["base"]["Sp. Attack"];
        int spDefense = pokeData[i]["base"]["Sp. Defense"];
        int speed = pokeData[i]["base"]["Speed"];

        // Create New Entry for global array
        PokemonData* newData = new PokemonData(
                id, english, japanese, chinese, french,
                type1, type2, hp, attack, defense, 
                spAttack, spDefense, speed);

        pokeDataArray.push_back(*newData);
    }
}


