/**********************************************************************************
**                                                                               **
**                                 Hello World                                   **
**                                 4t Exercici                                   **
**                                Adrian Ionescu                                 **
**                                                                               **
**********************************************************************************/
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar?"); // prints with brake line
  delay(1000);
  Serial.println("1. Comprovovar el numero de trajeta de credito" ); // prints with brake line
  delay(1000);
  Serial.println("2. Comprova numero de compte bancari"); // prints with brake line
  delay(1000);
  Serial.println("3. Buscar un digit perdut de targeta de cretit"); // prints with brake line
		   // do nothing
delay(1000);
 }

void loop()   // run over and over again
{
  
}

