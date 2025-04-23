/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//             pokemon.cpp                 //
//                                         //
/////////////////////////////////////////////

#include "pokemon.h"


Pokemon::Pokemon(PokemonData& data, char gender)
{
    this->data = &data;
    this->gender = gender;
}


std::ostream& operator<<(std::ostream& os, Pokemon& poke)
{
    os << poke.data->GetName() << std::endl;
    return os;
}
