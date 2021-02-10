#ifndef PLAYER_H
#define PLAYER_H

#include <memory>

#include "placementstrategy.h"
#include "ship.h"
#include "shotstrategy.h"

class Player
{
   public:
    Player();

    static const int N_SHIPS = 5;

    void setShotStrategy( std::shared_ptr< ShotStrategy > strat );
    void setPlacementStrategy( std::shared_ptr< PlacementStrategy > strat );

   private:
    Ship< 5 > carrier_;
    Ship< 4 > battleship_;
    Ship< 3 > destroyer_;
    Ship< 3 > submarine_;
    Ship< 2 > patrolBoat_;

    std::shared_ptr< PlacementStrategy > placementStrat_;
    std::shared_ptr< ShotStrategy >      shotStrat_;
};

#endif