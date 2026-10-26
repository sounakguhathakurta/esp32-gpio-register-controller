#include "soc/soc.h"
#include "soc/gpio_reg.h"

const int LED_PIN = 2;
const int BUTTON_PIN = 4;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    REG_WRITE(GPIO_OUT_W1TS_REG, (1U << LED_PIN));
  } else {
    REG_WRITE(GPIO_OUT_W1TC_REG, (1U << LED_PIN));
  }
}