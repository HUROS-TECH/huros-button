#include <HurosButton.h>

#define BTN_PIN1 4 
#define BTN_PIN2 5 

HurosButton btn1, btn2;

void setup() {
  btn1.Init(BTN_PIN1, INPUT_PULLUP);
  btn2.Init(BTN_PIN2, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  btn1.Run();
  btn2.Run();

  if(btn1.IsPressed()){
    Serial.println("pin 1 pressed");
  }
  if(btn2.IsPressed()){
    Serial.println("pin 2 pressed");
  }
  if(btn1.IsRelease()){
    Serial.println("pin 1 release");
  }
  if(btn2.IsRelease()){
    Serial.println("pin 2 release");
  }
}
