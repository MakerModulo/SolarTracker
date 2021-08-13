int sensorPin[4] = {A0,A1,A2,A3}; //pinos dos sensores
int sensorValue[4]; //valor lido dos sensores

void setup() {
  Serial.begin(9600); //definição do serial
  Serial.println("TR  - TL  - BR  - BL");
}

void loop() {
  for(int x=0; x<4; x++){ //laço para ler os 4 sensores
    sensorValue[x] = analogRead(sensorPin[x]); // leitura do sensor
    Serial.print(sensorValue[x]); //exibir o valor do sensor
    if(x!=3) Serial.print(" - ");
  }
  Serial.println("");
  delay(200); // delay de 200 mili por leitura
}
