#include "MangroveWood.hpp"
#include <stdexcept>

namespace Blocks {
    namespace MangroveWood {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 190;
            case Properties::Axis::Y:
                return 191;
            case Properties::Axis::Z:
                return 192;
            }
            return 0;
        }
    }

}
