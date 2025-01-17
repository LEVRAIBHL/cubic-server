#include "SmoothQuartzSlab.hpp"
#include <stdexcept>

namespace Blocks {
    namespace SmoothQuartzSlab {
        BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged) {
            switch (type) {
            case Properties::Type::TOP:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 13496;
                case Properties::Waterlogged::FALSE:
                    return 13497;
                }
            case Properties::Type::BOTTOM:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 13498;
                case Properties::Waterlogged::FALSE:
                    return 13499;
                }
            case Properties::Type::DOUBLE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 13500;
                case Properties::Waterlogged::FALSE:
                    return 13501;
                }
            }
            return 0;
        }
    }

}
