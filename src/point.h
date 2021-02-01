#ifndef POINT_H
#define POINT_H

#include <cmath>

template < typename T >
struct Point
{
    T x;
    T y;

    Point( T x, T y )
        : x( x )
        , y( y )
    {
    }

    Point()
        : x( 0 )
        , y( 0 )
    {
    }

    static double DistanceBetween( Point< T > p1, Point< T > p2 )
    {
        double deltaX   = std::pow( p2.x - p1.x, 2.0 );
        double deltaY   = std::pow( p2.y - p1.y, 2.0 );
        double distance = std::sqrt( deltaX + deltaY );

        return distance;
    }
};

#endif