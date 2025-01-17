#include "ZombieWallHead.hpp"
#include <stdexcept>

namespace Blocks {
    namespace ZombieWallHead {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 8627;
            case Properties::Facing::SOUTH:
                return 8628;
            case Properties::Facing::WEST:
                return 8629;
            case Properties::Facing::EAST:
                return 8630;
            }
            return 0;
        }
    }

}
