#include <string>
#include <cstdint>
#include <vector>
#include <unordered_map>
#include <functional>

namespace Blocks {
    typedef int32_t BlockId;

    namespace PurpurPillar {
        namespace Properties {
            enum class Axis {
                X,
                Y,
                Z
            };
        }
        BlockId toProtocol(Properties::Axis axis);
    }

}
