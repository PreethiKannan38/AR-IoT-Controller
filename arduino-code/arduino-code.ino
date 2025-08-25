#define BLYNK_TEMPLATE_ID "TMPL31FBC78gC"
#define BLYNK_TEMPLATE_NAME "ar"
#define BLYNK_AUTH_TOKEN ""
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

#define led 4

const char ssid[] = "";
const char password[] = "";

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH); //keeping led off initially
  Serial.begin(115200);
  delay(1000);


  Serial.println("connecting to Blynk!");
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  Serial.println("Connected to Blynk!");
}

BLYNK_WRITE(V0) {
  int value = !param.asInt();
  digitalWrite(led, value);
   if (value == 1) {
    digitalWrite(led, HIGH);  // LED ON
    Serial.println("LED OFF");
  } else {
    digitalWrite(led, LOW); // LED OFF
    Serial.println("LED ON");
  }
}

void loop() {
  Blynk.run();
}
