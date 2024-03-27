#pragma once 

#define ENABLE_BF_SPINDLE true

// Comment to hide debugging info
//#define DEBUG_BF_SPINDLE

// Driver is a Adafruit TB6612 
#define BF_SPINDLE_DRIVER_STBY_PIN 42

#define BF_SPINDLE_DRIVER_PWM_A_PIN 44
#define BF_SPINDLE_DRIVER_AIN1_PIN  40
#define BF_SPINDLE_DRIVER_AIN2_PIN  63

#define BF_SPINDLE_DRIVER_PWM_B_PIN 6
#define BF_SPINDLE_DRIVER_BIN1_PIN 64
#define BF_SPINDLE_DRIVER_BIN2_PIN 59

// Configuration_adv settings 

#define BF_SPINDLE_ENABLE_ACTIVE_STATE HIGH

// comment out to remove PWM support 
#define BF_SPINDLE_USE_PWM 
#define BF_SPINDLE_DRIVER_CHANGE_DIR true
#define BF_SPINDLE_DRIVER_CHANGE_DIR_STOP true
#define BF_SPINDLE_DRIVER_INVERT_DIR false

#define BF_SPINDLE_DRIVER_POWERON_DELAY 5000 // ms
#define BF_SPINDLE_DRIVER_POWEROFF_DELAY 5000 // ms

#define BF_SPINDLE_FREQUENCY 500 // 2500 original
#define BF_SPINDLE_SPEED_RPM_MIN 0
#define BF_SPINDLE_SPEED_RPM_MAX 10
#define BF_SPINDLE_SPEED_RPM_START 1 // M3/M4 speed with no command


/**
 * Speed / Power can be set ('M3 S') and displayed in terms of:
 *  - PWM255  (S0 - S255)
 *  - PERCENT (S0 - S100)
 *  - RPM     (S0 - S50000)  Best for use with a spindle
 *  - SERVO   (S0 - S180)
 */

#define BF_SPINDLE_POWER_UNIT PWM255 

// The set up below is what is used in spindle_laser.cpp
#define SPINDLE_PWM_A_PIN         BF_SPINDLE_DRIVER_PWM_A_PIN  
#define SPINDLE_DIR_A1_PIN        BF_SPINDLE_DRIVER_AIN1_PIN
#define SPINDLE_DIR_A2_PIN        BF_SPINDLE_DRIVER_AIN2_PIN

#define SPINDLE_PWM_B_PIN         BF_SPINDLE_DRIVER_PWM_B_PIN  
#define SPINDLE_DIR_B1_PIN        BF_SPINDLE_DRIVER_BIN1_PIN
#define SPINDLE_DIR_B2_PIN        BF_SPINDLE_DRIVER_BIN2_PIN


// Note the pins in this file override defaults in pins_RAMPS.h)
// set default pins for marlin to behave and know we have a spindle 
// Specifically the pins: 
//  SPINDLE_LASER_ENA_PIN
//  SPINDLE_LASER_PWM_PIN   
//  SPINDLE_DIR_PIN      