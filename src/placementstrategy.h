#ifndef PLACEMENT_STRATEGY_H
#define PLACEMENT_STRATEGY_H

#include <array>

#include "player.h"

class PlacementStrategy
{
   public:
    virtual std::array< Point< int >, Player::N_SHIPS > Place() = 0;
};

#endif