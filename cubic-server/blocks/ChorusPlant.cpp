#include "ChorusPlant.hpp"
#include <stdexcept>

namespace Blocks {
    namespace ChorusPlant {
        BlockId toProtocol(Properties::Down down, Properties::East east, Properties::North north, Properties::South south, Properties::Up up, Properties::West west) {
            switch (down) {
            case Properties::Down::TRUE:
                switch (east) {
                case Properties::East::TRUE:
                    switch (north) {
                    case Properties::North::TRUE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11729;
                                case Properties::West::FALSE:
                                    return 11730;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11731;
                                case Properties::West::FALSE:
                                    return 11732;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11733;
                                case Properties::West::FALSE:
                                    return 11734;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11735;
                                case Properties::West::FALSE:
                                    return 11736;
                                }
                            }
                        }
                    case Properties::North::FALSE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11737;
                                case Properties::West::FALSE:
                                    return 11738;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11739;
                                case Properties::West::FALSE:
                                    return 11740;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11741;
                                case Properties::West::FALSE:
                                    return 11742;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11743;
                                case Properties::West::FALSE:
                                    return 11744;
                                }
                            }
                        }
                    }
                case Properties::East::FALSE:
                    switch (north) {
                    case Properties::North::TRUE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11745;
                                case Properties::West::FALSE:
                                    return 11746;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11747;
                                case Properties::West::FALSE:
                                    return 11748;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11749;
                                case Properties::West::FALSE:
                                    return 11750;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11751;
                                case Properties::West::FALSE:
                                    return 11752;
                                }
                            }
                        }
                    case Properties::North::FALSE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11753;
                                case Properties::West::FALSE:
                                    return 11754;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11755;
                                case Properties::West::FALSE:
                                    return 11756;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11757;
                                case Properties::West::FALSE:
                                    return 11758;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11759;
                                case Properties::West::FALSE:
                                    return 11760;
                                }
                            }
                        }
                    }
                }
            case Properties::Down::FALSE:
                switch (east) {
                case Properties::East::TRUE:
                    switch (north) {
                    case Properties::North::TRUE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11761;
                                case Properties::West::FALSE:
                                    return 11762;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11763;
                                case Properties::West::FALSE:
                                    return 11764;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11765;
                                case Properties::West::FALSE:
                                    return 11766;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11767;
                                case Properties::West::FALSE:
                                    return 11768;
                                }
                            }
                        }
                    case Properties::North::FALSE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11769;
                                case Properties::West::FALSE:
                                    return 11770;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11771;
                                case Properties::West::FALSE:
                                    return 11772;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11773;
                                case Properties::West::FALSE:
                                    return 11774;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11775;
                                case Properties::West::FALSE:
                                    return 11776;
                                }
                            }
                        }
                    }
                case Properties::East::FALSE:
                    switch (north) {
                    case Properties::North::TRUE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11777;
                                case Properties::West::FALSE:
                                    return 11778;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11779;
                                case Properties::West::FALSE:
                                    return 11780;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11781;
                                case Properties::West::FALSE:
                                    return 11782;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11783;
                                case Properties::West::FALSE:
                                    return 11784;
                                }
                            }
                        }
                    case Properties::North::FALSE:
                        switch (south) {
                        case Properties::South::TRUE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11785;
                                case Properties::West::FALSE:
                                    return 11786;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11787;
                                case Properties::West::FALSE:
                                    return 11788;
                                }
                            }
                        case Properties::South::FALSE:
                            switch (up) {
                            case Properties::Up::TRUE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11789;
                                case Properties::West::FALSE:
                                    return 11790;
                                }
                            case Properties::Up::FALSE:
                                switch (west) {
                                case Properties::West::TRUE:
                                    return 11791;
                                case Properties::West::FALSE:
                                    return 11792;
                                }
                            }
                        }
                    }
                }
            }
            return 0;
        }
    }

}
