unsigned int segA = 9;
unsigned int segB = 10;
unsigned int segC = 4;
unsigned int segD = 5;
unsigned int segE = 6;
unsigned int segF = 8;
unsigned int segG = 7;

void setup() {
  int segments[] = {segA, segB, segC, segD, segE, segF, segG};
  for(int i = 0; i < 7; i++)
  {
     pinMode(segments[i],OUTPUT);
  }
}

void AllOffExcept(int seg)
{
  int segments[] = {segA, segB, segC, segD, segE, segF, segG};
  for(int i = 0; i < 7; i++)
  {
     if(segments[i] == seg)
     {
         digitalWrite(segments[i], HIGH);
     }
     else
     {
        digitalWrite(segments[i], LOW);
     }
  }
}
void loop() {
  int segments[] = {segA, segB, segC, segD, segE, segF};
  for(int i = 0; i < 6; i++)
  {
      AllOffExcept(segments[i]);
      delay(100);
  } 
}
