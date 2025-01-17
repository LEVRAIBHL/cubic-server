#include "ChippedAnvil.hpp"
#include <stdexcept>

namespace Blocks {
    namespace ChippedAnvil {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 8715;
            case Properties::Facing::SOUTH:
                return 8716;
            case Properties::Facing::WEST:
                return 8717;
            case Properties::Facing::EAST:
                return 8718;
            }
            return 0;
        }
    }

}
