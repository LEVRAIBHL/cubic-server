#include "SpruceWallSign.hpp"
#include <stdexcept>

namespace Blocks {
    namespace SpruceWallSign {
        BlockId toProtocol(Properties::Facing facing, Properties::Waterlogged waterlogged) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4686;
                case Properties::Waterlogged::FALSE:
                    return 4687;
                }
            case Properties::Facing::SOUTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4688;
                case Properties::Waterlogged::FALSE:
                    return 4689;
                }
            case Properties::Facing::WEST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4690;
                case Properties::Waterlogged::FALSE:
                    return 4691;
                }
            case Properties::Facing::EAST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4692;
                case Properties::Waterlogged::FALSE:
                    return 4693;
                }
            }
            return 0;
        }
    }

}
