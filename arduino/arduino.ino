#include <Wire.h>
#define I2CAddressESPWifi 8
int read = 0;

void setup() {
  Wire.begin(I2CAddressESPWifi);
  Wire.onRequest(requestEvent);
}

void loop() {
  // read = analogRead(A0);
  // String sx = String(read);
  // char numero[ sx.length()+1 ];
  // sx.toCharArray( numero, sx.length()+1 );     
  
  // Serial.println(read);
  
  // Wire.beginTransmission(I2CAddressESPWifi);
  // Wire.write(numero);  
  // Wire.endTransmission();
  
  delay(5);
}
void requestEvent() {
  Wire.write("hello "); // respond with message of 6 bytes
  // as expected by master
}