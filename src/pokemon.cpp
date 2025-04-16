////////////////////////////////////////////
///                                      ///
///        Open Battle Simulator         ///
///                                      ///
///            Trevor Clark              ///
///                                      ///
///   --------------------------------   ///
///                                      ///
///             pokemon.cpp              ///
///                                      ///
////////////////////////////////////////////

#include "pokemon.h"

// Big Constructor
Pokemon(uint32_t idNo, uint32_t type,
    uint32_t hp, uint32_t attack,
    uint32_t defense, uint32_t spattack,
    uint32_t spdefense, uint32_t speed,
    Move first, Move second, Move third,
    Move fourth, char gender)
{
    this->idNo = idNo;
    this->type = type;
    this->stats.hp = hp;
    
    this->stats.attack = attack;
    this->stats.defense = defense;
    this->stats.spattack = spattack;
    this->stats.spdefense = spdefense;
    this->stats.speed = speed;

    this->moves.first = first;
    this->moves.second = second;
    this->moves.third = third;
    this->moves.fourth = fourth;

    this->gender = gender;
}



