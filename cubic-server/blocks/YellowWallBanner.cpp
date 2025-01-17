#include "YellowWallBanner.hpp"
#include <stdexcept>

namespace Blocks {
    namespace YellowWallBanner {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 10554;
            case Properties::Facing::SOUTH:
                return 10555;
            case Properties::Facing::WEST:
                return 10556;
            case Properties::Facing::EAST:
                return 10557;
            }
            return 0;
        }
    }

}
