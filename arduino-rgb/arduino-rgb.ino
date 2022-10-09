int red_pin = 9;
int green_pin = 10;
int blue_pin = 11;

void fade_down(int pin) {
  int value = 0;
  for (value = 255; value > 0; value--) {
    analogWrite(pin, value);
    delay(5);
  }
}

void fade_up(int pin) {
  int value = 0;
  for (value = 0; value < 255; value++) {
    analogWrite(pin, value);
    delay(5);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  fade_up(blue_pin);
  fade_down(blue_pin);
  fade_up(red_pin);
  fade_down(red_pin);
  fade_up(green_pin);
  fade_down(green_pin);
}