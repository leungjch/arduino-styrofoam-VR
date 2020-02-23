#include <MPU9250.h>
#include <Mouse.h>

// an MPU9250 object with the MPU-9250 sensor on I2C bus 0 with address 0x68
MPU9250 IMU(Wire,0x68);
int status;
int buttonState = 0;

void setup() {
  // serial to display data
  Serial.begin(9600);
  //Mouse.begin();

  while(!Serial) {}

  // start communication with IMU 
  status = IMU.begin();
  if (status < 0) {
    Serial.println("IMU initialization unsuccessful");
    Serial.println("Check IMU wiring or try cycling power");
    Serial.print("Status: ");
    Serial.println(status);
    while(1) {}
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the sensor
  IMU.readSensor();
  // display the data
  

//  Serial.print("AccelX: ");
//  Serial.print(IMU.getAccelX_mss(),6);
//  Serial.print("  ");
//  Serial.print("AccelY: ");  
//  Serial.print(IMU.getAccelY_mss(),6);
//  Serial.print("  ");
//  Serial.print("AccelZ: ");  
//  Serial.println(IMU.getAccelZ_mss(),6);
//  
  Serial.print("GX");
  Serial.print(IMU.getGyroX_rads(),6);
  Serial.print("  ");
  Serial.print("GY");  
  Serial.print(IMU.getGyroY_rads(),6);
  Serial.print("  ");
  Serial.print("GZ");  
  Serial.println(IMU.getGyroZ_rads(),6);
  Serial.print("  ");
//
//  Serial.print("MagX: ");  
//  Serial.print(IMU.getMagX_uT(),6);
//  Serial.print("  ");  
//  Serial.print("MagY: ");
//  Serial.print(IMU.getMagY_uT(),6);
//  Serial.print("  ");
//  Serial.print("MagZ: ");  
//  Serial.println(IMU.getMagZ_uT(),6);
//  
//  Serial.print("Temperature in C: ");
//  Serial.println(IMU.getTemperature_C(),6);
Serial.println();

  // read the state of the pushbutton value:
  //Mouse.move(IMU.getGyroY_rads()*25,IMU.getGyroX_rads()*25);
  delay(1);
}
