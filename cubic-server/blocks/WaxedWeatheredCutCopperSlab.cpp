#include "WaxedWeatheredCutCopperSlab.hpp"
#include <stdexcept>

namespace Blocks {
    namespace WaxedWeatheredCutCopperSlab {
        BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged) {
            switch (type) {
            case Properties::Type::TOP:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 21380;
                case Properties::Waterlogged::FALSE:
                    return 21381;
                }
            case Properties::Type::BOTTOM:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 21382;
                case Properties::Waterlogged::FALSE:
                    return 21383;
                }
            case Properties::Type::DOUBLE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 21384;
                case Properties::Waterlogged::FALSE:
                    return 21385;
                }
            }
            return 0;
        }
    }

}
