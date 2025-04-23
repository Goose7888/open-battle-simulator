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
#include <queue>

#include "initializer.h"
#include "pokemonData.h"
#include "battle.h"

int main(int argc, char** argv)
{
    // Vars for reference arrays
    int pokeDataLength = 387;
    std::vector<PokemonData> pokeDataArr;

    // Declare Objects
    Initializer init;
    std::queue<Battle> battleQueue; // Battle Queue System... 
                        // Battles can be queued up to be simulated
    

    // Execution Starts Here
    std::cout << "Initializing Data..." << std::endl;
    init.InitializePokemonData(pokeDataArr, pokeDataLength);
    std::cout << "Done!" << std::endl << std::endl;

    bool doLoop = true;
    std::string choice;
    do 
    {
        std::cout << "1. Team Builder" << std::endl;
        std::cout << "2. New Battle" << std::endl;
        std::cout << "3. Run Battles" << std::endl;
        std::cout << "4. Exit" << std::endl << std::endl;

        std::getline(std::cin, choice);

        switch (choice.at(0))
        {
            case '1':
                std::cout << "Team Builder" << std::endl;
                break;

            case '2':
                std::cout << "New Battle" << std::endl;
                break;

            case '3':
                std::cout << "Run Battles" << std::endl;
                break;

            case '4':
                std::cout << "Exitting..." << std::endl;
                doLoop = false;
                break;

            default:
                std::cout << "Invalid Selection" << std::endl;
        }
    } while (doLoop);

    return 0;
}
