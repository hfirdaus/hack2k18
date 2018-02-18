/*#include <Wire.h>
#include "ADXL362DMA.h"
#include "cellular_hal.h"

SYSTEM_THREAD(ENABLED);

ADXL362DMA accel(SPI,A2);

int I2C_Address = 0xA7 >> 1;

int X0, X1, Y0, Y1, Z1, Z0;
int X,Y,Z,T;

STARTUP(cellular_credentials_set("isp.telus.com", "", "", NULL));

void setup(){
    Serial.begin(9600);
    while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
    }
    Serial.println("Start : \n------------------------------------");

//    Wire.begin();
//    setReg(0x2D, 0xA);
}


void loop(){

    accel.readXYZT(X,Y,Z,T);

/*
    X0 = getData(0x32);
    X1 = getData(0x33);
    X = ((X1 << 8)  + X0) / 256.0;

    Y0 = getData(0x34);
    Y1 = getData(0x35);
    Y = ((Y1 << 8)  + Y0) / 256.0;

    Z0 = getData(0x36);
    Z1 = getData(0x37);
    Z = ((Z1 << 8)  + Z0) / 256.0;
*/
  /*  Serial.print("X= ");

    Serial.print(X);
    Serial.print("    Y= ");
    Serial.print(Y);
    Serial.print("    Z= ");
    Serial.println(Z);
    Serial.print("    T= ");
    Serial.println(T);


  Serial.print("YES");
    delay(10);
}

void setReg(int reg, int data){
//    Wire.beginTransmission(I2C_Address);
//    Wire.write(reg);
//    Wire.write(data);
//    Wire.endTransmission();
}

int getData(int reg){
//    Wire.beginTransmission(I2C_Address);
//    Wire.write(reg);
//    Wire.endTransmission();

//    Wire.requestFrom(I2C_Address,1);

//    if(Wire.available()<=1){
//        return Wire.read();
//    }
}
*/
