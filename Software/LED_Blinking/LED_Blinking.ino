// LED Flashing 
// Define the pin where LED is connected (Onboard LED = Pin 13)
const int ledPin = 13;

// Define delay durations for each speed mode (in milliseconds)
const unsigned long SLOW_DELAY = 5000;    // 5 seconds
const unsigned long MEDIUM_DELAY = 2500;  // 2.5 seconds
const unsigned long FAST_DELAY = 1000;    // 1 second

void setup() {
  // Set the LED pin as an OUTPUT pin
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Blink LED at slow speed for 2 cycles (5s ON, 5s OFF)
  blinkLed(SLOW_DELAY, 2);

  // Blink LED at medium speed for 2 cycles (2.5s ON, 2.5s OFF)
  blinkLed(MEDIUM_DELAY, 2);

  // Blink LED at fast speed for 2 cycles (1s ON, 1s OFF)
  blinkLed(FAST_DELAY, 2);

  // The loop repeats indefinitely (runs forever)with a
  // period 34 second
}
// Function to blink the LED
void blinkLed(unsigned long delayTime, int cycles) {
  for (int i = 0; i < cycles; i++) {
    digitalWrite(ledPin, HIGH);    // Turn ON LED
    delay(delayTime);              // Wait

    digitalWrite(ledPin, LOW);     // Turn OFF LED
    delay(delayTime);              // Wait
  }
}

