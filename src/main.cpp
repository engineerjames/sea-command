#include <iostream>
#include <memory>

#include "gamemanager.h"

int main()
{
    std::unique_ptr< GameManager > gm = std::make_unique< GameManager >();

    return 0;
}