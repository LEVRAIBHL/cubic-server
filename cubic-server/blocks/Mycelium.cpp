#include "Mycelium.hpp"
#include <stdexcept>

namespace Blocks {
    namespace Mycelium {
        BlockId toProtocol(Properties::Snowy snowy) {
            switch (snowy) {
            case Properties::Snowy::TRUE:
                return 7039;
            case Properties::Snowy::FALSE:
                return 7040;
            }
            return 0;
        }
    }

}
