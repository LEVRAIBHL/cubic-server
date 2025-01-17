#include "TubeCoralFan.hpp"
#include <stdexcept>

namespace Blocks {
    namespace TubeCoralFan {
        BlockId toProtocol(Properties::Waterlogged waterlogged) {
            switch (waterlogged) {
            case Properties::Waterlogged::TRUE:
                return 12215;
            case Properties::Waterlogged::FALSE:
                return 12216;
            }
            return 0;
        }
    }

}
