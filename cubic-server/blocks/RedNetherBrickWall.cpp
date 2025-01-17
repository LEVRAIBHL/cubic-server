#include "RedNetherBrickWall.hpp"
#include <stdexcept>

namespace Blocks {
    namespace RedNetherBrickWall {
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
                                    return 16448;
                                case Properties::West::LOW:
                                    return 16449;
                                case Properties::West::TALL:
                                    return 16450;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16451;
                                case Properties::West::LOW:
                                    return 16452;
                                case Properties::West::TALL:
                                    return 16453;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16454;
                                case Properties::West::LOW:
                                    return 16455;
                                case Properties::West::TALL:
                                    return 16456;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16457;
                                case Properties::West::LOW:
                                    return 16458;
                                case Properties::West::TALL:
                                    return 16459;
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
                                    return 16460;
                                case Properties::West::LOW:
                                    return 16461;
                                case Properties::West::TALL:
                                    return 16462;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16463;
                                case Properties::West::LOW:
                                    return 16464;
                                case Properties::West::TALL:
                                    return 16465;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16466;
                                case Properties::West::LOW:
                                    return 16467;
                                case Properties::West::TALL:
                                    return 16468;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16469;
                                case Properties::West::LOW:
                                    return 16470;
                                case Properties::West::TALL:
                                    return 16471;
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
                                    return 16472;
                                case Properties::West::LOW:
                                    return 16473;
                                case Properties::West::TALL:
                                    return 16474;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16475;
                                case Properties::West::LOW:
                                    return 16476;
                                case Properties::West::TALL:
                                    return 16477;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16478;
                                case Properties::West::LOW:
                                    return 16479;
                                case Properties::West::TALL:
                                    return 16480;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16481;
                                case Properties::West::LOW:
                                    return 16482;
                                case Properties::West::TALL:
                                    return 16483;
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
                                    return 16484;
                                case Properties::West::LOW:
                                    return 16485;
                                case Properties::West::TALL:
                                    return 16486;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16487;
                                case Properties::West::LOW:
                                    return 16488;
                                case Properties::West::TALL:
                                    return 16489;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16490;
                                case Properties::West::LOW:
                                    return 16491;
                                case Properties::West::TALL:
                                    return 16492;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16493;
                                case Properties::West::LOW:
                                    return 16494;
                                case Properties::West::TALL:
                                    return 16495;
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
                                    return 16496;
                                case Properties::West::LOW:
                                    return 16497;
                                case Properties::West::TALL:
                                    return 16498;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16499;
                                case Properties::West::LOW:
                                    return 16500;
                                case Properties::West::TALL:
                                    return 16501;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16502;
                                case Properties::West::LOW:
                                    return 16503;
                                case Properties::West::TALL:
                                    return 16504;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16505;
                                case Properties::West::LOW:
                                    return 16506;
                                case Properties::West::TALL:
                                    return 16507;
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
                                    return 16508;
                                case Properties::West::LOW:
                                    return 16509;
                                case Properties::West::TALL:
                                    return 16510;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16511;
                                case Properties::West::LOW:
                                    return 16512;
                                case Properties::West::TALL:
                                    return 16513;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16514;
                                case Properties::West::LOW:
                                    return 16515;
                                case Properties::West::TALL:
                                    return 16516;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16517;
                                case Properties::West::LOW:
                                    return 16518;
                                case Properties::West::TALL:
                                    return 16519;
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
                                    return 16520;
                                case Properties::West::LOW:
                                    return 16521;
                                case Properties::West::TALL:
                                    return 16522;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16523;
                                case Properties::West::LOW:
                                    return 16524;
                                case Properties::West::TALL:
                                    return 16525;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16526;
                                case Properties::West::LOW:
                                    return 16527;
                                case Properties::West::TALL:
                                    return 16528;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16529;
                                case Properties::West::LOW:
                                    return 16530;
                                case Properties::West::TALL:
                                    return 16531;
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
                                    return 16532;
                                case Properties::West::LOW:
                                    return 16533;
                                case Properties::West::TALL:
                                    return 16534;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16535;
                                case Properties::West::LOW:
                                    return 16536;
                                case Properties::West::TALL:
                                    return 16537;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16538;
                                case Properties::West::LOW:
                                    return 16539;
                                case Properties::West::TALL:
                                    return 16540;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16541;
                                case Properties::West::LOW:
                                    return 16542;
                                case Properties::West::TALL:
                                    return 16543;
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
                                    return 16544;
                                case Properties::West::LOW:
                                    return 16545;
                                case Properties::West::TALL:
                                    return 16546;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16547;
                                case Properties::West::LOW:
                                    return 16548;
                                case Properties::West::TALL:
                                    return 16549;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16550;
                                case Properties::West::LOW:
                                    return 16551;
                                case Properties::West::TALL:
                                    return 16552;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16553;
                                case Properties::West::LOW:
                                    return 16554;
                                case Properties::West::TALL:
                                    return 16555;
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
                                    return 16556;
                                case Properties::West::LOW:
                                    return 16557;
                                case Properties::West::TALL:
                                    return 16558;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16559;
                                case Properties::West::LOW:
                                    return 16560;
                                case Properties::West::TALL:
                                    return 16561;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16562;
                                case Properties::West::LOW:
                                    return 16563;
                                case Properties::West::TALL:
                                    return 16564;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16565;
                                case Properties::West::LOW:
                                    return 16566;
                                case Properties::West::TALL:
                                    return 16567;
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
                                    return 16568;
                                case Properties::West::LOW:
                                    return 16569;
                                case Properties::West::TALL:
                                    return 16570;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16571;
                                case Properties::West::LOW:
                                    return 16572;
                                case Properties::West::TALL:
                                    return 16573;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16574;
                                case Properties::West::LOW:
                                    return 16575;
                                case Properties::West::TALL:
                                    return 16576;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16577;
                                case Properties::West::LOW:
                                    return 16578;
                                case Properties::West::TALL:
                                    return 16579;
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
                                    return 16580;
                                case Properties::West::LOW:
                                    return 16581;
                                case Properties::West::TALL:
                                    return 16582;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16583;
                                case Properties::West::LOW:
                                    return 16584;
                                case Properties::West::TALL:
                                    return 16585;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16586;
                                case Properties::West::LOW:
                                    return 16587;
                                case Properties::West::TALL:
                                    return 16588;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16589;
                                case Properties::West::LOW:
                                    return 16590;
                                case Properties::West::TALL:
                                    return 16591;
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
                                    return 16592;
                                case Properties::West::LOW:
                                    return 16593;
                                case Properties::West::TALL:
                                    return 16594;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16595;
                                case Properties::West::LOW:
                                    return 16596;
                                case Properties::West::TALL:
                                    return 16597;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16598;
                                case Properties::West::LOW:
                                    return 16599;
                                case Properties::West::TALL:
                                    return 16600;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16601;
                                case Properties::West::LOW:
                                    return 16602;
                                case Properties::West::TALL:
                                    return 16603;
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
                                    return 16604;
                                case Properties::West::LOW:
                                    return 16605;
                                case Properties::West::TALL:
                                    return 16606;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16607;
                                case Properties::West::LOW:
                                    return 16608;
                                case Properties::West::TALL:
                                    return 16609;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16610;
                                case Properties::West::LOW:
                                    return 16611;
                                case Properties::West::TALL:
                                    return 16612;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16613;
                                case Properties::West::LOW:
                                    return 16614;
                                case Properties::West::TALL:
                                    return 16615;
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
                                    return 16616;
                                case Properties::West::LOW:
                                    return 16617;
                                case Properties::West::TALL:
                                    return 16618;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16619;
                                case Properties::West::LOW:
                                    return 16620;
                                case Properties::West::TALL:
                                    return 16621;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16622;
                                case Properties::West::LOW:
                                    return 16623;
                                case Properties::West::TALL:
                                    return 16624;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16625;
                                case Properties::West::LOW:
                                    return 16626;
                                case Properties::West::TALL:
                                    return 16627;
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
                                    return 16628;
                                case Properties::West::LOW:
                                    return 16629;
                                case Properties::West::TALL:
                                    return 16630;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16631;
                                case Properties::West::LOW:
                                    return 16632;
                                case Properties::West::TALL:
                                    return 16633;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16634;
                                case Properties::West::LOW:
                                    return 16635;
                                case Properties::West::TALL:
                                    return 16636;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16637;
                                case Properties::West::LOW:
                                    return 16638;
                                case Properties::West::TALL:
                                    return 16639;
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
                                    return 16640;
                                case Properties::West::LOW:
                                    return 16641;
                                case Properties::West::TALL:
                                    return 16642;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16643;
                                case Properties::West::LOW:
                                    return 16644;
                                case Properties::West::TALL:
                                    return 16645;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16646;
                                case Properties::West::LOW:
                                    return 16647;
                                case Properties::West::TALL:
                                    return 16648;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16649;
                                case Properties::West::LOW:
                                    return 16650;
                                case Properties::West::TALL:
                                    return 16651;
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
                                    return 16652;
                                case Properties::West::LOW:
                                    return 16653;
                                case Properties::West::TALL:
                                    return 16654;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16655;
                                case Properties::West::LOW:
                                    return 16656;
                                case Properties::West::TALL:
                                    return 16657;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16658;
                                case Properties::West::LOW:
                                    return 16659;
                                case Properties::West::TALL:
                                    return 16660;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16661;
                                case Properties::West::LOW:
                                    return 16662;
                                case Properties::West::TALL:
                                    return 16663;
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
                                    return 16664;
                                case Properties::West::LOW:
                                    return 16665;
                                case Properties::West::TALL:
                                    return 16666;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16667;
                                case Properties::West::LOW:
                                    return 16668;
                                case Properties::West::TALL:
                                    return 16669;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16670;
                                case Properties::West::LOW:
                                    return 16671;
                                case Properties::West::TALL:
                                    return 16672;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16673;
                                case Properties::West::LOW:
                                    return 16674;
                                case Properties::West::TALL:
                                    return 16675;
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
                                    return 16676;
                                case Properties::West::LOW:
                                    return 16677;
                                case Properties::West::TALL:
                                    return 16678;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16679;
                                case Properties::West::LOW:
                                    return 16680;
                                case Properties::West::TALL:
                                    return 16681;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16682;
                                case Properties::West::LOW:
                                    return 16683;
                                case Properties::West::TALL:
                                    return 16684;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16685;
                                case Properties::West::LOW:
                                    return 16686;
                                case Properties::West::TALL:
                                    return 16687;
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
                                    return 16688;
                                case Properties::West::LOW:
                                    return 16689;
                                case Properties::West::TALL:
                                    return 16690;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16691;
                                case Properties::West::LOW:
                                    return 16692;
                                case Properties::West::TALL:
                                    return 16693;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16694;
                                case Properties::West::LOW:
                                    return 16695;
                                case Properties::West::TALL:
                                    return 16696;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16697;
                                case Properties::West::LOW:
                                    return 16698;
                                case Properties::West::TALL:
                                    return 16699;
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
                                    return 16700;
                                case Properties::West::LOW:
                                    return 16701;
                                case Properties::West::TALL:
                                    return 16702;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16703;
                                case Properties::West::LOW:
                                    return 16704;
                                case Properties::West::TALL:
                                    return 16705;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16706;
                                case Properties::West::LOW:
                                    return 16707;
                                case Properties::West::TALL:
                                    return 16708;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16709;
                                case Properties::West::LOW:
                                    return 16710;
                                case Properties::West::TALL:
                                    return 16711;
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
                                    return 16712;
                                case Properties::West::LOW:
                                    return 16713;
                                case Properties::West::TALL:
                                    return 16714;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16715;
                                case Properties::West::LOW:
                                    return 16716;
                                case Properties::West::TALL:
                                    return 16717;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16718;
                                case Properties::West::LOW:
                                    return 16719;
                                case Properties::West::TALL:
                                    return 16720;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16721;
                                case Properties::West::LOW:
                                    return 16722;
                                case Properties::West::TALL:
                                    return 16723;
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
                                    return 16724;
                                case Properties::West::LOW:
                                    return 16725;
                                case Properties::West::TALL:
                                    return 16726;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16727;
                                case Properties::West::LOW:
                                    return 16728;
                                case Properties::West::TALL:
                                    return 16729;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16730;
                                case Properties::West::LOW:
                                    return 16731;
                                case Properties::West::TALL:
                                    return 16732;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16733;
                                case Properties::West::LOW:
                                    return 16734;
                                case Properties::West::TALL:
                                    return 16735;
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
                                    return 16736;
                                case Properties::West::LOW:
                                    return 16737;
                                case Properties::West::TALL:
                                    return 16738;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16739;
                                case Properties::West::LOW:
                                    return 16740;
                                case Properties::West::TALL:
                                    return 16741;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16742;
                                case Properties::West::LOW:
                                    return 16743;
                                case Properties::West::TALL:
                                    return 16744;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16745;
                                case Properties::West::LOW:
                                    return 16746;
                                case Properties::West::TALL:
                                    return 16747;
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
                                    return 16748;
                                case Properties::West::LOW:
                                    return 16749;
                                case Properties::West::TALL:
                                    return 16750;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16751;
                                case Properties::West::LOW:
                                    return 16752;
                                case Properties::West::TALL:
                                    return 16753;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16754;
                                case Properties::West::LOW:
                                    return 16755;
                                case Properties::West::TALL:
                                    return 16756;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16757;
                                case Properties::West::LOW:
                                    return 16758;
                                case Properties::West::TALL:
                                    return 16759;
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
                                    return 16760;
                                case Properties::West::LOW:
                                    return 16761;
                                case Properties::West::TALL:
                                    return 16762;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16763;
                                case Properties::West::LOW:
                                    return 16764;
                                case Properties::West::TALL:
                                    return 16765;
                                }
                            }
                        case Properties::Up::FALSE:
                            switch (waterlogged) {
                            case Properties::Waterlogged::TRUE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16766;
                                case Properties::West::LOW:
                                    return 16767;
                                case Properties::West::TALL:
                                    return 16768;
                                }
                            case Properties::Waterlogged::FALSE:
                                switch (west) {
                                case Properties::West::NONE:
                                    return 16769;
                                case Properties::West::LOW:
                                    return 16770;
                                case Properties::West::TALL:
                                    return 16771;
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
