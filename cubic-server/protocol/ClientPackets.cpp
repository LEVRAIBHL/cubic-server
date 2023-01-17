#include "PacketUtils.hpp"
#include "ClientPackets.hpp"
#include "protocol/serialization/addPrimaryType.hpp"
#include <cstdint>
#include <memory>
#include <vector>

using namespace protocol;

std::shared_ptr<std::vector<uint8_t>> protocol::createPingResponse(const PingResponse &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.payload, addLong);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    // TODO: Use an enum instead of hard-coding the packet ID
    // TODO: Undestand why I have to use a cast here
    finalize(*packet, payload, (int32_t)ClientPacketID::Ping);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createStatusResponse(const StatusResponse &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.payload, addString);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t)ClientPacketID::Status);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createLoginSuccess(const LoginSuccess &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.uuid, addUUID,
        in.username, addString,
        in.numberOfProperties, addVarInt
    );

    // in.name, addString,
    // in.value, addString,
    // in.isSigned, addBoolean
    if (in.isSigned)
        serialize(payload, in.signature.value(), addString);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::LoginSuccess);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createLoginPlay(const LoginPlay &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.entityID, addInt,
        in.isHardcore, addBoolean,
        in.gamemode, addByte,
        in.previousGamemode, addByte,
        in.dimensionNames, addArray<std::string, addString>,
        in.registryCodec, addNBT<nbt::Compound>,
        in.dimensionType, addString,
        in.dimensionName, addString,
        in.hashedSeed, addLong,
        in.maxPlayers, addVarInt,
        in.viewDistance, addVarInt,
        in.simulationDistance, addVarInt,
        in.reducedDebugInfo, addBoolean,
        in.enableRespawnScreen, addBoolean,
        in.isDebug, addBoolean,
        in.isFlat, addBoolean,
        in.hasDeathLocation, addBoolean);
    if (in.hasDeathLocation)
        serialize(payload,
            in.deathDimensionName.value(), addString,
            in.deathLocation.value(), addPosition);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::LoginPlay);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createUpdateEntityPosition(const UpdateEntityPosition &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.entityId, addVarInt,
        in.deltaX, addShort,
        in.deltaY, addShort,
        in.deltaZ, addShort,
        in.onGround, addBoolean);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::UpdateEntityPosition);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createUpdateEntityPositionRotation(const UpdateEntityPositionRotation &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.entityId, addVarInt,
        in.deltaX, addShort,
        in.deltaY, addShort,
        in.deltaZ, addShort,
        in.yaw, addByte,
        in.pitch, addByte,
        in.onGround, addBoolean);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::UpdateEntityPositionRotation);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createUpdateEntityRotation(const UpdateEntityRotation &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.entityId, addVarInt,
        in.yaw, addByte,
        in.pitch, addByte,
        in.onGround, addBoolean);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::UpdateEntityRotation);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createPlayerChatMessage(const PlayerChatMessage &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.signedContent, addString,
        in.hasUnsignedContent, addBoolean,
        in.unsignedContent, addString,
        in.type, addVarInt,
        in.senderUUID, addUUID,
        in.senderName, addString,
        in.hasTeamName, addBoolean,
        in.teamName, addString,
        in.timestamp, addLong,
        in.salt, addLong,
        in.signature, addArray<uint8_t, addByte>);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::PlayerChatMessage);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createWorldEvent(const WorldEvent &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.event, addInt,
        in.position, addPosition,
        in.data, addInt,
        in.disableRelativeVolume, addBoolean
    );
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t) ClientPacketID::WorldEvent);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createSynchronizePlayerPosition(const SynchronizePlayerPosition &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.x, addDouble,
        in.y, addDouble,
        in.z, addDouble,
        in.yaw, addFloat,
        in.pitch, addFloat,
        in.flags, addByte,
        in.teleportId, addVarInt,
        in.dismountVehicle, addBoolean
    );
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t) ClientPacketID::SynchronizePlayerPosition);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createCustomSoundEffect(const CustomSoundEffect &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.name, addIdentifier,
        in.category, addVarInt,
        in.x, addInt,
        in.y, addInt,
        in.z, addInt,
        in.volume, addFloat,
        in.pitch, addFloat,
        in.seed, addLong
    );
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::CustomSoundEffect);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createEntitySoundEffect(const EntitySoundEffect &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.soundId, addVarInt,
        in.category, addVarInt,
        in.entityId, addVarInt,
        in.volume, addFloat,
        in.pitch, addFloat,
        in.seed, addLong
    );
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::EntitySoundEffect);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createSoundEffect(const SoundEffect &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.soundId, addVarInt,
        in.category, addVarInt,
        in.x, addInt,
        in.y, addInt,
        in.z, addInt,
        in.volume, addFloat,
        in.pitch, addFloat,
        in.seed, addLong
    );
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::SoundEffect);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createStopSound(const StopSound &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.flags, addByte);
    if (in.flags == 3 || in.flags == 1)
        serialize(payload, in.source, addVarInt);
    if (in.flags == 2 || in.flags == 3)
        serialize(payload, in.sound, addIdentifier);

    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::StopSound);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createLoginDisconnect(const Disconnect &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.reason, addString);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::DisconnectLogin);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createPlayDisconnect(const Disconnect &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.reason, addString);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::DisconnectPlay);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createSpawnPlayer(const SpawnPlayer &in)
{
    std::vector<uint8_t> payload;

    serialize(payload,
              in.entity_id, addVarInt,
              in.player_uuid, addUUID,
              (long) in.x, addLong,
              (long) in.y, addLong,
              (long) in.z, addLong,
              in.yaw, addByte,
              in.pitch, addByte
    );

    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::SpawnPlayer);

    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createUpdateTime(const UpdateTime &in)
{
    std::vector<uint8_t> payload;

    serialize(payload,
              in.world_age, addLong,
              in.time_of_day, addLong
    );

    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t)ClientPacketID::UpdateTime);

    return packet;
}
std::shared_ptr<std::vector<uint8_t>> protocol::createKeepAlive(long id)
{
    std::vector<uint8_t> payload;
    serialize(payload, id, addLong);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::KeepAlive);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createPluginMessageResponse(const PluginMessageResponse &in)
{
    std::vector<uint8_t> payload;
    serialize(payload, in.channel, addIdentifier);
    // TODO: Just look at it
    for (auto i : in.data)
        payload.push_back(i);

    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::PluginMessage);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createSystemChatMessage(const SystemChatMessage &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.JSONData, addChat,
        in.overlay, addBoolean
    );
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::SystemChatMessage);
    return packet;
}


std::shared_ptr<std::vector<uint8_t>> protocol::createPlayerInfo(const PlayerInfo &in)
{
    std::vector<uint8_t> payload;
    serialize(payload,
        in.action, addVarInt,
        (int32_t) in.players.size(), addVarInt
    );

    for (auto &player : in.players) {
        serialize(payload, player.uuid, addUUID);

        switch (in.action) {
            case 0:
                serialize(payload,
                    player.addPlayer.name, addString,
                    0, addVarInt,
                    player.addPlayer.gamemode, addVarInt,
                    player.addPlayer.ping, addVarInt,
                    false, addBoolean, // Has display name
                    false, addBoolean // Has signature data
                );
                break;

            case 1:
                serialize(payload, player.updateGamemode.gamemode, addVarInt);
                break;

            case 2:
                serialize(payload, player.updateLatency.latency, addVarInt);
                break;

            case 3:
                serialize(payload, player.updateDisplayName.hasDisplayName, addBoolean);
                if (player.updateDisplayName.hasDisplayName)
                    serialize(payload, player.updateDisplayName.displayName, addChat);
                break;

            default:
                break;
        }
    }

    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::PlayerInfo);
    // std::cout << "Players action lol: " << in.action << std::endl;
    // std::cout << "Players size lol: " << in.players.size() << std::endl;
    // std::cout << "PlayerInfo packet size: " << packet->size() << std::endl;
    // std::cout << "PlayerInfo packet id: " << (int32_t) ClientPacketID::PlayerInfo << std::endl;
    // std::cout << "PlayerInfo packet: ";
    // for (auto value : *packet)
    //     std::cout << std::hex << (int)value;
    // std::cout << std::endl;
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createEntityAnimationClient(EntityAnimationID animId, int32_t entityID)
{
    std::vector<uint8_t> payload;
    serialize(payload, entityID, addVarInt,
        (uint8_t)animId, addByte);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet, payload, (int32_t) ClientPacketID::EntityAnimationClient);
    return packet;
}

std::shared_ptr<std::vector<uint8_t>> protocol::createChunkDataAndLightUpdate(const ChunkDataAndLightUpdate &in)
{
    std::vector<uint8_t> payload;

    serialize(payload,
        in.chunkX, addInt,
        in.chunkZ, addInt,
        in.heightmaps, addNBT<nbt::Compound>,
        in.data, addChunkColumn,
        in.blockEntities, addBlockEntities,
        in.trustEdges, addBoolean,
        in.skyLightMask, addArray<int64_t, addLong>,
        in.blockLightMask, addArray<int64_t, addLong>,
        in.emptySkyLightMask, addArray<int64_t, addLong>,
        in.emptyBlockLightMask, addArray<int64_t, addLong>,
        in.skyLight, addLightArray,
        in.blockLight, addLightArray);
    auto packet = std::make_shared<std::vector<uint8_t>>();
    finalize(*packet.get(), payload, (int32_t) ClientPacketID::ChunkDataAndLightUpdate);
    return packet;
}
