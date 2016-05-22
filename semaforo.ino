void setup()
{
   pinMode (13,OUTPUT);
   
   pinMode (11,OUTPUT);
   pinMode (12,OUTPUT);
}
void loop()
{
   digitalWrite (13,HIGH); 
   delay (2000);
   digitalWrite (13,LOW);
   delay (1000);
 
   
   for (int cuenta = 0; cuenta<2; cuenta++)
   {
       digitalWrite (12,HIGH);
       delay (1000);
       digitalWrite (12,LOW);
       delay (1000);
   }
     digitalWrite (11,HIGH);
   delay (2000);
   digitalWrite (11,LOW);
   delay (1000);
   
}
