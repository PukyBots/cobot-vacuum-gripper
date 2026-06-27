#define SOLENOID_PIN 8


void setup() {

 pinMode(SOLENOID_PIN, OUTPUT);

}


void loop() {

 // OPEN (energize solenoid)

 digitalWrite(SOLENOID_PIN, HIGH);

 delay(5000);  // 2 seconds


 // CLOSE (de-energize)

 digitalWrite(SOLENOID_PIN, LOW);

 delay(2000);  // 2 seconds

}