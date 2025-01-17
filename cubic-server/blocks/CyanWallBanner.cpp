#include "CyanWallBanner.hpp"
#include <stdexcept>

namespace Blocks {
    namespace CyanWallBanner {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 10574;
            case Properties::Facing::SOUTH:
                return 10575;
            case Properties::Facing::WEST:
                return 10576;
            case Properties::Facing::EAST:
                return 10577;
            }
            return 0;
        }
    }

}
