byte pb = 9 ;
long int t1 = 0 ;
long int t2 = 0 ;
long int reading=0;
float T ; 
byte timer = false ; 
void setup()
{
  Serial.begin(9600);
  pinMode(pb,INPUT_PULLUP);
}
void loop()
{
  if(!digitalRead(pb) && !timer)
  {
    t1=millis();
    timer=true;
  }
   else if(digitalRead(pb) && timer)
  {
    t2=millis();
    timer=false;
   reading = t2 - t1 ;
   T= reading / 1000.0;
Serial.print("time = ");
Serial.print(T);
Serial.println(" s"); 
  }
}