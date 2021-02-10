#ifndef PLACEMENT_STRATEGY_H
#define PLACEMENT_STRATEGY_H

#include <array>

#include "point.h"

class PlacementStrategy
{
   public:
    typedef std::array< Point< int >, 5 > PlacementArray;
    virtual PlacementArray                Place() = 0;
    virtual ~PlacementStrategy()
    {
    }
};

#endif