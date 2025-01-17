#include "GreenCandle.hpp"
#include <stdexcept>

namespace Blocks {
    namespace GreenCandle {
        BlockId toProtocol(Properties::Candles candles, Properties::Lit lit, Properties::Waterlogged waterlogged) {
            switch (candles) {
            case Properties::Candles::ONE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20321;
                    case Properties::Waterlogged::FALSE:
                        return 20322;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20323;
                    case Properties::Waterlogged::FALSE:
                        return 20324;
                    }
                }
            case Properties::Candles::TWO:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20325;
                    case Properties::Waterlogged::FALSE:
                        return 20326;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20327;
                    case Properties::Waterlogged::FALSE:
                        return 20328;
                    }
                }
            case Properties::Candles::THREE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20329;
                    case Properties::Waterlogged::FALSE:
                        return 20330;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20331;
                    case Properties::Waterlogged::FALSE:
                        return 20332;
                    }
                }
            case Properties::Candles::FOUR:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20333;
                    case Properties::Waterlogged::FALSE:
                        return 20334;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20335;
                    case Properties::Waterlogged::FALSE:
                        return 20336;
                    }
                }
            }
            return 0;
        }
    }

}
