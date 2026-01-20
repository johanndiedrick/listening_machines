const int LED_PIN = 13; // built-in LED on most Arduinos

void setup() {
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
}

void loop() {
    // check if data received from Python
    if (Serial.available() > 0) {
        char received = Serial.read();

        if (received == '1') {
            digitalWrite(LED_PIN, HIGH);
        }
        else if (received == '0') {
            digitalWrite(LED_PIN, LOW);
        }
    }
}