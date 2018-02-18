/*// This #include statement was automatically added by the Particle IDE.
#include "ADXL362DMA.h"

#include "cellular_hal.h"
// Set the TELUS APN
STARTUP(cellular_credentials_set("isp.telus.com", "", "", NULL));

SYSTEM_THREAD(ENABLED);

ADXL362DMA accel(SPI,A2);

const int ACCEL_INT_PIN = D2;

void setup() {
    // Set the keep-alive value for TELUS SIM card
    Particle.keepAlive(30);

}

void loop () {

}
*/
