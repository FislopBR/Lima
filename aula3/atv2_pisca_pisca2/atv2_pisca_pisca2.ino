#define led_blink 10
#define led_blink2 11

void setup() {
  pinMode(led_blink, OUTPUT);
  pinMode(led_blink2, OUTPUT);
}
void loop() {
digitalWrite(led_blink, HIGH);
  delay(1000);
  digitalWrite(led_blink, LOW);
  delay(5000);
  digitalWrite(led_blink2, HIGH);
  delay(1000);
  digitalWrite(led_blink2, LOW);
  delay(5000);
}}