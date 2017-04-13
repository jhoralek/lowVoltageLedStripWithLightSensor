/*
 * Low voltage led strip switch on and off based on
 * intensity of photo diode
 * 
 * Read analog 0 where photo diod has output and
 * pass voltage to pin 3 (PWM pin)
 * 
 * 13.4.2017
 * horalek.jiri@gmail.com
*/
int photoDiodPin = 0; // photo diode
int photoDiodReading; // analog reading from sensor

int ledStripPin = 3; // output PWM pin 200 is around 3.7V on 5V arduino

void setup() {
}

void loop() {
  photoDiodReading = analogRead(photoDiodPin); // read analog (sensor)
  analogWrite(ledStripPin, photoDiodReading > 500 ? 200 : 0); // when dark then on when light then off
  delay(1000); // check every 1s
}

