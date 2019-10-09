/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Projects_2\RevdA6vg\Src\libuavcan\dsdl\uavcan\equipment\actuator\Command.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_ACTUATOR_COMMAND_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_ACTUATOR_COMMAND_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Nested type.
# Single actuator command.
#

uint8 actuator_id

#
# Whether the units are linear or angular depends on the actuator type.
#
uint8 COMMAND_TYPE_UNITLESS     = 0     # [-1, 1]
uint8 COMMAND_TYPE_POSITION     = 1     # meter or radian
uint8 COMMAND_TYPE_FORCE        = 2     # Newton or Newton metre
uint8 COMMAND_TYPE_SPEED        = 3     # meter per second or radian per second
uint8 command_type

#
# Value of the above type
#
float16 command_value
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.actuator.Command
saturated uint8 actuator_id
saturated uint8 command_type
saturated float16 command_value
******************************************************************************/

#undef actuator_id
#undef command_type
#undef command_value
#undef COMMAND_TYPE_UNITLESS
#undef COMMAND_TYPE_POSITION
#undef COMMAND_TYPE_FORCE
#undef COMMAND_TYPE_SPEED

namespace uavcan
{
namespace equipment
{
namespace actuator
{

template <int _tmpl>
struct UAVCAN_EXPORT Command_
{
    typedef const Command_<_tmpl>& ParameterType;
    typedef Command_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COMMAND_TYPE_UNITLESS;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COMMAND_TYPE_POSITION;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COMMAND_TYPE_FORCE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COMMAND_TYPE_SPEED;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > actuator_id;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > command_type;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > command_value;
    };

    enum
    {
        MinBitLen
            = FieldTypes::actuator_id::MinBitLen
            + FieldTypes::command_type::MinBitLen
            + FieldTypes::command_value::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::actuator_id::MaxBitLen
            + FieldTypes::command_type::MaxBitLen
            + FieldTypes::command_value::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::COMMAND_TYPE_UNITLESS >::Type COMMAND_TYPE_UNITLESS; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::COMMAND_TYPE_POSITION >::Type COMMAND_TYPE_POSITION; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::COMMAND_TYPE_FORCE >::Type COMMAND_TYPE_FORCE; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::COMMAND_TYPE_SPEED >::Type COMMAND_TYPE_SPEED; // 3

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::actuator_id >::Type actuator_id;
    typename ::uavcan::StorageType< typename FieldTypes::command_type >::Type command_type;
    typename ::uavcan::StorageType< typename FieldTypes::command_value >::Type command_value;

    Command_()
        : actuator_id()
        , command_type()
        , command_value()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<32 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.actuator.Command";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Command_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        actuator_id == rhs.actuator_id &&
        command_type == rhs.command_type &&
        command_value == rhs.command_value;
}

template <int _tmpl>
bool Command_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(actuator_id, rhs.actuator_id) &&
        ::uavcan::areClose(command_type, rhs.command_type) &&
        ::uavcan::areClose(command_value, rhs.command_value);
}

template <int _tmpl>
int Command_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::actuator_id::encode(self.actuator_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::command_type::encode(self.command_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::command_value::encode(self.command_value, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Command_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::actuator_id::decode(self.actuator_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::command_type::decode(self.command_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::command_value::decode(self.command_value, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Command_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x8D9A6A920C1D616CULL);

    FieldTypes::actuator_id::extendDataTypeSignature(signature);
    FieldTypes::command_type::extendDataTypeSignature(signature);
    FieldTypes::command_value::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Command_<_tmpl>::ConstantTypes::COMMAND_TYPE_UNITLESS >::Type
    Command_<_tmpl>::COMMAND_TYPE_UNITLESS = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename Command_<_tmpl>::ConstantTypes::COMMAND_TYPE_POSITION >::Type
    Command_<_tmpl>::COMMAND_TYPE_POSITION = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Command_<_tmpl>::ConstantTypes::COMMAND_TYPE_FORCE >::Type
    Command_<_tmpl>::COMMAND_TYPE_FORCE = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename Command_<_tmpl>::ConstantTypes::COMMAND_TYPE_SPEED >::Type
    Command_<_tmpl>::COMMAND_TYPE_SPEED = 3U; // 3

/*
 * Final typedef
 */
typedef Command_<0> Command;

// No default registration

} // Namespace actuator
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::actuator::Command >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::actuator::Command::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::actuator::Command >::stream(Stream& s, ::uavcan::equipment::actuator::Command::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "actuator_id: ";
    YamlStreamer< ::uavcan::equipment::actuator::Command::FieldTypes::actuator_id >::stream(s, obj.actuator_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "command_type: ";
    YamlStreamer< ::uavcan::equipment::actuator::Command::FieldTypes::command_type >::stream(s, obj.command_type, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "command_value: ";
    YamlStreamer< ::uavcan::equipment::actuator::Command::FieldTypes::command_value >::stream(s, obj.command_value, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace actuator
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::actuator::Command::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::actuator::Command >::stream(s, obj, 0);
    return s;
}

} // Namespace actuator
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_ACTUATOR_COMMAND_HPP_INCLUDED