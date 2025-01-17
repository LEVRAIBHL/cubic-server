#include "SmoothStoneSlab.hpp"
#include <stdexcept>

namespace Blocks {
    namespace SmoothStoneSlab {
        BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged) {
            switch (type) {
            case Properties::Type::TOP:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 10745;
                case Properties::Waterlogged::FALSE:
                    return 10746;
                }
            case Properties::Type::BOTTOM:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 10747;
                case Properties::Waterlogged::FALSE:
                    return 10748;
                }
            case Properties::Type::DOUBLE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 10749;
                case Properties::Waterlogged::FALSE:
                    return 10750;
                }
            }
            return 0;
        }
    }

}
