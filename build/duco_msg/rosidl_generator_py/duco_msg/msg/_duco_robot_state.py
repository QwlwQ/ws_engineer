# generated from rosidl_generator_py/resource/_idl.py.em
# with input from duco_msg:msg/DucoRobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'joint_expect_position'
# Member 'joint_expect_velocity'
# Member 'joint_expect_accelera'
# Member 'joint_actual_position'
# Member 'joint_actual_velocity'
# Member 'joint_actual_accelera'
# Member 'joint_actual_current'
# Member 'joint_temperature'
# Member 'driver_temperature'
# Member 'cart_expect_position'
# Member 'cart_expect_velocity'
# Member 'cart_expect_accelera'
# Member 'cart_actual_position'
# Member 'cart_actual_velocity'
# Member 'cart_actual_accelera'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DucoRobotState(type):
    """Metaclass of message 'DucoRobotState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('duco_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'duco_msg.msg.DucoRobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__duco_robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__duco_robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__duco_robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__duco_robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__duco_robot_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DucoRobotState(metaclass=Metaclass_DucoRobotState):
    """Message class 'DucoRobotState'."""

    __slots__ = [
        '_joint_expect_position',
        '_joint_expect_velocity',
        '_joint_expect_accelera',
        '_joint_actual_position',
        '_joint_actual_velocity',
        '_joint_actual_accelera',
        '_joint_actual_current',
        '_joint_temperature',
        '_driver_temperature',
        '_cart_expect_position',
        '_cart_expect_velocity',
        '_cart_expect_accelera',
        '_cart_actual_position',
        '_cart_actual_velocity',
        '_cart_actual_accelera',
        '_slave_ready',
        '_collision',
        '_collision_axis',
        '_emc_stop_signal',
        '_robot_state',
        '_robot_error',
    ]

    _fields_and_field_types = {
        'joint_expect_position': 'double[7]',
        'joint_expect_velocity': 'double[7]',
        'joint_expect_accelera': 'double[7]',
        'joint_actual_position': 'double[7]',
        'joint_actual_velocity': 'double[7]',
        'joint_actual_accelera': 'double[7]',
        'joint_actual_current': 'double[7]',
        'joint_temperature': 'double[7]',
        'driver_temperature': 'double[7]',
        'cart_expect_position': 'double[7]',
        'cart_expect_velocity': 'double[7]',
        'cart_expect_accelera': 'double[7]',
        'cart_actual_position': 'double[7]',
        'cart_actual_velocity': 'double[7]',
        'cart_actual_accelera': 'double[7]',
        'slave_ready': 'boolean[7]',
        'collision': 'boolean',
        'collision_axis': 'int8',
        'emc_stop_signal': 'boolean',
        'robot_state': 'int8',
        'robot_error': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 7),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'joint_expect_position' not in kwargs:
            self.joint_expect_position = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_expect_position = numpy.array(kwargs.get('joint_expect_position'), dtype=numpy.float64)
            assert self.joint_expect_position.shape == (7, )
        if 'joint_expect_velocity' not in kwargs:
            self.joint_expect_velocity = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_expect_velocity = numpy.array(kwargs.get('joint_expect_velocity'), dtype=numpy.float64)
            assert self.joint_expect_velocity.shape == (7, )
        if 'joint_expect_accelera' not in kwargs:
            self.joint_expect_accelera = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_expect_accelera = numpy.array(kwargs.get('joint_expect_accelera'), dtype=numpy.float64)
            assert self.joint_expect_accelera.shape == (7, )
        if 'joint_actual_position' not in kwargs:
            self.joint_actual_position = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_actual_position = numpy.array(kwargs.get('joint_actual_position'), dtype=numpy.float64)
            assert self.joint_actual_position.shape == (7, )
        if 'joint_actual_velocity' not in kwargs:
            self.joint_actual_velocity = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_actual_velocity = numpy.array(kwargs.get('joint_actual_velocity'), dtype=numpy.float64)
            assert self.joint_actual_velocity.shape == (7, )
        if 'joint_actual_accelera' not in kwargs:
            self.joint_actual_accelera = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_actual_accelera = numpy.array(kwargs.get('joint_actual_accelera'), dtype=numpy.float64)
            assert self.joint_actual_accelera.shape == (7, )
        if 'joint_actual_current' not in kwargs:
            self.joint_actual_current = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_actual_current = numpy.array(kwargs.get('joint_actual_current'), dtype=numpy.float64)
            assert self.joint_actual_current.shape == (7, )
        if 'joint_temperature' not in kwargs:
            self.joint_temperature = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_temperature = numpy.array(kwargs.get('joint_temperature'), dtype=numpy.float64)
            assert self.joint_temperature.shape == (7, )
        if 'driver_temperature' not in kwargs:
            self.driver_temperature = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.driver_temperature = numpy.array(kwargs.get('driver_temperature'), dtype=numpy.float64)
            assert self.driver_temperature.shape == (7, )
        if 'cart_expect_position' not in kwargs:
            self.cart_expect_position = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.cart_expect_position = numpy.array(kwargs.get('cart_expect_position'), dtype=numpy.float64)
            assert self.cart_expect_position.shape == (7, )
        if 'cart_expect_velocity' not in kwargs:
            self.cart_expect_velocity = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.cart_expect_velocity = numpy.array(kwargs.get('cart_expect_velocity'), dtype=numpy.float64)
            assert self.cart_expect_velocity.shape == (7, )
        if 'cart_expect_accelera' not in kwargs:
            self.cart_expect_accelera = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.cart_expect_accelera = numpy.array(kwargs.get('cart_expect_accelera'), dtype=numpy.float64)
            assert self.cart_expect_accelera.shape == (7, )
        if 'cart_actual_position' not in kwargs:
            self.cart_actual_position = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.cart_actual_position = numpy.array(kwargs.get('cart_actual_position'), dtype=numpy.float64)
            assert self.cart_actual_position.shape == (7, )
        if 'cart_actual_velocity' not in kwargs:
            self.cart_actual_velocity = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.cart_actual_velocity = numpy.array(kwargs.get('cart_actual_velocity'), dtype=numpy.float64)
            assert self.cart_actual_velocity.shape == (7, )
        if 'cart_actual_accelera' not in kwargs:
            self.cart_actual_accelera = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.cart_actual_accelera = numpy.array(kwargs.get('cart_actual_accelera'), dtype=numpy.float64)
            assert self.cart_actual_accelera.shape == (7, )
        self.slave_ready = kwargs.get(
            'slave_ready',
            [bool() for x in range(7)]
        )
        self.collision = kwargs.get('collision', bool())
        self.collision_axis = kwargs.get('collision_axis', int())
        self.emc_stop_signal = kwargs.get('emc_stop_signal', bool())
        self.robot_state = kwargs.get('robot_state', int())
        self.robot_error = kwargs.get('robot_error', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.joint_expect_position != other.joint_expect_position):
            return False
        if all(self.joint_expect_velocity != other.joint_expect_velocity):
            return False
        if all(self.joint_expect_accelera != other.joint_expect_accelera):
            return False
        if all(self.joint_actual_position != other.joint_actual_position):
            return False
        if all(self.joint_actual_velocity != other.joint_actual_velocity):
            return False
        if all(self.joint_actual_accelera != other.joint_actual_accelera):
            return False
        if all(self.joint_actual_current != other.joint_actual_current):
            return False
        if all(self.joint_temperature != other.joint_temperature):
            return False
        if all(self.driver_temperature != other.driver_temperature):
            return False
        if all(self.cart_expect_position != other.cart_expect_position):
            return False
        if all(self.cart_expect_velocity != other.cart_expect_velocity):
            return False
        if all(self.cart_expect_accelera != other.cart_expect_accelera):
            return False
        if all(self.cart_actual_position != other.cart_actual_position):
            return False
        if all(self.cart_actual_velocity != other.cart_actual_velocity):
            return False
        if all(self.cart_actual_accelera != other.cart_actual_accelera):
            return False
        if self.slave_ready != other.slave_ready:
            return False
        if self.collision != other.collision:
            return False
        if self.collision_axis != other.collision_axis:
            return False
        if self.emc_stop_signal != other.emc_stop_signal:
            return False
        if self.robot_state != other.robot_state:
            return False
        if self.robot_error != other.robot_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_expect_position(self):
        """Message field 'joint_expect_position'."""
        return self._joint_expect_position

    @joint_expect_position.setter
    def joint_expect_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_expect_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_expect_position' numpy.ndarray() must have a size of 7"
            self._joint_expect_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_expect_position' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_expect_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_expect_velocity(self):
        """Message field 'joint_expect_velocity'."""
        return self._joint_expect_velocity

    @joint_expect_velocity.setter
    def joint_expect_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_expect_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_expect_velocity' numpy.ndarray() must have a size of 7"
            self._joint_expect_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_expect_velocity' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_expect_velocity = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_expect_accelera(self):
        """Message field 'joint_expect_accelera'."""
        return self._joint_expect_accelera

    @joint_expect_accelera.setter
    def joint_expect_accelera(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_expect_accelera' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_expect_accelera' numpy.ndarray() must have a size of 7"
            self._joint_expect_accelera = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_expect_accelera' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_expect_accelera = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_actual_position(self):
        """Message field 'joint_actual_position'."""
        return self._joint_actual_position

    @joint_actual_position.setter
    def joint_actual_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_actual_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_actual_position' numpy.ndarray() must have a size of 7"
            self._joint_actual_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_actual_position' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_actual_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_actual_velocity(self):
        """Message field 'joint_actual_velocity'."""
        return self._joint_actual_velocity

    @joint_actual_velocity.setter
    def joint_actual_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_actual_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_actual_velocity' numpy.ndarray() must have a size of 7"
            self._joint_actual_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_actual_velocity' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_actual_velocity = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_actual_accelera(self):
        """Message field 'joint_actual_accelera'."""
        return self._joint_actual_accelera

    @joint_actual_accelera.setter
    def joint_actual_accelera(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_actual_accelera' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_actual_accelera' numpy.ndarray() must have a size of 7"
            self._joint_actual_accelera = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_actual_accelera' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_actual_accelera = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_actual_current(self):
        """Message field 'joint_actual_current'."""
        return self._joint_actual_current

    @joint_actual_current.setter
    def joint_actual_current(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_actual_current' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_actual_current' numpy.ndarray() must have a size of 7"
            self._joint_actual_current = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_actual_current' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_actual_current = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_temperature(self):
        """Message field 'joint_temperature'."""
        return self._joint_temperature

    @joint_temperature.setter
    def joint_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_temperature' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_temperature' numpy.ndarray() must have a size of 7"
            self._joint_temperature = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_temperature' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_temperature = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def driver_temperature(self):
        """Message field 'driver_temperature'."""
        return self._driver_temperature

    @driver_temperature.setter
    def driver_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'driver_temperature' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'driver_temperature' numpy.ndarray() must have a size of 7"
            self._driver_temperature = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'driver_temperature' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._driver_temperature = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cart_expect_position(self):
        """Message field 'cart_expect_position'."""
        return self._cart_expect_position

    @cart_expect_position.setter
    def cart_expect_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cart_expect_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'cart_expect_position' numpy.ndarray() must have a size of 7"
            self._cart_expect_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cart_expect_position' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cart_expect_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cart_expect_velocity(self):
        """Message field 'cart_expect_velocity'."""
        return self._cart_expect_velocity

    @cart_expect_velocity.setter
    def cart_expect_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cart_expect_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'cart_expect_velocity' numpy.ndarray() must have a size of 7"
            self._cart_expect_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cart_expect_velocity' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cart_expect_velocity = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cart_expect_accelera(self):
        """Message field 'cart_expect_accelera'."""
        return self._cart_expect_accelera

    @cart_expect_accelera.setter
    def cart_expect_accelera(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cart_expect_accelera' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'cart_expect_accelera' numpy.ndarray() must have a size of 7"
            self._cart_expect_accelera = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cart_expect_accelera' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cart_expect_accelera = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cart_actual_position(self):
        """Message field 'cart_actual_position'."""
        return self._cart_actual_position

    @cart_actual_position.setter
    def cart_actual_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cart_actual_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'cart_actual_position' numpy.ndarray() must have a size of 7"
            self._cart_actual_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cart_actual_position' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cart_actual_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cart_actual_velocity(self):
        """Message field 'cart_actual_velocity'."""
        return self._cart_actual_velocity

    @cart_actual_velocity.setter
    def cart_actual_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cart_actual_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'cart_actual_velocity' numpy.ndarray() must have a size of 7"
            self._cart_actual_velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cart_actual_velocity' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cart_actual_velocity = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cart_actual_accelera(self):
        """Message field 'cart_actual_accelera'."""
        return self._cart_actual_accelera

    @cart_actual_accelera.setter
    def cart_actual_accelera(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cart_actual_accelera' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'cart_actual_accelera' numpy.ndarray() must have a size of 7"
            self._cart_actual_accelera = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cart_actual_accelera' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cart_actual_accelera = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def slave_ready(self):
        """Message field 'slave_ready'."""
        return self._slave_ready

    @slave_ready.setter
    def slave_ready(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'slave_ready' field must be a set or sequence with length 7 and each value of type 'bool'"
        self._slave_ready = value

    @builtins.property
    def collision(self):
        """Message field 'collision'."""
        return self._collision

    @collision.setter
    def collision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'collision' field must be of type 'bool'"
        self._collision = value

    @builtins.property
    def collision_axis(self):
        """Message field 'collision_axis'."""
        return self._collision_axis

    @collision_axis.setter
    def collision_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'collision_axis' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'collision_axis' field must be an integer in [-128, 127]"
        self._collision_axis = value

    @builtins.property
    def emc_stop_signal(self):
        """Message field 'emc_stop_signal'."""
        return self._emc_stop_signal

    @emc_stop_signal.setter
    def emc_stop_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emc_stop_signal' field must be of type 'bool'"
        self._emc_stop_signal = value

    @builtins.property
    def robot_state(self):
        """Message field 'robot_state'."""
        return self._robot_state

    @robot_state.setter
    def robot_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'robot_state' field must be an integer in [-128, 127]"
        self._robot_state = value

    @builtins.property
    def robot_error(self):
        """Message field 'robot_error'."""
        return self._robot_error

    @robot_error.setter
    def robot_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_error' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_error' field must be an integer in [-2147483648, 2147483647]"
        self._robot_error = value
