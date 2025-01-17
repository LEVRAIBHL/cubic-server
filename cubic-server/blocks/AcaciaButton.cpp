#include "AcaciaButton.hpp"
#include <stdexcept>

namespace Blocks {
    namespace AcaciaButton {
        BlockId toProtocol(Properties::Face face, Properties::Facing facing, Properties::Powered powered) {
            switch (face) {
            case Properties::Face::FLOOR:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8475;
                    case Properties::Powered::FALSE:
                        return 8476;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8477;
                    case Properties::Powered::FALSE:
                        return 8478;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8479;
                    case Properties::Powered::FALSE:
                        return 8480;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8481;
                    case Properties::Powered::FALSE:
                        return 8482;
                    }
                }
            case Properties::Face::WALL:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8483;
                    case Properties::Powered::FALSE:
                        return 8484;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8485;
                    case Properties::Powered::FALSE:
                        return 8486;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8487;
                    case Properties::Powered::FALSE:
                        return 8488;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8489;
                    case Properties::Powered::FALSE:
                        return 8490;
                    }
                }
            case Properties::Face::CEILING:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8491;
                    case Properties::Powered::FALSE:
                        return 8492;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8493;
                    case Properties::Powered::FALSE:
                        return 8494;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8495;
                    case Properties::Powered::FALSE:
                        return 8496;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8497;
                    case Properties::Powered::FALSE:
                        return 8498;
                    }
                }
            }
            return 0;
        }
    }

}
