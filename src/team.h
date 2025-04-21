/////////////////////////////////////////////
//                                         //
//          Open Battle Simulator          //
//                                         //
//             Trevor Clark                //
//  -------------------------------------  //
//                                         //
//                team.h                   //
//                                         //
/////////////////////////////////////////////

#pragma once
#include <vector>
#include <iostream>
#include "pokemon.h"

// Rules for a team:
//  Consists of 1-6 Pokemon
//  Order is important, but may be changed during battle
//      (by swapping positions)
//  Null team members will always be at the end
//
class Team
{
    public:
        // Builds team with the given pokemon
        //   (nullptr is ok. Team will be modified
        //   so null spots always some list in team list)
        Team(Pokemon* p1, Pokemon* p2, Pokemon* p3,
                Pokemon* p4, Pokemon* p5, Pokemon* p6);
        
        // Swaps position of two team members
        // Will fail if either position points to nullptr
        // Returns true on success; false on fail
        bool Swap(int pos1, int pos2);


        // Accessors
        const int GetTeamCount() { return teamCount; }

        friend std::ostream& operator<<(std::ostream& os, Team& tm)
        {
            os << "There are " << tm.teamCount << " Pokemon:" << std::endl;

            for (int i = 0; i < tm.teamCount; i++)
            {
                os << i + 1 << ": " << std::endl;
                os << *tm.team.at(i) << std::endl;
            }

            return os;
        }
            
    private:
        // This vector should never get modified
        // after the call to the constructor
        std::vector<Pokemon*> team;

        // Number of filled slots on team
        // Should never be modified after
        // the constructor
        int teamCount;

};
