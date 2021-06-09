//setting constants to control time durations and pin configuration
int const ldrp = A0;
int const piezop = A1;
int const led = 9;
int const refresh = 20;
int const dur = 2500;                                                   // to be set according to the length of the road stretch to be implemented over
int const ldr_threshold = 500;                                          // needs to be calibrated 
int const piezo_threshold = 20;
int counter = 0;

void setup() {
  pinMode(ldrp, INPUT);
  pinMode(piezop, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (analogRead(ldrp) < ldr_threshold)                                 // to check if it is day or night
  {                                                                     // enters the loop only at night
    while (counter < dur)
    {
      if (analogRead(piezop) > piezo_threshold)
      {
        digitalWrite(led, HIGH);
        counter = 0;                                                    // resets the loop every time a vehicle passes over the speed breaker
      }
      delay(1);
      counter++;
    }
    digitalWrite(led, LOW);                                             // turns the street lights off after the time duration is complete
    counter = 0;                                                        // during which the last vehicle crosses the stretch
  }
  else digitalWrite(led, LOW);
  delay(refresh);


}
