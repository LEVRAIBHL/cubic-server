#include "PurpleBed.hpp"
#include <stdexcept>

namespace Blocks {
    namespace PurpleBed {
        BlockId toProtocol(Properties::Facing facing, Properties::Occupied occupied, Properties::Part part) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (occupied) {
                case Properties::Occupied::TRUE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1797;
                    case Properties::Part::FOOT:
                        return 1798;
                    }
                case Properties::Occupied::FALSE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1799;
                    case Properties::Part::FOOT:
                        return 1800;
                    }
                }
            case Properties::Facing::SOUTH:
                switch (occupied) {
                case Properties::Occupied::TRUE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1801;
                    case Properties::Part::FOOT:
                        return 1802;
                    }
                case Properties::Occupied::FALSE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1803;
                    case Properties::Part::FOOT:
                        return 1804;
                    }
                }
            case Properties::Facing::WEST:
                switch (occupied) {
                case Properties::Occupied::TRUE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1805;
                    case Properties::Part::FOOT:
                        return 1806;
                    }
                case Properties::Occupied::FALSE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1807;
                    case Properties::Part::FOOT:
                        return 1808;
                    }
                }
            case Properties::Facing::EAST:
                switch (occupied) {
                case Properties::Occupied::TRUE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1809;
                    case Properties::Part::FOOT:
                        return 1810;
                    }
                case Properties::Occupied::FALSE:
                    switch (part) {
                    case Properties::Part::HEAD:
                        return 1811;
                    case Properties::Part::FOOT:
                        return 1812;
                    }
                }
            }
            return 0;
        }
    }

}
