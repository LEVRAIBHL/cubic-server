#include "OakSapling.hpp"
#include <stdexcept>

namespace Blocks {
    namespace OakSapling {
        BlockId toProtocol(Properties::Stage stage) {
            switch (stage) {
            case Properties::Stage::ZERO:
                return 24;
            case Properties::Stage::ONE:
                return 25;
            }
            return 0;
        }
    }

}
