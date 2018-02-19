// This #include statement was automatically added by the Particle IDE.
#include "cellular_hal.h"
#include "Particle.h"
#include "ADXL362DMA.h"
// Set the TELUS APN
STARTUP(cellular_credentials_set("isp.telus.com", "", "", NULL));

SYSTEM_THREAD(ENABLED);

ADXL362DMA accel(SPI,A2);
int X,Y,Z,T;

const int ACCEL_INT_PIN = D2;

void setup() {
    // Set the keep-alive value for TELUS SIM card
    Particle.keepAlive(30);
    Serial.begin(9600);
//    while (!Serial) {
//    ; // wait for serial port to connect. Needed for Leonardo only
//    }
//    Serial.println("Start : \n------------------------------------");

}

void loop () {
  Serial.print("NO");
//  accel.readXYZT(X,Y,Z,T);
//
  int awake = ((accel.readStatus() & accel.STATUS_AWAKE) != 0);
//
//  Serial.print(X);
//  Serial.print("    Y= ");
////  Serial.print(Y);
//  Serial.print("    Z= ");
//  Serial.println(Z);
//  Serial.print("    T= ");
//  Serial.println(T);

  Serial.print(awake);
  delay(10);

}
