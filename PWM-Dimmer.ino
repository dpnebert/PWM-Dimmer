
#define LED 5
#define POT A7

int in_brightness;
int out_brightness;

void setup() {
  
  in_brightness = analogRead(POT);
  out_brightness = 0;

  pinMode(LED, OUTPUT);
  
}
void loop() {

  in_brightness = analogRead(POT);
  out_brightness = map(in_brightness, 0, 1023, 0, 260);
  if(out_brightness > 255) {
    out_brightness = 255;
  }
  analogWrite(LED, out_brightness);
  delay(25);
}
