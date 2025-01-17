#include "GrayCandle.hpp"
#include <stdexcept>

namespace Blocks {
    namespace GrayCandle {
        BlockId toProtocol(Properties::Candles candles, Properties::Lit lit, Properties::Waterlogged waterlogged) {
            switch (candles) {
            case Properties::Candles::ONE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20225;
                    case Properties::Waterlogged::FALSE:
                        return 20226;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20227;
                    case Properties::Waterlogged::FALSE:
                        return 20228;
                    }
                }
            case Properties::Candles::TWO:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20229;
                    case Properties::Waterlogged::FALSE:
                        return 20230;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20231;
                    case Properties::Waterlogged::FALSE:
                        return 20232;
                    }
                }
            case Properties::Candles::THREE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20233;
                    case Properties::Waterlogged::FALSE:
                        return 20234;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20235;
                    case Properties::Waterlogged::FALSE:
                        return 20236;
                    }
                }
            case Properties::Candles::FOUR:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20237;
                    case Properties::Waterlogged::FALSE:
                        return 20238;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20239;
                    case Properties::Waterlogged::FALSE:
                        return 20240;
                    }
                }
            }
            return 0;
        }
    }

}
