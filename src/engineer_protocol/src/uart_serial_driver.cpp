#include "engineer_protocol/uart_serial_driver.hpp"

#define RELEASE

namespace uart{
std::string idntifier_green = fmt::format(fg(fmt::color::green) | fmt::emphasis::bold, "uart_serial");
std::string idntifier_red   = fmt::format(fg(fmt::color::red)   | fmt::emphasis::bold, "uart_serial");

SerialPort::SerialPort(int config) {
  if(config == 1){
    serial_config_.preferred_device = "/dev/ttyUSB0";
    serial_config_.set_baudrate = 1;
    serial_config_.show_serial_information  = 1;
  }

  const char* DeviceName[] = {serial_config_.preferred_device.c_str(), "/dev/ttyUSB1", "/dev/ttyUSB2", "/dev/ttyUSB3", "/dev/ttyACM0", "/dev/ttyACM1"};

  struct termios newstate;
  bzero(&newstate, sizeof(newstate));

  for (size_t i = 0; i != sizeof(DeviceName) / sizeof(char*); ++i) {
    fd = open(DeviceName[i], O_RDWR | O_NONBLOCK | O_NOCTTY | O_NDELAY);
    if (fd == -1) {
      fmt::print("[{}] Open serial device failed: {}\n", idntifier_red, DeviceName[i]);
    } else {
      fmt::print("[{}] Open serial device success: {}\n", idntifier_green, DeviceName[i]);

      break;
    }
  }

  switch (serial_config_.set_baudrate) {
    case 1:
      cfsetospeed(&newstate, B115200);
      cfsetispeed(&newstate, B115200);
      break;
    case 10:
      cfsetospeed(&newstate, B921600);
      cfsetispeed(&newstate, B921600);
      break;
    default:
      cfsetospeed(&newstate, B115200);
      cfsetispeed(&newstate, B115200);
      break;
  }

  newstate.c_cflag |= CLOCAL | CREAD;
  newstate.c_cflag &= ~CSIZE;
  newstate.c_cflag &= ~CSTOPB;
  newstate.c_cflag |= CS8;
  newstate.c_cflag &= ~PARENB;

  newstate.c_cc[VTIME] = 0;
  newstate.c_cc[VMIN]  = 0;

  tcflush(fd, TCIOFLUSH);
  tcsetattr(fd, TCSANOW, &newstate);
}

SerialPort::~SerialPort(void) {
  if (!close(fd)) { fmt::print("[{}] Close serial device success: {}\n", idntifier_green, fd); }
}

void SerialPort::receiveData() {
  //接收数据清零
  memset(receive_buff_, 0, REC_INFO_LENGTH * 2);
  //接收数据
  read_message_ = read(fd, receive_buff_temp_, sizeof(receive_buff_temp_));
  // fmt::print("[info] in 10 {}\n", sizeof(receive_buff_temp_));
  // fmt::print("[info] in 10 {} {}\n", receive_buff_temp_[0], receive_buff_temp_[1]);
  for(int i = 0; i != sizeof(receive_buff_temp_); ++i) {
    // fmt::print("{:d}", receive_buff_temp_[i]);
    if(receive_buff_temp_[i] == 'S' && receive_buff_temp_[i + sizeof(receive_buff_) - 1] == 'E'){
      if(!get_flag){
        get_flag = true;
      }
      fmt::print("[info] insert {:d}\n", receive_buff_temp_[i]);
      if(serial_config_.show_serial_information == 1){
        fmt::print("[{}] receiveData() ->", idntifier_green);
        for(size_t j = 0; j != sizeof(receive_buff_); ++j){
          receive_buff_[j] = receive_buff_temp_[i + j];
          fmt::print(" {}", receive_buff_[j]);
        }
        fmt::print("\n");
      } else {
        for(size_t j = 0; j != sizeof(receive_buff_); ++j){
          receive_buff_[j] = receive_buff_temp_[i + j];
        }
      }
      break;
    }
  }
  fmt::print("\n");
  tcflush(fd, TCIFLUSH);
}

void SerialPort::writeData(const int16_t& joint0,
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
                          )
{
  getDataForSend(joint0, joint1, joint2, joint3, joint4, joint5, 
                //  x, y, z, yaw, pitch, roll, 
                 0);
  write_buff_[0]='S';
  write_buff_[14]='E';
  write_message_ = write(fd, write_buff_, sizeof(write_buff_));
  //memset(write_buff_, 0, sizeof(write_buff_));
  if (serial_config_.show_serial_information == 1) {
    joint0_reduction_   = mergeIntoBytes(write_buff_[2],  write_buff_[1]);
    joint1_reduction_   = mergeIntoBytes(write_buff_[4],  write_buff_[3]);
    joint2_reduction_   = mergeIntoBytes(write_buff_[6],  write_buff_[5]);
    joint3_reduction_   = mergeIntoBytes(write_buff_[8],  write_buff_[7]);
    joint4_reduction_   = mergeIntoBytes(write_buff_[10],  write_buff_[9]);
    joint5_reduction_   = mergeIntoBytes(write_buff_[12],  write_buff_[11]);
    // x_reduction_        = mergeIntoBytes(write_buff_[14],  write_buff_[13]);
    // y_reduction_        = mergeIntoBytes(write_buff_[16],  write_buff_[15]);
    // z_reduction_        = mergeIntoBytes(write_buff_[18],  write_buff_[17]);
    // yaw_reduction_      = mergeIntoBytes(write_buff_[20],  write_buff_[19]);
    // pitch_reduction_    = mergeIntoBytes(write_buff_[22],  write_buff_[21]);
    // roll_reduction_     = mergeIntoBytes(write_buff_[24],  write_buff_[23]);
    fmt::print("[{}] writeData() ->", idntifier_green);
    for (size_t i = 0; i < 1; ++i) { fmt::print(" {}", write_buff_[i]); }
      fmt::print(" {} {} {} {} {} {}",
      // fmt::print(" {} {} {} {} {} {} {} {} {} {} {} {}",
      static_cast<float>(joint0_reduction_) / 100,
      static_cast<float>(joint1_reduction_) / 100,
      static_cast<float>(joint2_reduction_) / 100,
      static_cast<float>(joint3_reduction_) / 100,
      static_cast<float>(joint4_reduction_) / 100,
      static_cast<float>(joint5_reduction_) / 100);
      // static_cast<float>(x_reduction_) / 100,
      // static_cast<float>(y_reduction_) / 100,
      // static_cast<float>(z_reduction_) / 100,
      // static_cast<float>(yaw_reduction_) / 100,
      // static_cast<float>(pitch_reduction_) / 100,
      // static_cast<float>(roll_reduction_) / 100);
    for (size_t i = 24; i < 26; ++i) { fmt::print(" {}", write_buff_[i]); }
    fmt::print("\n");

    joint0_reduction_ = 0x0000;
    joint1_reduction_ = 0x0000;
    joint2_reduction_ = 0x0000;
    joint3_reduction_ = 0x0000;
    joint4_reduction_ = 0x0000;
    joint5_reduction_ = 0x0000;
    // x_reduction_      = 0x0000;
    // y_reduction_      = 0x0000;
    // z_reduction_      = 0x0000;
    // yaw_reduction_    = 0x0000;
    // pitch_reduction_  = 0x0000;
    // roll_reduction_   = 0x0000;
  }
}

void SerialPort::writeData(const Write_Data& _write_data) {
  write_data_.joint0    = _write_data.joint0 * 100;
  write_data_.joint1    = _write_data.joint1 * 100;
  write_data_.joint2    = _write_data.joint2 * 100;
  write_data_.joint3    = _write_data.joint3 * 100;
  write_data_.joint4    = _write_data.joint4 * 100;
  write_data_.joint5    = _write_data.joint5 * 100;
  // write_data_.x         = _write_data.x * 100;
  // write_data_.y         = _write_data.y * 100;
  // write_data_.z         = _write_data.z * 100;
  // write_data_.yaw       = _write_data.yaw * 100;
  // write_data_.pitch     = _write_data.pitch * 100;
  // write_data_.roll      = _write_data.roll * 100;
  writeData(write_data_.joint0,
            write_data_.joint1,
            write_data_.joint2,
            write_data_.joint3,
            write_data_.joint4,
            write_data_.joint5
            // write_data_.x,
            // write_data_.y,
            // write_data_.z,
            // write_data_.yaw,
            // write_data_.pitch,
            // write_data_.roll
          );
}

void SerialPort::writeData() {
  writeData(write_data_.joint0,
            write_data_.joint1,
            write_data_.joint2,
            write_data_.joint3,
            write_data_.joint4,
            write_data_.joint5
            // write_data_.x,
            // write_data_.y,
            // write_data_.z,
            // write_data_.yaw,
            // write_data_.pitch,
            // write_data_.roll
          );
}

//this active
void SerialPort::updataWriteData(const float _joint0, const float _joint1,
                                const float _joint2, const float _joint3,
                                const float _joint4, const float _joint5
                                // const float _x, const float _y, const float _z, 
                                // const float _yaw,  
                                // const float _pitch,
                                // const float _roll
                                ){
  write_data_.joint0    = _joint0 * 100;
  write_data_.joint1    = _joint1 * 100;
  write_data_.joint2    = _joint2 * 100;
  write_data_.joint3    = _joint3 * 100;
  write_data_.joint4    = _joint4 * 100;
  write_data_.joint5    = _joint5 * 100;
  // write_data_.x         = _x * 100;
  // write_data_.y         = _y * 100;
  // write_data_.z         = _z * 100;
  // write_data_.yaw       = _yaw * 100;
  // write_data_.pitch     = _pitch * 100;
  // write_data_.roll      = _roll * 100;
  writeData();
}

Write_Data SerialPort::gainWriteData(const float _joint0, const float _joint1,
                                    const float _joint2, const float _joint3,
                                    const float _joint4, const float _joint5
                                    // const float _x, 
                                    // const float _y, 
                                    // const float _z, 
                                    // const float _yaw,  
                                    // const float _pitch,
                                    // const float _roll
                                    ){
  Write_Data write_data;
  write_data_.joint0    = _joint0 * 100;
  write_data_.joint1    = _joint1 * 100;
  write_data_.joint2    = _joint2 * 100;
  write_data_.joint3    = _joint3 * 100;
  write_data_.joint4    = _joint4 * 100;
  write_data_.joint5    = _joint5 * 100;
  // write_data_.x         = _x * 100;
  // write_data_.y         = _y * 100;
  // write_data_.z         = _z * 100;
  // write_data_.yaw       = _yaw * 100;
  // write_data_.pitch     = _pitch * 100;
  // write_data_.roll      = _roll * 100;
  return write_data;
}

uint8_t SerialPort::checksumCRC(unsigned char* buf, uint16_t len) {
  uint8_t check = 0;

  while (len--) { check = CRC8_Table[check ^ (*buf++)]; }

  return check;
}

void SerialPort::getDataForCRC(const int16_t& joint0, const int16_t& joint1,
                               const int16_t& joint2, const int16_t& joint3,
                               const int16_t& joint4, const int16_t& joint5
                              //  const int16_t& x, const int16_t& y,
                              //  const int16_t& z, const int16_t& yaw,
                              //  const int16_t& pitch, const int16_t& roll
                              ){
  crc_buff_[0]  = 0x53;
  crc_buff_[1]  = returnLowBit(joint0);
  crc_buff_[2]  = returnHighBit(joint0);
  crc_buff_[3]  = returnLowBit(joint1);
  crc_buff_[4]  = returnHighBit(joint1);
  crc_buff_[5]  = returnLowBit(joint2);
  crc_buff_[6]  = returnHighBit(joint2);
  crc_buff_[7]  = returnLowBit(joint3);
  crc_buff_[8]  = returnHighBit(joint3);
  crc_buff_[9]  = returnLowBit(joint4);
  crc_buff_[10] = returnHighBit(joint4);
  crc_buff_[11] = returnLowBit(joint5);
  crc_buff_[12] = returnHighBit(joint5);
  // crc_buff_[13] = returnLowBit(x);
  // crc_buff_[14] = returnHighBit(x);
  // crc_buff_[15] = returnLowBit(y);
  // crc_buff_[16] = returnHighBit(y);
  // crc_buff_[17] = returnLowBit(z);
  // crc_buff_[18] = returnHighBit(z);
  // crc_buff_[19] = returnLowBit(yaw);
  // crc_buff_[20] = returnHighBit(yaw);
  // crc_buff_[21] = returnLowBit(pitch);
  // crc_buff_[22] = returnHighBit(pitch);
  // crc_buff_[23] = returnLowBit(roll);
  // crc_buff_[24] = returnHighBit(roll);
}

void SerialPort::getDataForSend(const int16_t& joint0, const int16_t& joint1,
                                const int16_t& joint2, const int16_t& joint3,
                                const int16_t& joint4, const int16_t& joint5,
                                // const int16_t& x, const int16_t& y,
                                // const int16_t& z, const int16_t& yaw,
                                // const int16_t& pitch, const int16_t& roll,
                                const uint8_t& CRC){
  write_buff_[0]  = 0x53;
  write_buff_[1]  = returnLowBit(joint0);
  write_buff_[2]  = returnHighBit(joint0);
  write_buff_[3]  = returnLowBit(joint1);
  write_buff_[4]  = returnHighBit(joint1);
  write_buff_[5]  = returnLowBit(joint2);
  write_buff_[6]  = returnHighBit(joint2);
  write_buff_[7]  = returnLowBit(joint3);
  write_buff_[8]  = returnHighBit(joint3);
  write_buff_[9]  = returnLowBit(joint4);
  write_buff_[10] = returnHighBit(joint4);
  write_buff_[11] = returnLowBit(joint5);
  write_buff_[12] = returnHighBit(joint5);
  // write_buff_[13] = returnLowBit(x);
  // write_buff_[14] = returnHighBit(x);
  // write_buff_[15] = returnLowBit(y);
  // write_buff_[16] = returnHighBit(y);
  // write_buff_[17] = returnLowBit(z);
  // write_buff_[18] = returnHighBit(z);
  // write_buff_[19] = returnLowBit(yaw);
  // write_buff_[20] = returnHighBit(yaw);
  // write_buff_[21] = returnLowBit(pitch);
  // write_buff_[22] = returnHighBit(pitch);
  // write_buff_[23] = returnLowBit(roll);
  // write_buff_[24] = returnHighBit(roll);

  write_buff_[25] = CRC & 0xff;
  write_buff_[26] = 0x45;                        
}

bool SerialPort::isEmpty() {
  if(get_flag) {
    receive_data_.old_flag = false;
    get_flag = false;
    return false;
  }
  else {
    receive_data_.old_flag = true;
    get_flag = false;
    return true;
  }
}

void SerialPort::updateReceiveInformation(){
  receiveData();
  fmt::print("[info] in 1\n");
  if(isEmpty()) {
    return;
  }
  
  for(size_t i = 0; i != sizeof(receive_data_.raw_x.arr_x); ++i){
    receive_data_.raw_x.arr_x[i] = receive_buff_[1 + i];
  }
  receive_data_.x = (float)receive_data_.raw_x.x / 100.0;
  // fmt::print("[rec info] x:{}\n",receive_data_.x);

  for(size_t i = 0; i != sizeof(receive_data_.raw_y.arr_y); ++i){
    receive_data_.raw_y.arr_y[i] = receive_buff_[3 + i];
  }
  receive_data_.y = (float)receive_data_.raw_y.y / 100.0;
  // fmt::print("[rec info] y:{}\n",receive_data_.y);

  for(size_t i = 0; i != sizeof(receive_data_.raw_z.arr_z); ++i){
    receive_data_.raw_z.arr_z[i] = receive_buff_[5 + i];
  }
  receive_data_.z = (float)receive_data_.raw_z.z / 100.0;
  // fmt::print("[rec info] z:{}\n",receive_data_.z);

  for(size_t i = 0; i != sizeof(receive_data_.raw_yaw.arr_yaw); ++i){
    receive_data_.raw_yaw.arr_yaw[i] = receive_buff_[7 + i];
  }
  receive_data_.yaw = (float)receive_data_.raw_yaw.yaw / 100.0;
  // fmt::print("[rec info] yaw:{}\n",receive_data_.yaw);

  for(size_t i = 0; i != sizeof(receive_data_.raw_pitch.arr_pitch); ++i){
    receive_data_.raw_pitch.arr_pitch[i] = receive_buff_[9 + i];
  }
  receive_data_.pitch = (float)receive_data_.raw_pitch.pitch / 100.0;
  // fmt::print("[rec info] pitch:{}\n",receive_data_.pitch);

  for(size_t i = 0; i != sizeof(receive_data_.raw_roll.arr_roll); ++i){
    receive_data_.raw_roll.arr_roll[i] = receive_buff_[11 + i];
  }
  receive_data_.roll = (float)receive_data_.raw_roll.roll / 100.0;
  // fmt::print("[rec info] roll:{}\n",receive_data_.roll);
}

}   //namespace uart




