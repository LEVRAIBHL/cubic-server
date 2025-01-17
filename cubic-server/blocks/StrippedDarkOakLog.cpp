#include "StrippedDarkOakLog.hpp"
#include <stdexcept>

namespace Blocks {
    namespace StrippedDarkOakLog {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 160;
            case Properties::Axis::Y:
                return 161;
            case Properties::Axis::Z:
                return 162;
            }
            return 0;
        }
    }

}
