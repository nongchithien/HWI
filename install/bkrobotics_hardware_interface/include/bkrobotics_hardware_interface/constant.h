#ifndef BKR_CONSTANTS_H
#define BKR_CONSTANTS_H

namespace bkr
{
    constexpr unsigned char START_BYTE = 0xAA;

    enum PacketType
    {
        PACKET_TYPE_MOTOR_COMMAND = 0x01,
        PACKET_TYPE_MOTOR_STATE   = 0x02,
        PACKET_TYPE_STATE_COMMAND = 0x04,
    };

    enum CommandType
    {
        COMMAND_TYPE_VELOCITY = 0x01
    };
    
    enum MotorID
    {
        LEFT_WHEEL  = 0x01,
        RIGHT_WHEEL = 0x02,
    };
    
    enum DLC
    {
        DLC_COMMAND       = 3,
        DLC_MOTOR_STATE   = 3,
        DLC_STATE_COMMAND = 3,
    };
}

#endif
