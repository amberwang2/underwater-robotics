#include <Servo.h>

Servo servo;
int LR_JS = A0;
int FB_JS = A1;
int YW_JS = A2;
int UD_JS = A3;
int SV_SW = 10;
int SV_pin = 11;
int DIA_R1 = 2;
int DIA_R2 = 3;
int DIA_L1 = 4;
int DIA_L2 = 5;
int FB_R1 = 6;
int FB_R2 = 7;
int FB_L1 = 8;
int FB_L2 = 9;
int LR_JS_value = 0;
int FB_JS_value = 0;
int YW_JS_value = 0;
int UD_JS_value = 0;
bool SV_SW_value = 0;
bool button_pressed = 0;


void setup()
{
  pinMode(DIA_R1, OUTPUT);
  pinMode(DIA_R2, OUTPUT);
  pinMode(DIA_L1, OUTPUT);
  pinMode(DIA_L2, OUTPUT);
  pinMode(FB_R1, OUTPUT);
  pinMode(FB_R2, OUTPUT);
  pinMode(FB_L1, OUTPUT);
  pinMode(FB_L2, OUTPUT);
  pinMode(LR_JS, INPUT);
  pinMode(FB_JS, INPUT);
  pinMode(YW_JS, INPUT);
  pinMode(UD_JS, INPUT);
  pinMode(SV_SW, INPUT_PULLUP);
  servo.attach(SV_pin);
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  LR_JS_value = analogRead(LR_JS);
  int LR_motor_pwr = map(abs(LR_JS_value - 511), 0, 512, 0, 255);
  FB_JS_value = analogRead(FB_JS);
  int FB_motor_pwr = map(abs(FB_JS_value - 511), 0, 512, 0, 255);
  YW_JS_value = analogRead(YW_JS);
  int YW_motor_pwr = map(abs(YW_JS_value - 511), 0, 512, 0, 255);
  UD_JS_value = analogRead(UD_JS);
  int UD_motor_pwr = map(abs(UD_JS_value - 511), 0, 512, 0, 255);
  SV_SW_value = digitalRead(SV_SW);
  Serial.println(UD_motor_pwr);
  if (LR_JS_value > 525) {
    analogWrite(DIA_R1, LR_motor_pwr);
    Serial.println("1");
    Serial.println(LR_motor_pwr);
    digitalWrite(DIA_R2, 0);
    analogWrite(DIA_L2, LR_motor_pwr);
    digitalWrite(DIA_L1, 0);
  } else if (LR_JS_value < 500) {
    analogWrite(DIA_R2, LR_motor_pwr);
    digitalWrite(DIA_R1, 0);
    analogWrite(DIA_L1, LR_motor_pwr);
    digitalWrite(DIA_L2, 0);
  } else if (UD_JS_value > 520) {
    analogWrite(DIA_R1, UD_motor_pwr);
    digitalWrite(DIA_R2, 0);
    analogWrite(DIA_L1, UD_motor_pwr);
    digitalWrite(DIA_L2, 0);
  } else if (UD_JS_value < 495) {
    analogWrite(DIA_R2, UD_motor_pwr);
    digitalWrite(DIA_R1, 0);
    analogWrite(DIA_L2, UD_motor_pwr);
    digitalWrite(DIA_L1, 0);
  } else {
    digitalWrite(DIA_R1, 0);
    digitalWrite(DIA_R2, 0);
    digitalWrite(DIA_L1, 0);
    digitalWrite(DIA_L2, 0);
  }
  if (FB_JS_value > 535) {
    analogWrite(FB_R1, FB_motor_pwr);
    digitalWrite(FB_R2, 0);
    analogWrite(FB_L1, FB_motor_pwr);
    digitalWrite(FB_L2, 0);
  } else if (FB_JS_value < 510) {
    analogWrite(FB_R2, FB_motor_pwr);
    digitalWrite(FB_R1, 0);
    analogWrite(FB_L2, FB_motor_pwr);
    digitalWrite(FB_L1, 0);
  } else if (YW_JS_value > 515) {
    analogWrite(FB_R2, YW_motor_pwr);
    digitalWrite(FB_R1, 0);
    analogWrite(FB_L1, YW_motor_pwr);
    digitalWrite(FB_L2, 0);
  } else if (YW_JS_value < 490) {
    analogWrite(FB_R1, YW_motor_pwr);
    digitalWrite(FB_R2, 0);
    analogWrite(FB_L2, YW_motor_pwr);
    digitalWrite(FB_L1, 0);
  } else {
    digitalWrite(FB_R1, 0);
    digitalWrite(FB_R2, 0);
    digitalWrite(FB_L1, 0);
    digitalWrite(FB_L2, 0);
  }
  if (!button_pressed) {
    if (!SV_SW_value) {
      // activate servo
      servo.write(45);
      button_pressed = 1;
    }
  }


  
  delay(100);
  
}
