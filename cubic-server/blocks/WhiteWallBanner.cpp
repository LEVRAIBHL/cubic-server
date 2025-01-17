#include "WhiteWallBanner.hpp"
#include <stdexcept>

namespace Blocks {
    namespace WhiteWallBanner {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 10538;
            case Properties::Facing::SOUTH:
                return 10539;
            case Properties::Facing::WEST:
                return 10540;
            case Properties::Facing::EAST:
                return 10541;
            }
            return 0;
        }
    }

}
