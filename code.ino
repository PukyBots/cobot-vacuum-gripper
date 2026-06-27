// Arduino example
const int PUMP_PIN = 8;
const int SOLENOID_PIN = 9;

void setup() {
    pinMode(PUMP_PIN, OUTPUT);
    pinMode(SOLENOID_PIN, OUTPUT);

    digitalWrite(PUMP_PIN, LOW);
    digitalWrite(SOLENOID_PIN, LOW);

    Serial.begin(115200);
}

void loop() {

    if (Serial.available()) {

        char cmd = Serial.read();

        if (cmd == 'P') {        // Vacuum ON
            digitalWrite(PUMP_PIN, HIGH);
            digitalWrite(SOLENOID_PIN, HIGH);
        }

        if (cmd == 'R') {        // Release
            digitalWrite(PUMP_PIN, LOW);
            digitalWrite(SOLENOID_PIN, LOW);
        }
    }
}