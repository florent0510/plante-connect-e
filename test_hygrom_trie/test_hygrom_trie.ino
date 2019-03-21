const int plante = A0; //capteur d'hygrométrie brancher sur le port 13 
 void setup() {
  // put your setup code here, to run once:
pinMode(plante, INPUT);// plante en entrée
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int humide = analogRead(plante); //cherche le taux d'hygrométrie
Serial.println(humide);
delay(5000);
}
