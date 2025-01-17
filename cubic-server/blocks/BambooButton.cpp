#include "BambooButton.hpp"
#include <stdexcept>

namespace Blocks {
    namespace BambooButton {
        BlockId toProtocol(Properties::Face face, Properties::Facing facing, Properties::Powered powered) {
            switch (face) {
            case Properties::Face::FLOOR:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8547;
                    case Properties::Powered::FALSE:
                        return 8548;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8549;
                    case Properties::Powered::FALSE:
                        return 8550;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8551;
                    case Properties::Powered::FALSE:
                        return 8552;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8553;
                    case Properties::Powered::FALSE:
                        return 8554;
                    }
                }
            case Properties::Face::WALL:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8555;
                    case Properties::Powered::FALSE:
                        return 8556;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8557;
                    case Properties::Powered::FALSE:
                        return 8558;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8559;
                    case Properties::Powered::FALSE:
                        return 8560;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8561;
                    case Properties::Powered::FALSE:
                        return 8562;
                    }
                }
            case Properties::Face::CEILING:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8563;
                    case Properties::Powered::FALSE:
                        return 8564;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8565;
                    case Properties::Powered::FALSE:
                        return 8566;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8567;
                    case Properties::Powered::FALSE:
                        return 8568;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 8569;
                    case Properties::Powered::FALSE:
                        return 8570;
                    }
                }
            }
            return 0;
        }
    }

}
