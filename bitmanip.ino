
void setup() {
  DDRB |= (1<<PB5);

}

void loop() {
  PORTB |= (1<< PB5);
  delay(500);
  PORTB &= ~(1<<PB5);
  delay(2000);

}

