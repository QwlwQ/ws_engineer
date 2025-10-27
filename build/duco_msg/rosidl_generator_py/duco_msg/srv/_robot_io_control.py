# generated from rosidl_generator_py/resource/_idl.py.em
# with input from duco_msg:srv/RobotIoControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotIoControl_Request(type):
    """Metaclass of message 'RobotIoControl_Request'."""

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
                'duco_msg.srv.RobotIoControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_io_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_io_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_io_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_io_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_io_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotIoControl_Request(metaclass=Metaclass_RobotIoControl_Request):
    """Message class 'RobotIoControl_Request'."""

    __slots__ = [
        '_command',
        '_arm_num',
        '_type',
        '_port',
        '_value',
        '_block',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'arm_num': 'int8',
        'type': 'int8',
        'port': 'int8',
        'value': 'boolean',
        'block': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.arm_num = kwargs.get('arm_num', int())
        self.type = kwargs.get('type', int())
        self.port = kwargs.get('port', int())
        self.value = kwargs.get('value', bool())
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
        if self.type != other.type:
            return False
        if self.port != other.port:
            return False
        if self.value != other.value:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'port' field must be an integer in [-128, 127]"
        self._port = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'value' field must be of type 'bool'"
        self._value = value

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


class Metaclass_RobotIoControl_Response(type):
    """Metaclass of message 'RobotIoControl_Response'."""

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
                'duco_msg.srv.RobotIoControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_io_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_io_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_io_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_io_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_io_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotIoControl_Response(metaclass=Metaclass_RobotIoControl_Response):
    """Message class 'RobotIoControl_Response'."""

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


class Metaclass_RobotIoControl(type):
    """Metaclass of service 'RobotIoControl'."""

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
                'duco_msg.srv.RobotIoControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_io_control

            from duco_msg.srv import _robot_io_control
            if _robot_io_control.Metaclass_RobotIoControl_Request._TYPE_SUPPORT is None:
                _robot_io_control.Metaclass_RobotIoControl_Request.__import_type_support__()
            if _robot_io_control.Metaclass_RobotIoControl_Response._TYPE_SUPPORT is None:
                _robot_io_control.Metaclass_RobotIoControl_Response.__import_type_support__()


class RobotIoControl(metaclass=Metaclass_RobotIoControl):
    from duco_msg.srv._robot_io_control import RobotIoControl_Request as Request
    from duco_msg.srv._robot_io_control import RobotIoControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
