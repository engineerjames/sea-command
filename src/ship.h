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
    Ship()
        : shipType_()
        , hits_()
        , position_()
        , bearing_()
    {
    }

    ShipType                      shipType_;
    std::array< bool, SHIP_SIZE > hits_;
    Point< unsigned int >         position_;
    Cardinal                      bearing_;
};

#endif