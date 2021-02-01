#include <array>

#include "board.h"
#include "player.h"

static const int N_PLAYERS = 2;

class GameManager
{
   public:
   private:
    std::array< Board, N_PLAYERS >  boards_;
    std::array< Player, N_PLAYERS > players_;
};