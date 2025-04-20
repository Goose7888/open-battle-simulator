

#include "pokemonData.h"

PokemonData::PokemonData(int id, std::string english, std::string japanese,
        std::string chinese, std::string french, std::string type1,
        std::string type2, int hp, int attack, int defense, int spAttack,
        int spDefense, int speed)
{
    this->id = id;
    this->name.english = english;
    this->name.japanese = japanese;
    this->name.chinese = chinese;
    this->name.french = french;
    this->type.type1 = type1;
    this->type.type2 = type2;
    this->base.hp = hp;
    this->base.attack = attack;
    this->base.defense = defense;
    this->base.spAttack = spAttack;
    this->base.spDefense = spDefense;
    this->base.speed = speed;
}


std::ostream& operator<<(std::ostream& os, const PokemonData& pData)
{
    os << "Pokedex Data For Number " << pData.id << ": " << std::endl;
    os << "Name: " << pData.name.english << std::endl;
    os << "Type(s): " << std::endl;
        os << "\t" << pData.type.type1 << std::endl;
        //os << "\t" << pData.type.type2 << std::endl;
    os << "Base Stats:" << std::endl;
        os << "\tHP:          " << pData.base.hp << std::endl;
        os << "\tAttack:      " << pData.base.attack << std::endl;
        os << "\tDefense:     " << pData.base.defense << std::endl;
        os << "\tSp. Attack:  " << pData.base.spAttack << std::endl;
        os << "\tSp. Defense: " << pData.base.spDefense << std::endl;
    os << std::endl;

    return os;
}
