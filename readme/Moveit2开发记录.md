## Moveit2开发记录

### 1问题：拖动demo_launch.py中规划球，Plan成功，Execute失败

![image-20250420195829506](/home/ubuntu/ws_engineer/readme/image-20250420195829506.png)

```
[move_group-3] [INFO] [1745158843.822847653] [moveit_move_group_default_capabilities.execute_trajectory_action_capability]: Received goal request
[move_group-3] [INFO] [1745158843.822973176] [moveit_move_group_default_capabilities.execute_trajectory_action_capability]: Execution request received
[move_group-3] [INFO] [1745158843.823013620] [moveit.plugins.moveit_simple_controller_manager]: Returned 0 controllers in list
[move_group-3] [INFO] [1745158843.823033768] [moveit.plugins.moveit_simple_controller_manager]: Returned 0 controllers in list
[move_group-3] [INFO] [1745158843.823052182] [moveit.plugins.moveit_simple_controller_manager]: Returned 0 controllers in list
[move_group-3] [INFO] [1745158843.823059275] [moveit.plugins.moveit_simple_controller_manager]: Returned 0 controllers in list
[move_group-3] [ERROR] [1745158843.823076948] [moveit_ros.trajectory_execution_manager]: Unable to identify any set of controllers that can actuate the specified joints: [ joint0 joint1 joint2 joint3 joint4 joint5 ]
[move_group-3] [ERROR] [1745158843.823088870] [moveit_ros.trajectory_execution_manager]: Known controllers and their joints:
[move_group-3] 
[rviz2-4] [INFO] [1745158843.823051040] [move_group_interface]: Execute request accepted
[rviz2-4] [INFO] [1745158843.823285834] [move_group_interface]: Execute request aborted
[rviz2-4] [ERROR] [1745158843.823711943] [move_group_interface]: MoveGroupInterface::execute() failed or timeout reached
```

#### 分析：

moveit控制机械臂时候，找不到控制器controller来控制这些joint。

有两个重要的文件，一个是ros2_controllers.yaml,一个是moveit_controllers.yaml

使用moveit控制机械臂时，通过控制器插件（比如moveit_simple_controller_manager）ba轨迹发送给机器人。有两个关键点：1.控制器名称（如arm_group_controller）；2.Action通信路径。

如果不显式指定action_ns,moveit默认推断逻辑去找action,不一定能正确找到。

#### 解决：

- `ros2 action list` 看看 action server 是否真的启动

- `ros2 action info /arm_group_controller/follow_joint_trajectory` 检查是否有 action server

- `ros2 control list_controllers` 检查控制器是否 active

- `MoveGroupInterface::execute() failed or timeout reached` → 很可能是 action_ns 配错了

在moveit_controllers.yaml中，加入了action_ns

![image-20250420235122979](/home/ubuntu/ws_engineer/readme/image-20250420235122979.png)





### 2问题：colcon build过程中显示环境变量还有残留路径，尽管已经删掉了一些文件

```
[0.296s] WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/ubuntu/ws_engineer/install/rviz_marker_tools' in the environment variable AMENT_PREFIX_PATH doesn't exist
[0.296s] WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/ubuntu/ws_engineer/install/moveit_task_constructor_msgs' in the environment variable AMENT_PREFIX_PATH doesn't exist
[0.296s] WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/ubuntu/ws_engineer/install/engineer_test' in the environment variable AMENT_PREFIX_PATH doesn't exist
[0.297s] WARNING:colcon.colcon_ros.prefix_path.catkin:The path '/home/ubuntu/ws_engineer/install/rviz_marker_tools' in the environment variable CMAKE_PREFIX_PATH doesn't exist
[0.297s] WARNING:colcon.colcon_ros.prefix_path.catkin:The path '/home/ubuntu/ws_engineer/install/moveit_task_constructor_msgs' in the environment variable CMAKE_PREFIX_PATH doesn't exist
[0.297s] WARNING:colcon.colcon_ros.prefix_path.catkin:The path '/home/ubuntu/ws_engineer/install/engineer_test' in the environment variable CMAKE_PREFIX_PATH doesn't exist
```

#### 解决：

![image-20250420221708380](/home/ubuntu/ws_engineer/readme/image-20250420221708380.png)

重新打开终端就可以。





### 3问题：自定义接口，在使用rosidl_default_generators时发生报错

```
CMake Error at /opt/ros/humble/share/rosidl_adapter/cmake/rosidl_adapt_interfaces.cmake:59 (message):
  execute_process(/home/ubuntu/anaconda3/bin/python3 -m rosidl_adapter
  --package-name base_interfaces --arguments-file
  /home/ubuntu/ws_engineer/build/base_interfaces/rosidl_adapter__arguments__base_interfaces.json
  --output-dir
  /home/ubuntu/ws_engineer/build/base_interfaces/rosidl_adapter/base_interfaces
  --output-file
  /home/ubuntu/ws_engineer/build/base_interfaces/rosidl_adapter/base_interfaces.idls)
  returned error code 1:

  Traceback (most recent call last):

    File "<frozen runpy>", line 198, in _run_module_as_main
    File "<frozen runpy>", line 88, in _run_code
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/__main__.py", line 19, in <module>
      sys.exit(main())
               ^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/main.py", line 53, in main
      abs_idl_file = convert_to_idl(
                     ^^^^^^^^^^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/__init__.py", line 18, in convert_to_idl
      from rosidl_adapter.msg import convert_msg_to_idl
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/msg/__init__.py", line 16, in <module>
      from rosidl_adapter.resource import expand_template
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/resource/__init__.py", line 19, in <module>
      import em

  ModuleNotFoundError: No module named 'em'

Call Stack (most recent call first):
  /opt/ros/humble/share/rosidl_cmake/cmake/rosidl_generate_interfaces.cmake:130 (rosidl_adapt_interfaces)
  CMakeLists.txt:15 (rosidl_generate_interfaces)

```

#### 解决：

貌似是之前在3d抓取项目中，把系统全局变量的一些环境进行了删除，安装回来empy即可

```
pip install empy==3.3.2
```



### 4问题：显示自定义的msg文件名非法

```
  Traceback (most recent call last):

    File "<frozen runpy>", line 198, in _run_module_as_main
    File "<frozen runpy>", line 88, in _run_code
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/__main__.py", line 19, in <module>
      sys.exit(main())
               ^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/main.py", line 53, in main
      abs_idl_file = convert_to_idl(
                     ^^^^^^^^^^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/__init__.py", line 19, in convert_to_idl
      return convert_msg_to_idl(
             ^^^^^^^^^^^^^^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/msg/__init__.py", line 28, in convert_msg_to_idl
      msg = parse_message_string(package_name, input_file.stem, content)
            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/parser.py", line 544, in parse_message_string
      msg = MessageSpecification(pkg_name, msg_name, fields, constants)
            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/parser.py", line 388, in __init__
      self.base_type = BaseType(
                       ^^^^^^^^^
    File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_adapter/parser.py", line 205, in __init__
      raise InvalidResourceName(

  rosidl_adapter.parser.InvalidResourceName: 'userJoint' is an invalid
  message name.  It should have the pattern '^[A-Z][A-Za-z0-9]*$'

Call Stack (most recent call first):
  /opt/ros/humble/share/rosidl_cmake/cmake/rosidl_generate_interfaces.cmake:130 (rosidl_adapt_interfaces)
  CMakeLists.txt:15 (rosidl_generate_interfaces)
```



#### 解决：

将msg文件夹下的userJoint.msg和userPose.msg，换为UserJoint.msg和UserPose.msg



### 5问题：缺少各种module

问题同问题3

- 缺少catkin_pkg

```
Traceback (most recent call last):
  File "/opt/ros/humble/share/ament_cmake_core/cmake/core/package_xml_2_cmake.py", line 22, in <module>
    from catkin_pkg.package import parse_package_string
ModuleNotFoundError: No module named 'catkin_pkg'
CMake Error at /opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package_xml.cmake:95 (message):
  execute_process(/home/ubuntu/anaconda3/bin/python3
  /opt/ros/humble/share/ament_cmake_core/cmake/core/package_xml_2_cmake.py
  /home/ubuntu/ws_engineer/src/base_interfaces/package.xml
  /home/ubuntu/ws_engineer/build/base_interfaces/ament_cmake_core/package.cmake)
  returned error code 1
Call Stack (most recent call first):
  /opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package_xml.cmake:49 (_ament_package_xml)
  /opt/ros/humble/share/rosidl_cmake/cmake/rosidl_generate_interfaces.cmake:226 (ament_package_xml)
  CMakeLists.txt:15 (rosidl_generate_interfaces)
```

- 缺少Lark

```
Traceback (most recent call last):
  File "/opt/ros/humble/share/rosidl_generator_c/cmake/../../../lib/rosidl_generator_c/rosidl_generator_c", line 8, in <module>
    from rosidl_generator_c import generate_c
  File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_c/__init__.py", line 15, in <module>
    from rosidl_cmake import convert_camel_case_to_lower_case_underscore
  File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_cmake/__init__.py", line 24, in <module>
    from rosidl_parser.parser import parse_idl_file
  File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_parser/parser.py", line 20, in <module>
    from lark import Lark
ModuleNotFoundError: No module named 'lark'
gmake[2]: *** [CMakeFiles/base_interfaces__rosidl_generator_c.dir/build.make:88：rosidl_generator_c/base_interfaces/msg/user_joint.h] 错误 1
gmake[1]: *** [CMakeFiles/Makefile2:212：CMakeFiles/base_interfaces__rosidl_generator_c.dir/all] 错误 2
gmake[1]: *** 正在等待未完成的任务....
Traceback (most recent call last):
  File "/opt/ros/humble/share/rosidl_generator_cpp/cmake/../../../lib/rosidl_generator_cpp/rosidl_generator_cpp", line 8, in <module>
    from rosidl_generator_cpp import generate_cpp
  File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_cpp/__init__.py", line 17, in <module>
    from rosidl_cmake import generate_files
  File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_cmake/__init__.py", line 24, in <module>
    from rosidl_parser.parser import parse_idl_file
  File "/opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_parser/parser.py", line 20, in <module>
    from lark import Lark
ModuleNotFoundError: No module named 'lark'
gmake[2]: *** [CMakeFiles/base_interfaces__cpp.dir/build.make:99：rosidl_generator_cpp/base_interfaces/msg/user_joint.hpp] 错误 1
gmake[1]: *** [CMakeFiles/Makefile2:317：CMakeFiles/base_interfaces__cpp.dir/all] 错误 2
gmake: *** [Makefile:146：all] 错误 2
```

#### 解决：

```
pip install catkin_pkg
pip install Lark
```



### 6问题：系统提示共享库存在版本冲突

编译时产生warning

```
/usr/bin/ld: warning: libfmt.so.8, needed by /lib/x86_64-linux-gnu/libspdlog.so.1, may conflict with libfmt.so.9
---
Finished <<< engineer_protocol [5.17s]
```

运行时有error

```
/home/ubuntu/ws_engineer/install/engineer_protocol/lib/engineer_protocol/uart_serial: error while loading shared libraries: libfmt.so.9: cannot open shared object file: No such file or directory
```

#### 解决：

- 查看是否安装

先查看环境变量中是否存在

```
sudo find /usr/local -name "libfmt*"
```

结果显示没有，环境变量中并没有

再在系统中寻找安装了哪些版本

```
ls -l /usr/lib/x86_64-linux-gnu/libfmt.so*
```

结果：

```
ubuntu@ubuntu-Dell-G15-5515:~/ws_engineer$ ls -l /usr/lib/x86_64-linux-gnu/libfmt.so*
lrwxrwxrwx 1 root root     11 Jan 20  2022 /usr/lib/x86_64-linux-gnu/libfmt.so -> libfmt.so.8
lrwxrwxrwx 1 root root     15 Jan 20  2022 /usr/lib/x86_64-linux-gnu/libfmt.so.8 -> libfmt.so.8.1.1
-rw-r--r-- 1 root root 133816 Jan 20  2022 /usr/lib/x86_64-linux-gnu/libfmt.so.8.1.1
```



- 安装fmt

https://github.com/fmtlib/fmt

下载后在打开项目，在终端打开

```
mkdir build
cd build
cmake .. -DBUILD_SHARED_LIBS=ON
make -j8
sudo make install
```

- 版本更换

安装了最新的libfmt.so.11，而需要的貌似是libfmt.so.9

安装完毕后，先检查是否真的完成

```
ls /usr/local/lib/libfmt.so.9*
```

此外在使用之前需要更新一下缓存

```
sudo ldconfig
```



### 7问题：conda环境和ROS2环境冲突

```
[ROS2] Could not import 'rosidl_typesupport_c' for package
```

- 关闭conda环境

别的教程显示是conda环境和ROS2环境冲突导致，具体貌似是自定义接口中使用了一些python生成文件，而python解释器没有使用到ROS2的，或者全局环境，而是使用到了conda中的python。其解决方案如下：

先关闭conda环境

```
conda deactivate
```

然后删除build和install文件夹

```
rm -rf build install
```

重新编译

```
colcon build
```

- 关闭终端conda初始化

尝试第一个方案，发现并没有解决问题，不确定终端为什么没有反应，于是打算将.bashrc中关于conda初始化的部分注释掉

打开.bashrc文件

```
nano ~/.bashrc
```

找到conda初始化的内容，并且注释掉，注意找像是下面内容的部分

```
# >>> conda initialize >>>

# <<< conda initialize <<<
```

- 查找自动加载conda的脚本文件 

使用指令查看，发现仍然使用的是conda的python环境

```
which python3
```

1.检查.bashrc中是否还有conda的初始化配置

```
grep -i conda ~/.bashrc
```

会显示出conda相关的内容，确定都被注释掉了

2.检查.profile文件

```
grep -i conda ~/.profile
```

3.检查系统级文件/etc/profile

```
grep -i conda /etc/profile
```

本问题中最后发现在系统级文件中会显示出

```
export PATH=/home/ubuntu/anaconda3/bin:$PATH
```

最终确定问题，将此句注释

#### 解决：

打开.bashrc文件

```
nano ~/.bashrc
```

注释conda初始化部分

```
# >>> conda initialize >>>

# <<< conda initialize <<<
```

检查python环境是否更换

```
which python3

#/usr/bin/python3 如果是这个则正常
#/home/ubuntu/anaconda3/bin/python3  如果是conda环境则没有成功
```

还未成功的话先查找profile中是否还有配置

```
grep -i conda ~/.profile
grep -i conda /etc/profile
```

如果发现有相关内容，注释掉即可，例如本问题中将/etc/profile中的路径注释掉

```
sudo nano /etc/profile
```

```
#export PATH=/home/ubuntu/anaconda3/bin:$PATH
```

删除build和install,重新编译

```
rm -rf build install
colcon build
```

### 8问题：多个源文件中重复定义全局变量

```
In file included from /home/ubuntu/ws_engineer/src/engineer_protocol/src/uart_serial_driver.cpp:1:
/home/ubuntu/ws_engineer/src/engineer_protocol/include/engineer_protocol/uart_serial_driver.hpp:13:8: error: declaration of ‘auto uart::idntifier_green’ has no initializer
   13 | extern auto idntifier_green;
      |        ^~~~
/home/ubuntu/ws_engineer/src/engineer_protocol/include/engineer_protocol/uart_serial_driver.hpp:14:8: error: declaration of ‘auto uart::idntifier_red’ has no initializer
   14 | extern auto idntifier_red;
      |        ^~~~
```

#### 分析：

有三个文件，分别是uart_serial_driver.cpp，uart_serial_driver.hpp和uart_serial.cpp文件。其中两个.cpp文件都包含了uart_serial_driver.hpp。

原本是只在uart_serial_driver.hpp文件中定义了

```
auto idntifier_green = fmt::format(fg(fmt::color::green) | fmt::emphasis::bold, "uart_serial");
auto idntifier_red   = fmt::format(fg(fmt::color::red)   | fmt::emphasis::bold, "uart_serial");
```

#### 解决：

解决方法是只在头文件中声明，然后在源文件中定义：

uart_serial_driver.hpp中更改为

```
extern std::string idntifier_green;
extern std::string idntifier_red;
```

uart_serial_driver.cpp中增加

```
std::string idntifier_green = fmt::format(fg(fmt::color::green) | fmt::emphasis::bold, "uart_serial");
std::string idntifier_red   = fmt::format(fg(fmt::color::red)   | fmt::emphasis::bold, "uart_serial");
```



### 9问题：串口打开失败

```
[] Open serial device failed: /dev/ttyUSB0
[] Open serial device failed: /dev/ttyUSB1
[] Open serial device failed: /dev/ttyUSB2
[] Open serial device failed: /dev/ttyUSB3
[] Open serial device failed: /dev/ttyACM0
[] Open serial device failed: /dev/ttyACM1
```

#### 解决：

- 检查设备是否插好

插上串口设备后，运行以下指令，看是否连接成功

```
ls /dev/ttyUSB* /dev/ttyACM*
```

- 查看串口访问权限

运行指令查看当前用户是否属于dialout组

```
groups $USER
```

如果不属于，例如

```
ubuntu@ubuntu-Dell-G15-5515:~/ws_engineer$ groups $USER
ubuntu : ubuntu adm cdrom sudo dip plugdev lpadmin lxd sambashare
```

则运行指令添加

```
sudo usermod -a -G dialout $USER
```

打开串口读取权限，以/dev/ttyUSB0为例

```
sudo chmod -R 777 /dev/ttyUSB0
```

### 10问题：fmt格式化字符时参数数量不匹配

运行时遇到问题

```
terminate called after throwing an instance of 'fmt::v9::format_error'
  what():  argument not found
```

#### 分析：

找到报错代码部分

```
  fmt::print("{info} in 10 {} {}\n", receive_buff_temp_[0], receive_buff_temp_[1]);
```

发现info两边用了{}而不是[]，导致原本传两个参数，现在变为了传三个参数

#### 解决：

修改为

```
  fmt::print("[info] in 10 {} {}\n", receive_buff_temp_[0], receive_buff_temp_[1]);
```

