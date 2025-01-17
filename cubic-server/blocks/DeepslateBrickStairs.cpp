#include "DeepslateBrickStairs.hpp"
#include <stdexcept>

namespace Blocks {
    namespace DeepslateBrickStairs {
        BlockId toProtocol(Properties::Facing facing, Properties::Half half, Properties::Shape shape, Properties::Waterlogged waterlogged) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (half) {
                case Properties::Half::TOP:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22799;
                        case Properties::Waterlogged::FALSE:
                            return 22800;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22801;
                        case Properties::Waterlogged::FALSE:
                            return 22802;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22803;
                        case Properties::Waterlogged::FALSE:
                            return 22804;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22805;
                        case Properties::Waterlogged::FALSE:
                            return 22806;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22807;
                        case Properties::Waterlogged::FALSE:
                            return 22808;
                        }
                    }
                case Properties::Half::BOTTOM:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22809;
                        case Properties::Waterlogged::FALSE:
                            return 22810;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22811;
                        case Properties::Waterlogged::FALSE:
                            return 22812;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22813;
                        case Properties::Waterlogged::FALSE:
                            return 22814;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22815;
                        case Properties::Waterlogged::FALSE:
                            return 22816;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22817;
                        case Properties::Waterlogged::FALSE:
                            return 22818;
                        }
                    }
                }
            case Properties::Facing::SOUTH:
                switch (half) {
                case Properties::Half::TOP:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22819;
                        case Properties::Waterlogged::FALSE:
                            return 22820;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22821;
                        case Properties::Waterlogged::FALSE:
                            return 22822;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22823;
                        case Properties::Waterlogged::FALSE:
                            return 22824;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22825;
                        case Properties::Waterlogged::FALSE:
                            return 22826;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22827;
                        case Properties::Waterlogged::FALSE:
                            return 22828;
                        }
                    }
                case Properties::Half::BOTTOM:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22829;
                        case Properties::Waterlogged::FALSE:
                            return 22830;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22831;
                        case Properties::Waterlogged::FALSE:
                            return 22832;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22833;
                        case Properties::Waterlogged::FALSE:
                            return 22834;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22835;
                        case Properties::Waterlogged::FALSE:
                            return 22836;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22837;
                        case Properties::Waterlogged::FALSE:
                            return 22838;
                        }
                    }
                }
            case Properties::Facing::WEST:
                switch (half) {
                case Properties::Half::TOP:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22839;
                        case Properties::Waterlogged::FALSE:
                            return 22840;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22841;
                        case Properties::Waterlogged::FALSE:
                            return 22842;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22843;
                        case Properties::Waterlogged::FALSE:
                            return 22844;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22845;
                        case Properties::Waterlogged::FALSE:
                            return 22846;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22847;
                        case Properties::Waterlogged::FALSE:
                            return 22848;
                        }
                    }
                case Properties::Half::BOTTOM:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22849;
                        case Properties::Waterlogged::FALSE:
                            return 22850;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22851;
                        case Properties::Waterlogged::FALSE:
                            return 22852;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22853;
                        case Properties::Waterlogged::FALSE:
                            return 22854;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22855;
                        case Properties::Waterlogged::FALSE:
                            return 22856;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22857;
                        case Properties::Waterlogged::FALSE:
                            return 22858;
                        }
                    }
                }
            case Properties::Facing::EAST:
                switch (half) {
                case Properties::Half::TOP:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22859;
                        case Properties::Waterlogged::FALSE:
                            return 22860;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22861;
                        case Properties::Waterlogged::FALSE:
                            return 22862;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22863;
                        case Properties::Waterlogged::FALSE:
                            return 22864;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22865;
                        case Properties::Waterlogged::FALSE:
                            return 22866;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22867;
                        case Properties::Waterlogged::FALSE:
                            return 22868;
                        }
                    }
                case Properties::Half::BOTTOM:
                    switch (shape) {
                    case Properties::Shape::STRAIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22869;
                        case Properties::Waterlogged::FALSE:
                            return 22870;
                        }
                    case Properties::Shape::INNER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22871;
                        case Properties::Waterlogged::FALSE:
                            return 22872;
                        }
                    case Properties::Shape::INNER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22873;
                        case Properties::Waterlogged::FALSE:
                            return 22874;
                        }
                    case Properties::Shape::OUTER_LEFT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22875;
                        case Properties::Waterlogged::FALSE:
                            return 22876;
                        }
                    case Properties::Shape::OUTER_RIGHT:
                        switch (waterlogged) {
                        case Properties::Waterlogged::TRUE:
                            return 22877;
                        case Properties::Waterlogged::FALSE:
                            return 22878;
                        }
                    }
                }
            }
            return 0;
        }
    }

}
