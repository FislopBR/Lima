#define led_blink 1
#define led_blink2 2
#define led_blink3 3
#define led_blink4 4
#define led_blink5 5

void setup() {
  pinMode(led_blink, OUTPUT);
  pinMode(led_blink2, OUTPUT);
  pinMode(led_blink3, OUTPUT);
  pinMode(led_blink4, OUTPUT);
  pinMode(led_blink5, OUTPUT);
}
void loop() {
digitalWrite(led_blink, HIGH);
  delay(1000);
  digitalWrite(led_blink, LOW);
  delay(500);
  digitalWrite(led_blink2, HIGH);
  delay(1000);
  digitalWrite(led_blink2, LOW);
  delay(500);
  digitalwrite(led_blink3, HIGH);
  delay(1000);
  digitalWrite(led_blink3, LOW);
  delay(500);
  digitalWrite(led_blink4, HIGH);
  delay(1000);
  digitalWrite(led_blink4, LOW);
  delay(500);
  digitalWrite(led_blink5, HIGH);
  delay(1000);
  digitalWrite(led_blink5, LOW);
  delay(500);
}