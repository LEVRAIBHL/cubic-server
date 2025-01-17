#include "Conduit.hpp"
#include <stdexcept>

namespace Blocks {
    namespace Conduit {
        BlockId toProtocol(Properties::Waterlogged waterlogged) {
            switch (waterlogged) {
            case Properties::Waterlogged::TRUE:
                return 12314;
            case Properties::Waterlogged::FALSE:
                return 12315;
            }
            return 0;
        }
    }

}
