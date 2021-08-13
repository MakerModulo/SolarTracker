#include <Servo.h> //lib do servo

Servo servo; //obj servo definido
int servoPin = 8; //pin do servo     

void setup() {
  Serial.begin(9600); //definição de velocidade do serial
  servo.attach(servoPin); //atrelar o pin ao obj
  servo.write(90); //envia o servo para 90
}

void loop() {
  if (Serial.available()) {
    servo.write(Serial.readString().toInt()); //receber valor via serial e mandar para o servo
  }               
  delay(15);                          
}
