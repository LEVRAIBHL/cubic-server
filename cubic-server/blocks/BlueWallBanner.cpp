#include "BlueWallBanner.hpp"
#include <stdexcept>

namespace Blocks {
    namespace BlueWallBanner {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 10582;
            case Properties::Facing::SOUTH:
                return 10583;
            case Properties::Facing::WEST:
                return 10584;
            case Properties::Facing::EAST:
                return 10585;
            }
            return 0;
        }
    }

}
