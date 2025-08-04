#pragma once

#include <string>

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

#include <fmt/core.h>
#include <fmt/color.h>
#include <opencv2/opencv.hpp>
namespace uart{
extern std::string idntifier_green;
extern std::string idntifier_red;

enum BufferLength{
  // 接收数据字节数
  REC_INFO_LENGTH   = 14,

  // 计算CRC校验码的发送数据的长度
  CRC_BUFF_LENGTH   = 12,

  // 计算CRC校验码之后总的发送长度
  WRITE_BUFF_LENGTH = 14
};

// 串口信息
struct Serial_Config {
  std::string preferred_device        = "/dev/ttyACM0";
  int         set_baudrate            = 0;
  int         show_serial_information = 0;
};

// 接收的数据结构头帧0x53 尾帧0x45
struct Receive_Data {
  float x; //0102 末端位姿
  float y; //0304
  float z; //0506
  float yaw;   //0708
  float pitch; //0910
  float roll;  //1112

  union X_Info {
    short x; //x(未解码)
    uint8_t arr_x[2] = {0};
  } raw_x;
  union Y_Info {
    short y;
    uint8_t arr_y[2] = {0};
  } raw_y;
  union Z_Info {
    short z;
    uint8_t arr_z[2] = {0};
  } raw_z; 
  union Yaw_Info {
    short yaw; //x(未解码)
    uint8_t arr_yaw[2] = {0};
  } raw_yaw;
  union Pitch_Info {
    short pitch; //x(未解码)
    uint8_t arr_pitch[2] = {0};
  } raw_pitch;
  union Roll_Info {
    short roll; //x(未解码)
    uint8_t arr_roll[2] = {0};
  } raw_roll;

  bool old_flag;

  Receive_Data() {
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
    yaw   = 0.0f;
    pitch = 0.0f;
    roll  = 0.0f;
    raw_x.x = 0;
    raw_y.y = 0;
    raw_z.z = 0;
    raw_yaw.yaw     = 0;
    raw_pitch.pitch = 0;
    raw_roll.roll   = 0;
    old_flag = false;
  }
};
// 发送的数据结构
struct Write_Data {

  float joint0;     //0102  关节角度
  float joint1;     //0304
  float joint2;     //0506
  float joint3;     //0708
  float joint4;     //0910
  float joint5;     //1112

  // float x;      //1314
  // float y;      //1516
  // float z;      //1718
  // float yaw;        //1920
  // float pitch;      //2122
  // float roll;       //2324


  Write_Data() {
    joint0 = 0.f;
    joint1 = 0.f;
    joint2 = 0.f;
    joint3 = 0.f;
    joint4 = 0.f;
    joint5 = 0.f;
    // x = 0.f;
    // y = 0.f;
    // z = 0.f;
    // yaw = 0.f;
    // pitch = 0.f;
    // roll = 0.f;
  }
};

class SerialPort {
 public:
  SerialPort() = default;
  // explicit SerialPort(std::string _serial_config);
  explicit SerialPort(int config);
  ~SerialPort();
  /**
   * @brief 返回接受数据的结构体
   * 
   * @return Receive_Data 
   */
  inline Receive_Data returnReceive() { return receive_data_; }
 /**
   * @brief 返回位置x
   * 
   * @return float 
   */
  inline float   returnReceiveX() { return receive_data_.x; }
 /**
   * @brief 返回位置y
   * 
   * @return float 
   */
  inline float   returnReceiveY() { return receive_data_.y; }
 /**
   * @brief 返回位置z
   * 
   * @return float 
   */
  inline float   returnReceiveZ() { return receive_data_.z; }
 /**
   * @brief 返回姿态yaw
   * 
   * @return float 
   */
  inline float   returnReceiveYaw() { return receive_data_.yaw; }
 /**
   * @brief 返回姿态pitch
   * 
   * @return float 
   */
  inline float   returnReceivePitch() { return receive_data_.pitch; }
 /**
   * @brief 返回姿态roll
   * 
   * @return float 
   */
  inline float   returnReceiveRoll() { return receive_data_.roll; }


  /**
   * @brief 返回高八位数据 发生数据
   * @param Byte 
   * @return unsigned char 
   */
  inline unsigned char returnHighBit(const int& Byte) {
    exchangebyte_ = (Byte >> 8) & 0xff;

    return exchangebyte_;
  }
  /**
   * @brief 返回低八位数据
   * @param Byte 
   * @return unsigned char 
   */
  inline unsigned char returnLowBit(const int& Byte) {
    exchangebyte_ = Byte & 0xff;

    return exchangebyte_;
  }
  /**
   * @brief 合并数据
   * 
   * @param highbit   高八位数据
   * @param lowbit    低八位数据
   * @return int16_t  合并后数据
   */
  inline int16_t mergeIntoBytes(const unsigned char& highbit,
                                const unsigned char& lowbit) {
    exchangebit_ = (highbit << 8) | lowbit;

    return exchangebit_;
  }

  /**
   * @brief 写入发送数据
   * @param data_type 是否发现目标
   * @param is_shooting 开火命令
   * @param yaw  yaw轴
   * @param pitch pitch轴
   * @param cord 预测坐标
   * @param depth 深度信息
   */
  void writeData(const int16_t& joint0,
                 const int16_t& joint1,
                 const int16_t& joint2,
                 const int16_t& joint3,
                 const int16_t& joint4,
                 const int16_t& joint5
                //  const int16_t& x,
                //  const int16_t& y,
                //  const int16_t& z,
                //  const int16_t& yaw,
                //  const int16_t& pitch,
                //  const int16_t& roll
                );

  void writeData();
  /**
   * @brief 发送数据
   *
   * @param _write_data     需要发送的 Write_Data 结构体
   */
  void writeData(const Write_Data& _write_data);

  /**
   * @brief 发送数据
   *
 * @param  _joint0           关节角度
 * @param  _joint1           关节角度
 * @param  _joint2           关节角度
 * @param  _joint3           关节角度
 * @param  _joint4           关节角度
 * @param  _joint5           关节角度
 * @param  _x                末端位姿x
 * @param  _y                末端位姿y
 * @param  _z                末端位姿z
 * @param  _yaw              末端位姿yaw
 * @param  _pitch            末端位姿pitch
 * @param  _roll             末端位姿roll
   */
  void updataWriteData(const float _joint0, const float _joint1,
                       const float _joint2, const float _joint3,
                       const float _joint4, const float _joint5
                      //  const float _x, const float _y, const float _z, 
                      //  const float _yaw,  
                      //  const float _pitch,
                      //  const float _roll
                      );

  /**
   * @brief 数据转换为结构体
   *
   * @param  _joint0           关节角度
   * @param  _joint1           关节角度
   * @param  _joint2           关节角度
   * @param  _joint3           关节角度
   * @param  _joint4           关节角度
   * @param  _joint5           关节角度
   * @param  _x                末端位姿x
   * @param  _y                末端位姿y
   * @param  _z                末端位姿z
   * @param  _yaw              末端位姿yaw
   * @param  _pitch            末端位姿pitch
   * @param  _roll             末端位姿roll
   * @return Write_Data   返回写入数据结构体
   */
  Write_Data gainWriteData(const float _joint0, const float _joint1,
                           const float _joint2, const float _joint3,
                           const float _joint4, const float _joint5
                          //  const float _x, 
                          //  const float _y, 
                          //  const float _z, 
                          //  const float _yaw,  
                          //  const float _pitch,
                          //  const float _roll
                          );

  /**
   * @brief 接收数据
   */
  void receiveData(); 
  /**
   * @brief 接收数据是否正常
   * @return true  不正常
   * @return false 正常
   */
  bool isEmpty();
  /**
   * @brief 更新数据信息
   */
  void updateReceiveInformation();


 private:
  Serial_Config serial_config_;
  Receive_Data receive_data_;
  Receive_Data last_receive_data_;
  Write_Data    write_data_;

  int           fd;
  int           transform_arr_[4];
  unsigned char write_buff_[WRITE_BUFF_LENGTH];
  unsigned char crc_buff_[CRC_BUFF_LENGTH];
  unsigned char receive_buff_[REC_INFO_LENGTH];
  unsigned char receive_buff_temp_[REC_INFO_LENGTH * 2];
  unsigned char exchangebyte_;

  int16_t joint0_reduction_;
  int16_t joint1_reduction_;
  int16_t joint2_reduction_;
  int16_t joint3_reduction_;
  int16_t joint4_reduction_;
  int16_t joint5_reduction_;
  // int16_t x_reduction_;
  // int16_t y_reduction_;
  // int16_t z_reduction_;
  // int16_t yaw_reduction_;
  // int16_t pitch_reduction_;
  // int16_t roll_reduction_;

  int16_t exchangebit_;

  ssize_t read_message_;
  ssize_t write_message_;

  bool get_flag;

  inline uint8_t checksumCRC(unsigned char* buf, uint16_t len);

  int pre_mode = 0;

/**
 * @brief Get the Data For CRC object
 * @param  joint0           关节角度
 * @param  joint1           关节角度
 * @param  joint2           关节角度
 * @param  joint3           关节角度
 * @param  joint4           关节角度
 * @param  joint5           关节角度
 * @param  x                末端位姿x
 * @param  y                末端位姿y
 * @param  z                末端位姿z
 * @param  yaw              末端位姿yaw
 * @param  pitch            末端位姿pitch
 * @param  roll             末端位姿roll
 */
  void getDataForCRC(const int16_t& joint0, const int16_t& joint1,
                     const int16_t& joint2, const int16_t& joint3,
                     const int16_t& joint4, const int16_t& joint5
                    //  const int16_t& x, const int16_t& y,
                    //  const int16_t& z, const int16_t& yaw,
                    //  const int16_t& pitch, const int16_t& roll
                    );

  /**
 * @brief 获取发送信息
 * @param  joint0           关节角度
 * @param  joint1           关节角度
 * @param  joint2           关节角度
 * @param  joint3           关节角度
 * @param  joint4           关节角度
 * @param  joint5           关节角度
 * @param  x                末端位姿x
 * @param  y                末端位姿y
 * @param  z                末端位姿z
 * @param  yaw              末端位姿yaw
 * @param  pitch            末端位姿pitch
 * @param  roll             末端位姿roll
 * @param  CRC              CRC 校验码
 */
  void getDataForSend(const int16_t& joint0, const int16_t& joint1,
                     const int16_t& joint2, const int16_t& joint3,
                     const int16_t& joint4, const int16_t& joint5,
                    //  const int16_t& x, const int16_t& y,
                    //  const int16_t& z, const int16_t& yaw,
                    //  const int16_t& pitch, const int16_t& roll,
                     const uint8_t& CRC);
};

//CRC8校验表
static constexpr unsigned char CRC8_Table[] = {
  0,   94,  188, 226, 97,  63,  221, 131, 194, 156, 126, 32,  163, 253, 31,
  65,  157, 195, 33,  127, 252, 162, 64,  30,  95,  1,   227, 189, 62,  96,
  130, 220, 35,  125, 159, 193, 66,  28,  254, 160, 225, 191, 93,  3,   128,
  222, 60,  98,  190, 224, 2,   92,  223, 129, 99,  61,  124, 34,  192, 158,
  29,  67,  161, 255, 70,  24,  250, 164, 39,  121, 155, 197, 132, 218, 56,
  102, 229, 187, 89,  7,   219, 133, 103, 57,  186, 228, 6,   88,  25,  71,
  165, 251, 120, 38,  196, 154, 101, 59,  217, 135, 4,   90,  184, 230, 167,
  249, 27,  69,  198, 152, 122, 36,  248, 166, 68,  26,  153, 199, 37,  123,
  58,  100, 134, 216, 91,  5,   231, 185, 140, 210, 48,  110, 237, 179, 81,
  15,  78,  16,  242, 172, 47,  113, 147, 205, 17,  79,  173, 243, 112, 46,
  204, 146, 211, 141, 111, 49,  178, 236, 14,  80,  175, 241, 19,  77,  206,
  144, 114, 44,  109, 51,  209, 143, 12,  82,  176, 238, 50,  108, 142, 208,
  83,  13,  239, 177, 240, 174, 76,  18,  145, 207, 45,  115, 202, 148, 118,
  40,  171, 245, 23,  73,  8,   86,  180, 234, 105, 55,  213, 139, 87,  9,
  235, 181, 54,  104, 138, 212, 149, 203, 41,  119, 244, 170, 72,  22,  233,
  183, 85,  11,  136, 214, 52,  106, 43,  117, 151, 201, 74,  20,  246, 168,
  116, 42,  200, 150, 21,  75,  169, 247, 182, 232, 10,  84,  215, 137, 107,
  53
};
}//namespace uart