#include "YellowCandle.hpp"
#include <stdexcept>

namespace Blocks {
    namespace YellowCandle {
        BlockId toProtocol(Properties::Candles candles, Properties::Lit lit, Properties::Waterlogged waterlogged) {
            switch (candles) {
            case Properties::Candles::ONE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20177;
                    case Properties::Waterlogged::FALSE:
                        return 20178;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20179;
                    case Properties::Waterlogged::FALSE:
                        return 20180;
                    }
                }
            case Properties::Candles::TWO:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20181;
                    case Properties::Waterlogged::FALSE:
                        return 20182;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20183;
                    case Properties::Waterlogged::FALSE:
                        return 20184;
                    }
                }
            case Properties::Candles::THREE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20185;
                    case Properties::Waterlogged::FALSE:
                        return 20186;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20187;
                    case Properties::Waterlogged::FALSE:
                        return 20188;
                    }
                }
            case Properties::Candles::FOUR:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20189;
                    case Properties::Waterlogged::FALSE:
                        return 20190;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20191;
                    case Properties::Waterlogged::FALSE:
                        return 20192;
                    }
                }
            }
            return 0;
        }
    }

}
