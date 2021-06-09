int const ldrp = A0;
int const piezop = A1;
int const led = 9;
int const refresh = 20;
int const dur = 2500;
int const ldr_threshold = 500;
int const piezo_threshold = 20;
int counter = 0;

void setup() {
  pinMode(ldrp, INPUT);
  pinMode(piezop, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (analogRead(ldrp) < ldr_threshold)
  {
    while (counter < dur)
    {
      if (analogRead(piezop) > piezo_threshold)
      {
        digitalWrite(led, HIGH);
        counter = 0;
      }
      delay(1);
      counter++;
    }
    digitalWrite(led, LOW);
    counter = 0;
  }
  else digitalWrite(led, LOW);
  delay(refresh);


}
