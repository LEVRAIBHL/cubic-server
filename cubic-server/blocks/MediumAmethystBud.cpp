#include "MediumAmethystBud.hpp"
#include <stdexcept>

namespace Blocks {
    namespace MediumAmethystBud {
        BlockId toProtocol(Properties::Facing facing, Properties::Waterlogged waterlogged) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 20429;
                case Properties::Waterlogged::FALSE:
                    return 20430;
                }
            case Properties::Facing::EAST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 20431;
                case Properties::Waterlogged::FALSE:
                    return 20432;
                }
            case Properties::Facing::SOUTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 20433;
                case Properties::Waterlogged::FALSE:
                    return 20434;
                }
            case Properties::Facing::WEST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 20435;
                case Properties::Waterlogged::FALSE:
                    return 20436;
                }
            case Properties::Facing::UP:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 20437;
                case Properties::Waterlogged::FALSE:
                    return 20438;
                }
            case Properties::Facing::DOWN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 20439;
                case Properties::Waterlogged::FALSE:
                    return 20440;
                }
            }
            return 0;
        }
    }

}
