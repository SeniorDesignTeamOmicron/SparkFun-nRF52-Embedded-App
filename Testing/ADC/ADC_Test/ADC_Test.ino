// Import libraries (BLEPeripheral depends on SPI)
#include <SPI.h>
#include <BLEPeripheral.h>
#include "nrfx_saadc.h"

///////////////////////
// BLE Advertisments //
///////////////////////
const char * localName = "ADC Test";
BLEPeripheral blePeriph;
BLEService bleServ("1207");
BLEIntCharacteristic ADCChar("1207", BLENotify);
BLEDescriptor ADCDescriptor("2901", "SAADC Val");

uint8_t val;

void setup()
{
  Serial.begin(115200); // Set up serial at 115200 baud

  val = 0;

  setupBLE();
}

void setupBLE()
{
  // Advertise name and service:
  blePeriph.setDeviceName(localName);
  blePeriph.setLocalName(localName);
  blePeriph.setAdvertisedServiceUuid(bleServ.uuid());

  // Add service
  blePeriph.addAttribute(bleServ);

  // Add characteristic
  blePeriph.addAttribute(ADCChar);
  blePeriph.addAttribute(ADCDescriptor);

  // Now that device, service, characteristic are set up,
  // initialize BLE:
  blePeriph.begin();

  // Set cnt characteristics to default values
  ADCChar.setValue(val);
}

void loop()
{
  BLECentral central = blePeriph.central();

  if (central) {
    // central connected to peripheral
    Serial.print(F("Connected to central: "));
    Serial.println(central.address());

    while (central.connected()) {
      if (ADCChar.value() != val {
      ADCChar.setValue(val);
      }
    }

    // central disconnected
    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
  }
}
