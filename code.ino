/*
Developer: Pedro José Duarte (Novikov) Borges
Project: RGB Semaphor
Some names and comments may be done in portuguese
*/

int tempoVerdeVermelho = 5000;
int tempoAmarelo = 2000;
int delayTrocaDeCor = 50;

void setup()
{
  pinMode(9, OUTPUT); //Semaforos 1 e 2: Vermelho
  pinMode(10, OUTPUT);  //Semaforos 1 e 2: Azul
  pinMode(11, OUTPUT); //Semaforos 1 e 2: Verde
  pinMode(3, OUTPUT); //Semaforos 3 e 4: Vermelho
  pinMode(5, OUTPUT); //Semaforos 3 e 4: Azul
  pinMode(6, OUTPUT); //Semaforos 3 e 4: Verde
}

  
void loop()
{
  
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(1, HIGH);
  delay (tempoVerdeVermelho);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  delay (delayTrocaDeCor);
  
  analogWrite(9, 255);
  analogWrite(11, 255);
  analogWrite(3, 255);
  analogWrite(6, 255);
  digitalWrite(2, HIGH);
  delay (tempoAmarelo);
  analogWrite(9, 0);
  analogWrite(11, 0);
  analogWrite(3, 0);
  analogWrite(6, 0);
  digitalWrite(13, LOW);
  delay (delayTrocaDeCor);
  
  
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  delay(tempoVerdeVermelho); 
  digitalWrite(11, LOW);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
  delay (delayTrocaDeCor);
  
  analogWrite(9, 255);
  analogWrite(11, 255);
  analogWrite(3, 255);
  analogWrite(6, 255);
  digitalWrite(13, HIGH);
  delay (tempoAmarelo);
  analogWrite(9, 0);
  analogWrite(11, 0);
  analogWrite(3, 0);
  analogWrite(6, 0);
  digitalWrite(2, LOW);
  delay (delayTrocaDeCor);
  
}
