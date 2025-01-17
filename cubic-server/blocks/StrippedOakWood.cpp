#include "StrippedOakWood.hpp"
#include <stdexcept>

namespace Blocks {
    namespace StrippedOakWood {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 193;
            case Properties::Axis::Y:
                return 194;
            case Properties::Axis::Z:
                return 195;
            }
            return 0;
        }
    }

}
