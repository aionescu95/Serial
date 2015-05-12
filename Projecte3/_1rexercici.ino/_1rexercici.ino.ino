int num = 64;

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:"); 

  Serial.write(num);
  Serial.println();
  
  Serial.print("Numero = ");
  Serial.println(num);
  
  Serial.print("Decimal = ");
  Serial.println(num,DEC);
  
  Serial.print("Binari = ");
  Serial.println(num,BIN);
  
  Serial.print("Hexadecimal = ");
  Serial.println(num,HEX);
  
  Serial.print("Octal = ");
  Serial.println(num,OCT);
}

void loop()   // we need this to be here even though its empty
{
}

