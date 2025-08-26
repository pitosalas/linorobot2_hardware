/*
 * Encoder Test Tool
 * 
 * Tests encoder functionality without running motors.
 * Manually rotate wheels to see encoder counts and RPM values.
 * 
 * Usage:
 *   cd /home/pitosalas/linorobot2_hardware/test_enc
 *   pio run --target upload
 *   pio device monitor
 * 
 * Output format: LEFT count: X, rpm: Y, RIGHT count: Z, rpm: W
 */

#include <Arduino.h>
#include <Wire.h>

// Include your config
#include "config.h"

// Include encoder library
#define ENCODER_USE_INTERRUPTS
#define ENCODER_OPTIMIZE_INTERRUPTS
#include "encoder.h"

// Create encoder objects
Encoder motor1_encoder(MOTOR1_ENCODER_A, MOTOR1_ENCODER_B, COUNTS_PER_REV1, MOTOR1_ENCODER_INV);
Encoder motor2_encoder(MOTOR2_ENCODER_A, MOTOR2_ENCODER_B, COUNTS_PER_REV2, MOTOR2_ENCODER_INV);

void setup() {
    Serial.begin(921600);
    
    // Initialize I2C (if needed)
    Wire.begin(SDA_PIN, SCL_PIN);
    
    Serial.println("Encoder Test Program");
    Serial.println("Move wheels manually to see encoder readings");
    Serial.println("Format: Motor1_Counts, Motor1_RPM, Motor2_Counts, Motor2_RPM");
    Serial.println("---");
}

void loop() {
    // Get encoder counts
    long motor1_counts = motor1_encoder.read();
    long motor2_counts = motor2_encoder.read();
    
    // Get RPM
    float motor1_rpm = motor1_encoder.getRPM();
    float motor2_rpm = motor2_encoder.getRPM();
    
    // Print data
    Serial.print("LEFT count: ");
    Serial.print(motor1_counts);
    Serial.print(", rpm: ");
    Serial.print(motor1_rpm, 2);
    Serial.print(", RIGHT count: ");
    Serial.print(motor2_counts);
    Serial.print(", rpm:");
    Serial.println(motor2_rpm, 2);
    
    delay(100); // 10Hz update rate
}