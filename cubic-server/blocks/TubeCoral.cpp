#include "TubeCoral.hpp"
#include <stdexcept>

namespace Blocks {
    namespace TubeCoral {
        BlockId toProtocol(Properties::Waterlogged waterlogged) {
            switch (waterlogged) {
            case Properties::Waterlogged::TRUE:
                return 12195;
            case Properties::Waterlogged::FALSE:
                return 12196;
            }
            return 0;
        }
    }

}
