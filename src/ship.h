#ifndef SHIP_H
#define SHIP_H

#include <array>

#include "cardinal.h"
#include "point.h"
#include "shiptype.h"

template < std::size_t SHIP_SIZE >
class Ship
{
   public:
    ShipType                      shipType_;
    std::array< SHIP_SIZE, bool > hits_;
    Point< unsigned int >         position_;
    Cardinal                      bearing_;
};

#endif