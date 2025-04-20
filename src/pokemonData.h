
#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class PokemonData {
    public:
        // Initializes a data entry with the following values:
            // int id
            // string name (english)
            // string name (japanese)
            // string name (chinese)
            // string name (french)
            // string type 1
            // string type 2
            // int base hp
            // int base attack
            // int base defense
            // int base sp attack
            // int base sp defense
            // int base speed
        PokemonData(int, std::string, std::string, std::string, std::string,
                std::string, std::string, int, int, int, int, int, int);

        friend std::ostream& operator<< (std::ostream& os, const PokemonData& pData);

    private:
        
        // The following are attributes for a single species of pokemon:

        // Similar to index of array
        int id;

        // Name of Pokemon (multi-language support)
        struct {
            std::string english;
            std::string japanese;
            std::string chinese;
            std::string french;
        } name;

        // Type(s)
        struct {
            std::string type1;
            std::string type2;
        } type;
        
        // Base stats:
        struct {
            int hp;
            int attack;
            int defense;
            int spAttack;
            int spDefense;
            int speed;
        } base;



};
