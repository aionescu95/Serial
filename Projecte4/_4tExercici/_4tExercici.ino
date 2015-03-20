int Contaminacio = 44 ;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( Contaminacio < 3.5 && Contaminacio > 0)
  {
    Serial.print("A");
  }
  else if ( Contaminacio < 6.5 && Contaminacio > 3.5)
 {
   Serial.print("B");
 }
 else if ( Contaminacio < 11.1 && Contaminacio > 6.5)
 {
   Serial.print("C");
 }
  else if ( Contaminacio < 17.7 && Contaminacio > 11.1)
 {
   Serial.print("D");
 }
 else if ( Contaminacio < 38.02 && Contaminacio > 17.7)
 {
   Serial.print("E");
 }
 else if ( Contaminacio < 43.02 &&  Contaminacio > 38.02)
 {
   Serial.print("F");
 }
 else if (Contaminacio >= 43.02)
 {
   Serial.print("G");
 }
 else
 {
   Serial.print("");
 }
}

void loop()   // we need this to be here even though its empty
{
}

