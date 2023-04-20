/*
 Fundacion Kinal
 Electronica
Grado: Quito perito
seccion: A
curso: taller de electronica
Nombre: Diego Alejandro Culajay Gonzalez
carnet: 2019485
*/

#define ledRojo 10
#define ledAzul 9
#define transistor 8
#define rele 4

void setup() {
  pinMode(10,OUTPUT); 
  pinMode(9,OUTPUT);
  pinMode(8,INPUT);
  pinMode(4,OUTPUT);
}
void loop() {
  int lectura;
   lectura = digitalRead(transistor);
    if( lectura == HIGH){ //encender bomba de agua
    digitalWrite(rele,HIGH);
    digitalWrite(ledAzul,HIGH);
    digitalWrite(ledRojo,LOW);
    }
    else if ( lectura == LOW){ //apagar bomba
      digitalWrite(rele,LOW);
      digitalWrite(ledRojo,HIGH);
      digitalWrite(ledAzul,LOW);
      }
}
