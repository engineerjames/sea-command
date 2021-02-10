#include <array>

#include "ship.h"

// class PlacementStrategy;
// class ShotStrategy;

class Player
{
   public:
    Player();
    // Player(const PlacementStrategy& placement, const ShotStrategy& shot);

    static const int N_SHIPS = 5;

   private:
    Ship< 5 > carrier_;
    Ship< 4 > battleship_;
    Ship< 3 > destroyer_;
    Ship< 3 > submarine_;
    Ship< 2 > patrolBoat_;
};