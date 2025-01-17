#include "GrassBlock.hpp"
#include <stdexcept>

namespace Blocks {
    namespace GrassBlock {
        BlockId toProtocol(Properties::Snowy snowy) {
            switch (snowy) {
            case Properties::Snowy::TRUE:
                return 8;
            case Properties::Snowy::FALSE:
                return 9;
            }
            return 0;
        }
    }

}
