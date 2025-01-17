#include <string>
#include <cstdint>
#include <vector>
#include <unordered_map>
#include <functional>

namespace Blocks {
    typedef int32_t BlockId;

    namespace Snow {
        namespace Properties {
            enum class Layers {
                ONE,
                TWO,
                THREE,
                FOUR,
                FIVE,
                SIX,
                SEVEN,
                EIGHT
            };
        }
        BlockId toProtocol(Properties::Layers layers);
    }

}
