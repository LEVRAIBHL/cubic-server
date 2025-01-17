#include "GrayWallBanner.hpp"
#include <stdexcept>

namespace Blocks {
    namespace GrayWallBanner {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 10566;
            case Properties::Facing::SOUTH:
                return 10567;
            case Properties::Facing::WEST:
                return 10568;
            case Properties::Facing::EAST:
                return 10569;
            }
            return 0;
        }
    }

}
