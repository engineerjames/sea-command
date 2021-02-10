#ifndef PLACEMENT_STRATEGY_H
#define PLACEMENT_STRATEGY_H

#include <array>

#include "player.h"

class PlacementStrategy
{
   public:
    typedef std::array< Point< int >, Player::N_SHIPS > PlacementArray;
    virtual PlacementArray                              Place() = 0;
};

#endif