#include "StrippedJungleWood.hpp"
#include <stdexcept>

namespace Blocks {
    namespace StrippedJungleWood {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 202;
            case Properties::Axis::Y:
                return 203;
            case Properties::Axis::Z:
                return 204;
            }
            return 0;
        }
    }

}
