// Copyright (c) 2021 Juan Miguel Jimeno
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GENDRV_CONFIG_H
#define GENDRV_CONFIG_H

#define LED_PIN LED_BUILTIN //used for debugging status

//uncomment the base you're building
#define LINO_BASE DIFFERENTIAL_DRIVE       // 2WD and Tracked robot w/ 2 motors
// #define LINO_BASE SKID_STEER            // 4WD robot
// #define LINO_BASE MECANUM               // Mecanum drive robot

//uncomment the motor driver you're using
// #define USE_GENERIC_2_IN_MOTOR_DRIVER      // Motor drivers with 2 Direction Pins(INA, INB) and 1 PWM(ENABLE) pin ie. L298, L293, VNH5019
// #define USE_GENERIC_1_IN_MOTOR_DRIVER   // Motor drivers with 1 Direction Pin(INA) and 1 PWM(ENABLE) pin.
#define USE_BTS7960_MOTOR_DRIVER        // BTS7970 Motor Driver
// #define USE_ESC_MOTOR_DRIVER            // Motor ESC for brushless motors

//uncomment the IMU you're using
// #define USE_GY85_IMU
// #define USE_MPU6050_IMU
// #define USE_MPU9150_IMU
// #define USE_MPU9250_IMU
#define USE_QMI8658_IMU
// #define USE_HMC5883L_MAG
// #define USE_AK8963_MAG
// #define USE_AK8975_MAG
#define USE_AK09918_MAG
// #define USE_QMC5883L_MAG

//#define MAG_BIAS { 1.32662e-05, -5.43438e-05, 1.06151e-05 } // before flipping the board
#define MAG_BIAS {6.93214e-05, 2.81223e-05, -6.09672e-05}
// #define IMU_TWEAK {}
// #define MAG_TWEAK {}

#define K_P 0.6                             // P constant
#define K_I 0.8                             // I constant
#define K_D 0.0                            // D constant

#define ACCEL_COV { 0.01, 0.01, 0.01 }
#define GYRO_COV { 0.001, 0.001, 0.001 }
#define ORI_COV { 0.01, 0.01, 0.01 }
#define MAG_COV { 1e-12, 1e-12, 1e-12 }
#define POSE_COV { 0.001, 0.001, 0.001, 0.001, 0.001, 0.001 }
#define TWIST_COV { 0.001, 0.001, 0.001, 0.003, 0.003, 0.003 }

/*
ROBOT ORIENTATION
         FRONT
    MOTOR1  MOTOR2  (2WD/ACKERMANN)
    MOTOR3  MOTOR4  (4WD/MECANUM)
         BACK
*/

//define your robot' specs here
#define MOTOR_MAX_RPM 150                   // motor's max RPM
#define MAX_RPM_RATIO 0.60                  // MAX_RPM_RATIO calcs MAX_RPM_ALLOWED = MOTOR_MAX_RPM * MAX_RPM_RATIO
#define MOTOR_OPERATING_VOLTAGE 12          // motor's operating voltage (used to calculate max RPM)
#define MOTOR_POWER_MAX_VOLTAGE 12          // max voltage of the motor's power source (used to calculate max RPM)
#define MOTOR_POWER_MEASURED_VOLTAGE 12     // current voltage reading of the power connected to the motor (used for calibration)
#define COUNTS_PER_REV1 985                 // wheel1 encoder's no of ticks per rev
#define COUNTS_PER_REV2 985                 // wheel2 encoder's no of ticks per rev
#define COUNTS_PER_REV3 450                 // wheel3 encoder's no of ticks per rev
#define COUNTS_PER_REV4 450                 // wheel4 encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.063               // wheel's diameter in meters
#define LR_WHEELS_DISTANCE 0.202          // distance between left and right wheels
#define PWM_BITS 10                         // PWM Resolution of the microcontroller
#define PWM_FREQUENCY 20000                 // PWM Frequency
#define SERVO_BITS 12                       // Servo PWM resolution
#define SERVO_FREQ 50                       // Servo PWM frequency

// INVERT ENCODER COUNTS
#define MOTOR1_ENCODER_INV true
#define MOTOR2_ENCODER_INV true
#define MOTOR3_ENCODER_INV false
#define MOTOR4_ENCODER_INV false

// INVERT MOTOR DIRECTIONS
#define MOTOR1_INV false
#define MOTOR2_INV false
#define MOTOR3_INV false
#define MOTOR4_INV false

// ENCODER PINS
#define MOTOR1_ENCODER_A 34
#define MOTOR1_ENCODER_B 35

#define MOTOR2_ENCODER_A 16
#define MOTOR2_ENCODER_B 27

#define MOTOR3_ENCODER_A -1
#define MOTOR3_ENCODER_B -1

#define MOTOR4_ENCODER_A -1
#define MOTOR4_ENCODER_B -1

// MOTOR PINS
#ifdef USE_GENERIC_2_IN_MOTOR_DRIVER
  #define MOTOR1_PWM 25 //Pin no 21 is not a PWM pin on Teensy 4.x, you can swap it with pin no 1 instead.
  #define MOTOR1_IN_A 21
  #define MOTOR1_IN_B 17

  #define MOTOR2_PWM 26
  #define MOTOR2_IN_A 22
  #define MOTOR2_IN_B 23

  #define MOTOR3_PWM -1
  #define MOTOR3_IN_A -1
  #define MOTOR3_IN_B -1

  #define MOTOR4_PWM -1
  #define MOTOR4_IN_A -1
  #define MOTOR4_IN_B -1

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif

#ifdef USE_GENERIC_1_IN_MOTOR_DRIVER
  #define MOTOR1_PWM 21 //Pin no 21 is not a PWM pin on Teensy 4.x, you can use pin no 1 instead.
  #define MOTOR1_IN_A 20
  #define MOTOR1_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define MOTOR2_PWM 5
  #define MOTOR2_IN_A 6
  #define MOTOR2_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define MOTOR3_PWM 22
  #define MOTOR3_IN_A 23
  #define MOTOR3_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define MOTOR4_PWM 4
  #define MOTOR4_IN_A 3
  #define MOTOR4_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif

#ifdef USE_BTS7960_MOTOR_DRIVER
  #define MOTOR1_PWM 25 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR1_IN_A 17
  #define MOTOR1_IN_B 21

  #define MOTOR2_PWM 26 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR2_IN_A 23
  #define MOTOR2_IN_B 22

  #define MOTOR3_PWM -1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR3_IN_A -1
  #define MOTOR3_IN_B -1

  #define MOTOR4_PWM -1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR4_IN_A -1
  #define MOTOR4_IN_B -1

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif

#ifdef USE_ESC_MOTOR_DRIVER
  #define MOTOR1_PWM 21 //Pin no 21 is not a PWM pin on Teensy 4.x. You can use pin no 1 instead.
  #define MOTOR1_IN_A -1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR1_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define MOTOR2_PWM 5
  #define MOTOR2_IN_A -1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR2_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define MOTOR3_PWM 22
  #define MOTOR3_IN_A -1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR3_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define MOTOR4_PWM 4
  #define MOTOR4_IN_A -1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR4_IN_B -1 //DON'T TOUCH THIS! This is just a placeholder

  #define PWM_MAX 400
  #define PWM_MIN -PWM_MAX
#endif

#define AGENT_IP { 192, 168, 1, 100 }  // eg IP of the desktop computer
#define AGENT_PORT 8888
// Enable WiFi with null terminated list of multiple APs SSID and password
// #define WIFI_AP_LIST {{"WIFI_SSID", "WIFI_PASSWORD"}, {NULL}}
#define WIFI_MONITOR 2 // min. period to send wifi signal strength to syslog
// #define USE_ARDUINO_OTA
// #define USE_SYSLOG
#define SYSLOG_SERVER { 192, 168, 1, 100 }  // eg IP of the desktop computer
#define SYSLOG_PORT 514
#define DEVICE_HOSTNAME "gendrv"
#define APP_NAME "hardware"
// #define USE_LIDAR_UDP  // send lidar data to udp server
#define LIDAR_RXD 4
#define LIDAR_SERIAL 1 // uart number
#define LIDAR_BAUDRATE 230400
#define LIDAR_SERVER { 192, 168, 1, 100 }  // eg IP of the desktop computer
#define LIDAR_PORT 8889
#define BAUDRATE 921600
#define SDA_PIN 32 // specify I2C pins
#define SCL_PIN 33
#define NODE_NAME "gendrv"
// #define TOPIC_PREFIX "gendrv/"
// #define CONTROL_TIMER 20
// #define BATTERY_TIMER 2000

// battery voltage ADC pin
// #define BATTERY_PIN 33
// 3.3V ref, 12 bits ADC, 33k + 10k voltage divider
#define BATTERY_ADJUST(v) ((v) * (3.3 / 4096 * (33 + 10) / 10))
#define USE_INA219
#define BATTERY_DIP 0.98  // battery voltage drop alert
// #define BATTERY_CAP 2.0  // battery capacity Ah
// #define BATTERY_MIN 9.0  // battery minimal voltage
// #define BATTERY_MAX 12.6 // battery maximum voltage
// #define TRIG_PIN 31 // ultrasonic sensor HC-SR04
// #define ECHO_PIN 32
#define USE_SHORT_BRAKE // for shorter stopping distance
// #define WDT_TIMEOUT 60 // Sec
#define BOARD_INIT { \
    pinMode(MOTOR1_PWM, OUTPUT); \
    digitalWrite(MOTOR1_PWM, HIGH); \
    pinMode(MOTOR2_PWM, OUTPUT); \
    digitalWrite(MOTOR2_PWM, HIGH); \
    Wire.begin(SDA_PIN, SCL_PIN); \
    Wire.setClock(400000); \
}
// #define BOARD_INIT_LATE {}
// #define BOARD_LOOP {}

#ifdef USE_SYSLOG
#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){ \
    syslog(LOG_ERR, "%s RCCHECK failed %d", __FUNCTION__, temp_rc); \
    return false; }}
#else
#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){ \
    flashLED(3); \
    return false; }} // do not block
#endif

#endif
