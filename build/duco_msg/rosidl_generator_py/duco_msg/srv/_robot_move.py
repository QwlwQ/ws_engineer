# generated from rosidl_generator_py/resource/_idl.py.em
# with input from duco_msg:srv/RobotMove.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'p'
# Member 'q'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotMove_Request(type):
    """Metaclass of message 'RobotMove_Request'."""

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
                'duco_msg.srv.RobotMove_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_move__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotMove_Request(metaclass=Metaclass_RobotMove_Request):
    """Message class 'RobotMove_Request'."""

    __slots__ = [
        '_command',
        '_arm_num',
        '_p',
        '_q',
        '_v',
        '_a',
        '_r',
        '_tool',
        '_wobj',
        '_block',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'arm_num': 'int8',
        'p': 'sequence<float>',
        'q': 'sequence<float>',
        'v': 'float',
        'a': 'float',
        'r': 'float',
        'tool': 'string',
        'wobj': 'string',
        'block': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.arm_num = kwargs.get('arm_num', int())
        self.p = array.array('f', kwargs.get('p', []))
        self.q = array.array('f', kwargs.get('q', []))
        self.v = kwargs.get('v', float())
        self.a = kwargs.get('a', float())
        self.r = kwargs.get('r', float())
        self.tool = kwargs.get('tool', str())
        self.wobj = kwargs.get('wobj', str())
        self.block = kwargs.get('block', bool())

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
        if self.command != other.command:
            return False
        if self.arm_num != other.arm_num:
            return False
        if self.p != other.p:
            return False
        if self.q != other.q:
            return False
        if self.v != other.v:
            return False
        if self.a != other.a:
            return False
        if self.r != other.r:
            return False
        if self.tool != other.tool:
            return False
        if self.wobj != other.wobj:
            return False
        if self.block != other.block:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @builtins.property
    def arm_num(self):
        """Message field 'arm_num'."""
        return self._arm_num

    @arm_num.setter
    def arm_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_num' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arm_num' field must be an integer in [-128, 127]"
        self._arm_num = value

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'p' array.array() must have the type code of 'f'"
            self._p = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'p' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._p = array.array('f', value)

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'q' array.array() must have the type code of 'f'"
            self._q = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q = array.array('f', value)

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v = value

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._a = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'r' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._r = value

    @builtins.property
    def tool(self):
        """Message field 'tool'."""
        return self._tool

    @tool.setter
    def tool(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tool' field must be of type 'str'"
        self._tool = value

    @builtins.property
    def wobj(self):
        """Message field 'wobj'."""
        return self._wobj

    @wobj.setter
    def wobj(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wobj' field must be of type 'str'"
        self._wobj = value

    @builtins.property
    def block(self):
        """Message field 'block'."""
        return self._block

    @block.setter
    def block(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'block' field must be of type 'bool'"
        self._block = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotMove_Response(type):
    """Metaclass of message 'RobotMove_Response'."""

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
                'duco_msg.srv.RobotMove_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_move__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotMove_Response(metaclass=Metaclass_RobotMove_Response):
    """Message class 'RobotMove_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', str())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value


class Metaclass_RobotMove(type):
    """Metaclass of service 'RobotMove'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('duco_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'duco_msg.srv.RobotMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_move

            from duco_msg.srv import _robot_move
            if _robot_move.Metaclass_RobotMove_Request._TYPE_SUPPORT is None:
                _robot_move.Metaclass_RobotMove_Request.__import_type_support__()
            if _robot_move.Metaclass_RobotMove_Response._TYPE_SUPPORT is None:
                _robot_move.Metaclass_RobotMove_Response.__import_type_support__()


class RobotMove(metaclass=Metaclass_RobotMove):
    from duco_msg.srv._robot_move import RobotMove_Request as Request
    from duco_msg.srv._robot_move import RobotMove_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
