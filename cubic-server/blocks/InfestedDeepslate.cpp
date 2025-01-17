#include "InfestedDeepslate.hpp"
#include <stdexcept>

namespace Blocks {
    namespace InfestedDeepslate {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 23212;
            case Properties::Axis::Y:
                return 23213;
            case Properties::Axis::Z:
                return 23214;
            }
            return 0;
        }
    }

}
