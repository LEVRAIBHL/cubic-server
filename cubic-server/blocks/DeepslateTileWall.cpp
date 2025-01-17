#include "DeepslateTileWall.hpp"
#include <stdexcept>

namespace Blocks {
    namespace DeepslateTileWall {
        BlockId toProtocol(Properties::East east, Properties::North north, Properties::South south, Properties::Up up, Properties::Waterlogged waterlogged, Properties::West west) {
            switch (east) {
            case Properties::East::NONE:
                switch (north) {
                case Properties::North::NONE:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22474;
                                case Properties::West::LOW:
                                    return 22475;
                                case Properties::West::TALL:
                                    return 22476;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22477;
                                case Properties::West::LOW:
                                    return 22478;
                                case Properties::West::TALL:
                                    return 22479;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22480;
                                case Properties::West::LOW:
                                    return 22481;
                                case Properties::West::TALL:
                                    return 22482;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22483;
                                case Properties::West::LOW:
                                    return 22484;
                                case Properties::West::TALL:
                                    return 22485;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22486;
                                case Properties::West::LOW:
                                    return 22487;
                                case Properties::West::TALL:
                                    return 22488;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22489;
                                case Properties::West::LOW:
                                    return 22490;
                                case Properties::West::TALL:
                                    return 22491;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22492;
                                case Properties::West::LOW:
                                    return 22493;
                                case Properties::West::TALL:
                                    return 22494;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22495;
                                case Properties::West::LOW:
                                    return 22496;
                                case Properties::West::TALL:
                                    return 22497;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22498;
                                case Properties::West::LOW:
                                    return 22499;
                                case Properties::West::TALL:
                                    return 22500;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22501;
                                case Properties::West::LOW:
                                    return 22502;
                                case Properties::West::TALL:
                                    return 22503;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22504;
                                case Properties::West::LOW:
                                    return 22505;
                                case Properties::West::TALL:
                                    return 22506;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22507;
                                case Properties::West::LOW:
                                    return 22508;
                                case Properties::West::TALL:
                                    return 22509;
                                }
                            }
                        }
                    }
                case Properties::North::LOW:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22510;
                                case Properties::West::LOW:
                                    return 22511;
                                case Properties::West::TALL:
                                    return 22512;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22513;
                                case Properties::West::LOW:
                                    return 22514;
                                case Properties::West::TALL:
                                    return 22515;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22516;
                                case Properties::West::LOW:
                                    return 22517;
                                case Properties::West::TALL:
                                    return 22518;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22519;
                                case Properties::West::LOW:
                                    return 22520;
                                case Properties::West::TALL:
                                    return 22521;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22522;
                                case Properties::West::LOW:
                                    return 22523;
                                case Properties::West::TALL:
                                    return 22524;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22525;
                                case Properties::West::LOW:
                                    return 22526;
                                case Properties::West::TALL:
                                    return 22527;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22528;
                                case Properties::West::LOW:
                                    return 22529;
                                case Properties::West::TALL:
                                    return 22530;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22531;
                                case Properties::West::LOW:
                                    return 22532;
                                case Properties::West::TALL:
                                    return 22533;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22534;
                                case Properties::West::LOW:
                                    return 22535;
                                case Properties::West::TALL:
                                    return 22536;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22537;
                                case Properties::West::LOW:
                                    return 22538;
                                case Properties::West::TALL:
                                    return 22539;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22540;
                                case Properties::West::LOW:
                                    return 22541;
                                case Properties::West::TALL:
                                    return 22542;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22543;
                                case Properties::West::LOW:
                                    return 22544;
                                case Properties::West::TALL:
                                    return 22545;
                                }
                            }
                        }
                    }
                case Properties::North::TALL:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22546;
                                case Properties::West::LOW:
                                    return 22547;
                                case Properties::West::TALL:
                                    return 22548;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22549;
                                case Properties::West::LOW:
                                    return 22550;
                                case Properties::West::TALL:
                                    return 22551;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22552;
                                case Properties::West::LOW:
                                    return 22553;
                                case Properties::West::TALL:
                                    return 22554;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22555;
                                case Properties::West::LOW:
                                    return 22556;
                                case Properties::West::TALL:
                                    return 22557;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22558;
                                case Properties::West::LOW:
                                    return 22559;
                                case Properties::West::TALL:
                                    return 22560;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22561;
                                case Properties::West::LOW:
                                    return 22562;
                                case Properties::West::TALL:
                                    return 22563;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22564;
                                case Properties::West::LOW:
                                    return 22565;
                                case Properties::West::TALL:
                                    return 22566;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22567;
                                case Properties::West::LOW:
                                    return 22568;
                                case Properties::West::TALL:
                                    return 22569;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22570;
                                case Properties::West::LOW:
                                    return 22571;
                                case Properties::West::TALL:
                                    return 22572;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22573;
                                case Properties::West::LOW:
                                    return 22574;
                                case Properties::West::TALL:
                                    return 22575;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22576;
                                case Properties::West::LOW:
                                    return 22577;
                                case Properties::West::TALL:
                                    return 22578;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22579;
                                case Properties::West::LOW:
                                    return 22580;
                                case Properties::West::TALL:
                                    return 22581;
                                }
                            }
                        }
                    }
                }
            case Properties::East::LOW:
                switch (north) {
                case Properties::North::NONE:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22582;
                                case Properties::West::LOW:
                                    return 22583;
                                case Properties::West::TALL:
                                    return 22584;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22585;
                                case Properties::West::LOW:
                                    return 22586;
                                case Properties::West::TALL:
                                    return 22587;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22588;
                                case Properties::West::LOW:
                                    return 22589;
                                case Properties::West::TALL:
                                    return 22590;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22591;
                                case Properties::West::LOW:
                                    return 22592;
                                case Properties::West::TALL:
                                    return 22593;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22594;
                                case Properties::West::LOW:
                                    return 22595;
                                case Properties::West::TALL:
                                    return 22596;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22597;
                                case Properties::West::LOW:
                                    return 22598;
                                case Properties::West::TALL:
                                    return 22599;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22600;
                                case Properties::West::LOW:
                                    return 22601;
                                case Properties::West::TALL:
                                    return 22602;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22603;
                                case Properties::West::LOW:
                                    return 22604;
                                case Properties::West::TALL:
                                    return 22605;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22606;
                                case Properties::West::LOW:
                                    return 22607;
                                case Properties::West::TALL:
                                    return 22608;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22609;
                                case Properties::West::LOW:
                                    return 22610;
                                case Properties::West::TALL:
                                    return 22611;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22612;
                                case Properties::West::LOW:
                                    return 22613;
                                case Properties::West::TALL:
                                    return 22614;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22615;
                                case Properties::West::LOW:
                                    return 22616;
                                case Properties::West::TALL:
                                    return 22617;
                                }
                            }
                        }
                    }
                case Properties::North::LOW:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22618;
                                case Properties::West::LOW:
                                    return 22619;
                                case Properties::West::TALL:
                                    return 22620;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22621;
                                case Properties::West::LOW:
                                    return 22622;
                                case Properties::West::TALL:
                                    return 22623;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22624;
                                case Properties::West::LOW:
                                    return 22625;
                                case Properties::West::TALL:
                                    return 22626;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22627;
                                case Properties::West::LOW:
                                    return 22628;
                                case Properties::West::TALL:
                                    return 22629;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22630;
                                case Properties::West::LOW:
                                    return 22631;
                                case Properties::West::TALL:
                                    return 22632;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22633;
                                case Properties::West::LOW:
                                    return 22634;
                                case Properties::West::TALL:
                                    return 22635;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22636;
                                case Properties::West::LOW:
                                    return 22637;
                                case Properties::West::TALL:
                                    return 22638;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22639;
                                case Properties::West::LOW:
                                    return 22640;
                                case Properties::West::TALL:
                                    return 22641;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22642;
                                case Properties::West::LOW:
                                    return 22643;
                                case Properties::West::TALL:
                                    return 22644;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22645;
                                case Properties::West::LOW:
                                    return 22646;
                                case Properties::West::TALL:
                                    return 22647;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22648;
                                case Properties::West::LOW:
                                    return 22649;
                                case Properties::West::TALL:
                                    return 22650;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22651;
                                case Properties::West::LOW:
                                    return 22652;
                                case Properties::West::TALL:
                                    return 22653;
                                }
                            }
                        }
                    }
                case Properties::North::TALL:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22654;
                                case Properties::West::LOW:
                                    return 22655;
                                case Properties::West::TALL:
                                    return 22656;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22657;
                                case Properties::West::LOW:
                                    return 22658;
                                case Properties::West::TALL:
                                    return 22659;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22660;
                                case Properties::West::LOW:
                                    return 22661;
                                case Properties::West::TALL:
                                    return 22662;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22663;
                                case Properties::West::LOW:
                                    return 22664;
                                case Properties::West::TALL:
                                    return 22665;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22666;
                                case Properties::West::LOW:
                                    return 22667;
                                case Properties::West::TALL:
                                    return 22668;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22669;
                                case Properties::West::LOW:
                                    return 22670;
                                case Properties::West::TALL:
                                    return 22671;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22672;
                                case Properties::West::LOW:
                                    return 22673;
                                case Properties::West::TALL:
                                    return 22674;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22675;
                                case Properties::West::LOW:
                                    return 22676;
                                case Properties::West::TALL:
                                    return 22677;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22678;
                                case Properties::West::LOW:
                                    return 22679;
                                case Properties::West::TALL:
                                    return 22680;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22681;
                                case Properties::West::LOW:
                                    return 22682;
                                case Properties::West::TALL:
                                    return 22683;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22684;
                                case Properties::West::LOW:
                                    return 22685;
                                case Properties::West::TALL:
                                    return 22686;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22687;
                                case Properties::West::LOW:
                                    return 22688;
                                case Properties::West::TALL:
                                    return 22689;
                                }
                            }
                        }
                    }
                }
            case Properties::East::TALL:
                switch (north) {
                case Properties::North::NONE:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22690;
                                case Properties::West::LOW:
                                    return 22691;
                                case Properties::West::TALL:
                                    return 22692;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22693;
                                case Properties::West::LOW:
                                    return 22694;
                                case Properties::West::TALL:
                                    return 22695;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22696;
                                case Properties::West::LOW:
                                    return 22697;
                                case Properties::West::TALL:
                                    return 22698;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22699;
                                case Properties::West::LOW:
                                    return 22700;
                                case Properties::West::TALL:
                                    return 22701;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22702;
                                case Properties::West::LOW:
                                    return 22703;
                                case Properties::West::TALL:
                                    return 22704;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22705;
                                case Properties::West::LOW:
                                    return 22706;
                                case Properties::West::TALL:
                                    return 22707;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22708;
                                case Properties::West::LOW:
                                    return 22709;
                                case Properties::West::TALL:
                                    return 22710;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22711;
                                case Properties::West::LOW:
                                    return 22712;
                                case Properties::West::TALL:
                                    return 22713;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22714;
                                case Properties::West::LOW:
                                    return 22715;
                                case Properties::West::TALL:
                                    return 22716;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22717;
                                case Properties::West::LOW:
                                    return 22718;
                                case Properties::West::TALL:
                                    return 22719;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22720;
                                case Properties::West::LOW:
                                    return 22721;
                                case Properties::West::TALL:
                                    return 22722;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22723;
                                case Properties::West::LOW:
                                    return 22724;
                                case Properties::West::TALL:
                                    return 22725;
                                }
                            }
                        }
                    }
                case Properties::North::LOW:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22726;
                                case Properties::West::LOW:
                                    return 22727;
                                case Properties::West::TALL:
                                    return 22728;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22729;
                                case Properties::West::LOW:
                                    return 22730;
                                case Properties::West::TALL:
                                    return 22731;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22732;
                                case Properties::West::LOW:
                                    return 22733;
                                case Properties::West::TALL:
                                    return 22734;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22735;
                                case Properties::West::LOW:
                                    return 22736;
                                case Properties::West::TALL:
                                    return 22737;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22738;
                                case Properties::West::LOW:
                                    return 22739;
                                case Properties::West::TALL:
                                    return 22740;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22741;
                                case Properties::West::LOW:
                                    return 22742;
                                case Properties::West::TALL:
                                    return 22743;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22744;
                                case Properties::West::LOW:
                                    return 22745;
                                case Properties::West::TALL:
                                    return 22746;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22747;
                                case Properties::West::LOW:
                                    return 22748;
                                case Properties::West::TALL:
                                    return 22749;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22750;
                                case Properties::West::LOW:
                                    return 22751;
                                case Properties::West::TALL:
                                    return 22752;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22753;
                                case Properties::West::LOW:
                                    return 22754;
                                case Properties::West::TALL:
                                    return 22755;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22756;
                                case Properties::West::LOW:
                                    return 22757;
                                case Properties::West::TALL:
                                    return 22758;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22759;
                                case Properties::West::LOW:
                                    return 22760;
                                case Properties::West::TALL:
                                    return 22761;
                                }
                            }
                        }
                    }
                case Properties::North::TALL:
                    switch (south) {
                    case Properties::South::NONE:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22762;
                                case Properties::West::LOW:
                                    return 22763;
                                case Properties::West::TALL:
                                    return 22764;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22765;
                                case Properties::West::LOW:
                                    return 22766;
                                case Properties::West::TALL:
                                    return 22767;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22768;
                                case Properties::West::LOW:
                                    return 22769;
                                case Properties::West::TALL:
                                    return 22770;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22771;
                                case Properties::West::LOW:
                                    return 22772;
                                case Properties::West::TALL:
                                    return 22773;
                                }
                            }
                        }
                    case Properties::South::LOW:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22774;
                                case Properties::West::LOW:
                                    return 22775;
                                case Properties::West::TALL:
                                    return 22776;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22777;
                                case Properties::West::LOW:
                                    return 22778;
                                case Properties::West::TALL:
                                    return 22779;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22780;
                                case Properties::West::LOW:
                                    return 22781;
                                case Properties::West::TALL:
                                    return 22782;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22783;
                                case Properties::West::LOW:
                                    return 22784;
                                case Properties::West::TALL:
                                    return 22785;
                                }
                            }
                        }
                    case Properties::South::TALL:
                        switch (up) {
                        case Properties::Up::TRUE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22786;
                                case Properties::West::LOW:
                                    return 22787;
                                case Properties::West::TALL:
                                    return 22788;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22789;
                                case Properties::West::LOW:
                                    return 22790;
                                case Properties::West::TALL:
                                    return 22791;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22792;
                                case Properties::West::LOW:
                                    return 22793;
                                case Properties::West::TALL:
                                    return 22794;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 22795;
                                case Properties::West::LOW:
                                    return 22796;
                                case Properties::West::TALL:
                                    return 22797;
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
