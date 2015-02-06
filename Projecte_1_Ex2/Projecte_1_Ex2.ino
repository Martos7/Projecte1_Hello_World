/*************************************************************************
**                                                                      **
**    Programa que escriu "Hellow World" cada segon                     **
**                                                                      **
*************************************************************************/
//Raúl Martos


void setup()              
{
  Serial.begin(9600);    
}

void loop()                     
{
  Serial.print("Hello world!");  // prints
  delay(1000);
}
