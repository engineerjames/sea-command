#include "player.h"

Player::Player()
    : carrier_()
    , battleship_()
    , destroyer_()
    , submarine_()
    , patrolBoat_()
    , placementStrat_()
    , shotStrat_()
{
}

void Player::setShotStrategy( std::shared_ptr< ShotStrategy > strat )
{
    this->shotStrat_ = strat;
}

void Player::setPlacementStrategy( std::shared_ptr< PlacementStrategy > strat )
{
    this->placementStrat_ = strat;
}