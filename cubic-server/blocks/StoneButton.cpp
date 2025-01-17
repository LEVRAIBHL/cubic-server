#include "StoneButton.hpp"
#include <stdexcept>

namespace Blocks {
    namespace StoneButton {
        BlockId toProtocol(Properties::Face face, Properties::Facing facing, Properties::Powered powered) {
            switch (face) {
            case Properties::Face::FLOOR:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5582;
                    case Properties::Powered::FALSE:
                        return 5583;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5584;
                    case Properties::Powered::FALSE:
                        return 5585;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5586;
                    case Properties::Powered::FALSE:
                        return 5587;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5588;
                    case Properties::Powered::FALSE:
                        return 5589;
                    }
                }
            case Properties::Face::WALL:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5590;
                    case Properties::Powered::FALSE:
                        return 5591;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5592;
                    case Properties::Powered::FALSE:
                        return 5593;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5594;
                    case Properties::Powered::FALSE:
                        return 5595;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5596;
                    case Properties::Powered::FALSE:
                        return 5597;
                    }
                }
            case Properties::Face::CEILING:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5598;
                    case Properties::Powered::FALSE:
                        return 5599;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5600;
                    case Properties::Powered::FALSE:
                        return 5601;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5602;
                    case Properties::Powered::FALSE:
                        return 5603;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 5604;
                    case Properties::Powered::FALSE:
                        return 5605;
                    }
                }
            }
            return 0;
        }
    }

}
