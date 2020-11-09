int led1 = 5;
int led2 = 6;
int led3 = 7;
int ldr = A0;
int ir1 = A1;
int ir2 = A2;
int ir3 = A3;
void setup()
{
Serial.begin (9600);
pinMode (led1,OUTPUT);
pinMode (led2,OUTPUT);
pinMode (led3,OUTPUT);
pinMode (ldr,INPUT);
pinMode (ir1,INPUT);
pinMode (ir2,INPUT);
pinMode (ir3,INPUT);
}
void loop()
{
int ldr_val = analogRead (ldr);
Serial.println(ldr_val);
boolean ir1_val = digitalRead(ir1);
boolean ir2_val = digitalRead(ir2);
boolean ir3_val = digitalRead(ir3);
if(ldr_val <= 100)
{
if(ir1_val==LOW && ir2_val==LOW && ir3_val==LOW)
{
analogWrite(led1,70);
analogWrite(led2,70);
analogWrite(led3,70);
}
else if(ir1_val==HIGH && ir2_val==LOW && ir3_val==LOW)
{
analogWrite(led1,255);
analogWrite(led2,70);
analogWrite(led3,70);
}

else if(ir1_val==LOW && ir2_val==HIGH && ir3_val==LOW)
{
analogWrite(led1,70);
analogWrite(led2,255);
analogWrite(led3,70);
}
else if(ir1_val==LOW && ir2_val==LOW && ir3_val==HIGH)
{
analogWrite(led1,70);
analogWrite(led2,70);
analogWrite(led3,255);
}
else if(ir1_val==HIGH && ir2_val==HIGH && ir3_val==LOW)
{
analogWrite(led1,255);
analogWrite(led2,255);
analogWrite(led3,70);
}
else if(ir1_val==HIGH && ir2_val==LOW && ir3_val==HIGH)
{
analogWrite(led1,255);
analogWrite(led2,70);
analogWrite(led3,255);
}
else if(ir1_val==LOW && ir2_val==HIGH && ir3_val==HIGH)
{
analogWrite(led1,70);
analogWrite(led2,255);
analogWrite(led3,255);
}
else if(ir1_val==HIGH && ir2_val==HIGH && ir3_val==HIGH)
{
analogWrite(led1,255);
analogWrite(led2,255);
analogWrite(led3,255);
}
}
else {
analogWrite(led1,0);
analogWrite(led2,0);
analogWrite(led3,0);
}
}
