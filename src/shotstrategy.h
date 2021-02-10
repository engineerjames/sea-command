#ifndef SHOT_STRATEGY_H
#define SHOT_STRATEGY_H

#include "point.h"

class ShotStrategy
{
   public:
    virtual Point< int > Fire() = 0;
    virtual ~ShotStrategy()
    {
    }
};

#endif