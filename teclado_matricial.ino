/*
 Fundacion Kinal
 Electronica
Grado: Quito perito
seccion: A
curso: taller de electronica
Nombre: Diego Alejandro Culajay Gonzalez
carnet: 2019485
*/
#include <Keypad.h>

#define filas_teclado 4   //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4 //cantidad de columnas que posee el teclado matricial.
#define f1_teclado 2  //pin2 conectado a la fila 1
#define f2_teclado 3  //pin3 conectado a la fila 2
#define f3_teclado 4  //pin4 conectado a la fila 3
#define f4_teclado 5  //pin5 conectado a la fila 4
#define c1_teclado 6  //pin6 conectado a la columna 1
#define c2_teclado 7  //pin7 conectado a la columna 2
#define c3_teclado 8  //pin8 conectado a la columna 3
#define c4_teclado 9  //pin9 conectado a la columna 4

//Creo una matriz led con la disposicion fisica de las teclas
char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'F','0','E','D'}
};

//Arreglos en los que defino los pines a utilizar, tanto para las columnas como para las filas
byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};

//Creo el constructor para poder usar el teclado matricial.
Keypad teclado_DACG = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);

void setup() 
{
  Serial.begin(9600);    //Inicio la comunicacion serial.
  Serial.println("Prueba del teclado matricial");   //Envio de mensaje
}

void loop() 
{

  char tecla = teclado_DACG.getKey();  //Obtengo la tecla que presione


  //Si alguna tecla ha sido presionada
  if(tecla == '1')
  {
    Serial.print("escribir 1 en el display");   //Envio el mensaje
    digitalWrite(11,LOW); //A
    digitalWrite(10,LOW); //B
    digitalWrite(17,LOW);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,LOW);   //
  }
  
if(tecla == '2')
  {
    Serial.print("escribir 2 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,LOW);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,LOW);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '3')
  {
    Serial.print("escribir 3 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,LOW); //B
    digitalWrite(17,LOW);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
   if(tecla == 'A')
  {
    Serial.print("escribir A en el display");   //Envio el mensaje
    digitalWrite(11,LOW); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '4')
  {
    Serial.print("escribir 4 en el display");   //Envio el mensaje
    digitalWrite(11,LOW); //A
    digitalWrite(10,LOW); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '5')
  {
    Serial.print("escribir 5 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,LOW); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,LOW);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '6')
  {
    Serial.print("escribir 6 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(19,LOW);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == 'B')
  {
    Serial.print("escribir B en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,LOW);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '7')
  {
    Serial.print("escribir 7 en el display");   //Envio el mensaje
    digitalWrite(11,LOW); //A
    digitalWrite(10,LOW); //B
    digitalWrite(17,LOW);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,LOW);   //G
  }
  if(tecla == '8')
  {
    Serial.print("escribir 8 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '9')
  {
    Serial.print("escribir 9 en el display");   //Envio el mensaje
    digitalWrite(11,LOW); //A
    digitalWrite(10,LOW); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == 'C')
  {
    Serial.print("escribir C en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,LOW);  //E
    digitalWrite(12,LOW);  //F
    digitalWrite(16,LOW);   //G
  }
  if(tecla == 'F')
  {
    Serial.print("escribir F en el display");   //Envio el mensaje
    digitalWrite(11,LOW); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,LOW);  //E
    digitalWrite(12,LOW);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == '0')
  {
    Serial.print("escribir 0 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,LOW);   //G
  }
  if(tecla == 'E')
  {
    Serial.print("escribir E en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,HIGH);  //C
    digitalWrite(18,HIGH);  //D
    digitalWrite(19,LOW);  //E
    digitalWrite(12,LOW);  //F
    digitalWrite(16,HIGH);   //G
  }
  if(tecla == 'D')
  {
    Serial.print("escribir 8 en el display");   //Envio el mensaje
    digitalWrite(11,HIGH); //A
    digitalWrite(10,HIGH); //B
    digitalWrite(17,LOW);  //C
    digitalWrite(18,LOW);  //D
    digitalWrite(19,HIGH);  //E
    digitalWrite(12,HIGH);  //F
    digitalWrite(16,HIGH);   //G
  }
}
