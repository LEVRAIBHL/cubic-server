#include "HangingRoots.hpp"
#include <stdexcept>

namespace Blocks {
    namespace HangingRoots {
        BlockId toProtocol(Properties::Waterlogged waterlogged) {
            switch (waterlogged) {
            case Properties::Waterlogged::TRUE:
                return 21558;
            case Properties::Waterlogged::FALSE:
                return 21559;
            }
            return 0;
        }
    }

}
