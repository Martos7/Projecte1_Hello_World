/*************************************************************************
**                                                                      **
**    Programa que escriu en la pantalla serial les frases del serial.  **
**    println()                                                         **
*************************************************************************/
//Raúl Martos



void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar?"); 
  Serial.println("1. Comprovar numero de tarjeta de credit");
  Serial.println("2. Comprovar numero de compte bancari");
  Serial.println("3. Buscar un digit perdut de tarjeta de credit");
}

void loop()   // run over and over again
{
		   // do nothing
}

