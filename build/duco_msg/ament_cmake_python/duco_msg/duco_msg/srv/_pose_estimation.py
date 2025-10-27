# generated from rosidl_generator_py/resource/_idl.py.em
# with input from duco_msg:srv/PoseEstimation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseEstimation_Request(type):
    """Metaclass of message 'PoseEstimation_Request'."""

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
                'duco_msg.srv.PoseEstimation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pose_estimation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pose_estimation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pose_estimation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pose_estimation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pose_estimation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseEstimation_Request(metaclass=Metaclass_PoseEstimation_Request):
    """Message class 'PoseEstimation_Request'."""

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseEstimation_Response(type):
    """Metaclass of message 'PoseEstimation_Response'."""

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
                'duco_msg.srv.PoseEstimation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pose_estimation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pose_estimation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pose_estimation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pose_estimation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pose_estimation__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseEstimation_Response(metaclass=Metaclass_PoseEstimation_Response):
    """Message class 'PoseEstimation_Response'."""

    __slots__ = [
        '_response',
        '_pose_all',
        '_pose_pick',
        '_center',
        '_size',
        '_server_id',
    ]

    _fields_and_field_types = {
        'response': 'string',
        'pose_all': 'sequence<geometry_msgs/Pose>',
        'pose_pick': 'sequence<geometry_msgs/Pose>',
        'center': 'sequence<geometry_msgs/Point>',
        'size': 'sequence<geometry_msgs/Vector3>',
        'server_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', str())
        self.pose_all = kwargs.get('pose_all', [])
        self.pose_pick = kwargs.get('pose_pick', [])
        self.center = kwargs.get('center', [])
        self.size = kwargs.get('size', [])
        self.server_id = kwargs.get('server_id', int())

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
        if self.pose_all != other.pose_all:
            return False
        if self.pose_pick != other.pose_pick:
            return False
        if self.center != other.center:
            return False
        if self.size != other.size:
            return False
        if self.server_id != other.server_id:
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

    @builtins.property
    def pose_all(self):
        """Message field 'pose_all'."""
        return self._pose_all

    @pose_all.setter
    def pose_all(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'pose_all' field must be a set or sequence and each value of type 'Pose'"
        self._pose_all = value

    @builtins.property
    def pose_pick(self):
        """Message field 'pose_pick'."""
        return self._pose_pick

    @pose_pick.setter
    def pose_pick(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'pose_pick' field must be a set or sequence and each value of type 'Pose'"
        self._pose_pick = value

    @builtins.property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'center' field must be a set or sequence and each value of type 'Point'"
        self._center = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'size' field must be a set or sequence and each value of type 'Vector3'"
        self._size = value

    @builtins.property
    def server_id(self):
        """Message field 'server_id'."""
        return self._server_id

    @server_id.setter
    def server_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'server_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'server_id' field must be an integer in [-2147483648, 2147483647]"
        self._server_id = value


class Metaclass_PoseEstimation(type):
    """Metaclass of service 'PoseEstimation'."""

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
                'duco_msg.srv.PoseEstimation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pose_estimation

            from duco_msg.srv import _pose_estimation
            if _pose_estimation.Metaclass_PoseEstimation_Request._TYPE_SUPPORT is None:
                _pose_estimation.Metaclass_PoseEstimation_Request.__import_type_support__()
            if _pose_estimation.Metaclass_PoseEstimation_Response._TYPE_SUPPORT is None:
                _pose_estimation.Metaclass_PoseEstimation_Response.__import_type_support__()


class PoseEstimation(metaclass=Metaclass_PoseEstimation):
    from duco_msg.srv._pose_estimation import PoseEstimation_Request as Request
    from duco_msg.srv._pose_estimation import PoseEstimation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
