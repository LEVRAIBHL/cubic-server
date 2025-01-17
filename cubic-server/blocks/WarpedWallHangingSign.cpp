#include "WarpedWallHangingSign.hpp"
#include <stdexcept>

namespace Blocks {
    namespace WarpedWallHangingSign {
        BlockId toProtocol(Properties::Facing facing, Properties::Waterlogged waterlogged) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5446;
                case Properties::Waterlogged::FALSE:
                    return 5447;
                }
            case Properties::Facing::SOUTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5448;
                case Properties::Waterlogged::FALSE:
                    return 5449;
                }
            case Properties::Facing::WEST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5450;
                case Properties::Waterlogged::FALSE:
                    return 5451;
                }
            case Properties::Facing::EAST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5452;
                case Properties::Waterlogged::FALSE:
                    return 5453;
                }
            }
            return 0;
        }
    }

}
