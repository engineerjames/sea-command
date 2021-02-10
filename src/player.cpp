#include "player.h"

#include "placementstrategy.h"
#include "shotstrategy.h"

Player::Player( const PlacementStrategy& placement, const ShotStrategy& shot )
    : carrier_()
    , battleship_()
    , destroyer_()
    , submarine_()
    , patrolBoat_()
    , placementStrat_( placement )
    , shotStrat_( shot )
{
}