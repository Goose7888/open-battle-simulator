/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//              team.cpp                   //
//                                         //
/////////////////////////////////////////////

#include "team.h"

Team::Team(Pokemon* p1, Pokemon* p2, Pokemon* p3,
        Pokemon* p4, Pokemon* p5, Pokemon* p6)
{
    teamCount = 0;
    // Pre-allocate 6 spots in the team. 
    team.reserve(6);


    if(p1 != nullptr)
    {
        teamCount++;
        team.push_back(p1);
    }
    if(p2 != nullptr)
    {
        teamCount++;
        team.push_back(p2);
    }
    if(p3 != nullptr)
    {
        teamCount++;
        team.push_back(p3);
    }
    if(p4 != nullptr)
    {
        teamCount++;
        team.push_back(p4);
    }
    if(p5 != nullptr)
    {
        teamCount++;
        team.push_back(p5);
    }
    if(p6 != nullptr)
    {
        teamCount++;
        team.push_back(p6);
    }

    // Fill in remaining spots with nullptr
    for (int i = 0; i < 6 - teamCount; i++)
        team.push_back(nullptr);
}


