// Import libraries (BLEPeripheral depends on SPI)
#include <SPI.h>
#include <BLEPeripheral.h>

///////////////////////
// BLE Advertisments //
///////////////////////
const char * localName = "Bluetooth Test";
BLEPeripheral blePeriph;
BLEService bleServ("1207");
BLEIntCharacteristic countUpInt("1207", BLENotify);
BLEDescriptor countUpDescriptor("2901", "Up Counter");
BLEIntCharacteristic countDownInt("1208", BLENotify);
BLEDescriptor countDownDescriptor("2902", "Down Counter");
BLECharCharacteristic countSignal("1209", BLERead | BLEWrite);
BLEDescriptor countSigDescriptor("2903", "Signal Counters");

int upCnt;
int downCnt;
bool cntState;

int lastTime;

void setup() 
{
  upCnt = 0;
  downCnt = 0xFFFFFFFF;
  cntState = false;
  lastTime = 0;
  
  Serial.begin(115200); // Set up serial at 115200 baud

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
  blePeriph.addAttribute(countUpInt);
  blePeriph.addAttribute(countUpDescriptor);
  blePeriph.addAttribute(countDownInt);
  blePeriph.addAttribute(countDownDescriptor);
  blePeriph.addAttribute(countSignal);
  blePeriph.addAttribute(countSigDescriptor);

  // Now that device, service, characteristic are set up,
  // initialize BLE:
  blePeriph.begin();

  // Set cnt characteristics to default values
  countUpInt.setValue(upCnt);  
  countDownInt.setValue(downCnt);
  countSignal.setValue('0');
}

void loop() 
{
  BLECentral central = blePeriph.central();

  if(central) {
    // central connected to peripheral
    Serial.print(F("Connected to central: "));
    Serial.println(central.address());
    
    while(central.connected()) {
      if(countSignal.written()) {
        //If 0x30 received turn off, if 0x31 turn on
        if(countSignal.value() == '0') {
          cntState = false;
          Serial.println("Counters disabled.");
        } else if(countSignal.value() == '1') {
          cntState = true;
          Serial.println("Counters enabled.");
        }
      }
      
      if(cntState) {
        if(countUpInt.subscribed() && countDownInt.subscribed()) {
          //Will only work if notify and indicate are on/central is subscribed 
          if (millis() > 1000 && (millis() - 1000) > lastTime) { 
            // atleast one second has passed since last increment
            // Cant use delay as it blocks bluetooth
            lastTime = millis();
  
            //If notifications are on, then setting the characteristics value will have the value sent
            countUpInt.setValue(upCnt);
            countDownInt.setValue(downCnt);
            upCnt++;
            downCnt--;
          }
        }
      }
    }
    // central disconnected
    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
  }
}
