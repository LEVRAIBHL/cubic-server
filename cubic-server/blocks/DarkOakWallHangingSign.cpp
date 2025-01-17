#include "DarkOakWallHangingSign.hpp"
#include <stdexcept>

namespace Blocks {
    namespace DarkOakWallHangingSign {
        BlockId toProtocol(Properties::Facing facing, Properties::Waterlogged waterlogged) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5422;
                case Properties::Waterlogged::FALSE:
                    return 5423;
                }
            case Properties::Facing::SOUTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5424;
                case Properties::Waterlogged::FALSE:
                    return 5425;
                }
            case Properties::Facing::WEST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5426;
                case Properties::Waterlogged::FALSE:
                    return 5427;
                }
            case Properties::Facing::EAST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 5428;
                case Properties::Waterlogged::FALSE:
                    return 5429;
                }
            }
            return 0;
        }
    }

}
