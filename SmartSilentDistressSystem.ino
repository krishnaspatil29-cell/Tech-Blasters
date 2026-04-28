// Smart Silent Distress Monitoring System
// ESP32 Code for Hackathon Checkpoint 2
// Features:
// 1. Emergency Button
// 2. GPS Location Reading
// 3. Buzzer Alert
// 4. Serial Monitor Output

#include <TinyGPS++.h>
#include <HardwareSerial.h>

// -------- Pins --------
#define BUTTON_PIN 4
#define BUZZER_PIN 5

// GPS RX = GPIO16
// GPS TX = GPIO17

TinyGPSPlus gps;
HardwareSerial gpsSerial(2);

bool alertSent = false;

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);

  // Start GPS Serial
  gpsSerial.begin(9600, SERIAL_8N1, 16, 17);

  Serial.println("==================================");
  Serial.println(" Smart Silent Distress System ");
  Serial.println(" ESP32 Started Successfully ");
  Serial.println("==================================");
}

void loop() {

  // Read GPS Data
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());
  }

  // Read Button
  int buttonState = digitalRead(BUTTON_PIN);

  // If Button Pressed
  if (buttonState == LOW && alertSent == false) {

    Serial.println("\nEMERGENCY BUTTON PRESSED!");
    Serial.println("Sending Silent Distress Alert...");

    // Buzzer ON
    digitalWrite(BUZZER_PIN, HIGH);
    delay(1000);
    digitalWrite(BUZZER_PIN, LOW);

    // Show GPS Location
    if (gps.location.isValid()) {
      Serial.print("Latitude  : ");
      Serial.println(gps.location.lat(), 6);

      Serial.print("Longitude : ");
      Serial.println(gps.location.lng(), 6);

      Serial.print("Google Map: ");
      Serial.print("https://maps.google.com/?q=");
      Serial.print(gps.location.lat(), 6);
      Serial.print(",");
      Serial.println(gps.location.lng(), 6);
    } 
    else {
      Serial.println("GPS Signal Not Available");
    }

    Serial.println("Alert Triggered Successfully!");
    alertSent = true;
  }

  // Reset if button released
  if (buttonState == HIGH) {
    alertSent = false;
  }

  delay(200);
}
