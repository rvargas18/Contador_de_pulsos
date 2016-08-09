/*
------------------------------
Contador de Pulsos
------------------------------
version: 1.0
autor: Raul Vargas Osorio.
4 de May 2016
*/

int count = 0;
int input;
int old_data = HIGH;
int reset = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
  input = digitalRead(4);
  if (input != old_data)
  {
    old_data = input;
    if (input == HIGH)
    {
      count ++;
    }
  }
  reset = digitalRead(5);
  if (reset == HIGH)
  {
    count = 0;
  }
  Serial.println(count);
}
