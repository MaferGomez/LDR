float valorLDR = 0;   
float res=0;
float Lux=0;
float Van=0;

void setup() { 
  pinMode(A0, INPUT);
  pinMode(13,OUTPUT);
Serial.begin(9600); 
}

void loop() { 
valorLDR = analogRead(A0);
Van=valorLDR*5/1023;
res=615*((5/Van)-1);
Lux=pow((res/127562),-1.16550117);

Serial.print("Voltaje: ");
Serial.print(Van); 
Serial.println("V");
Serial.print("Resistencia: ");
Serial.print(res);
Serial.println("Ohms");    
Serial.print("Intensidad luminosa es: ");
Serial.print(Lux);
Serial.println(" Lux");
Serial.println();

if(Lux<2000)
{
  digitalWrite(13,HIGH);
}
else 
{
  digitalWrite(13,LOW);
}
delay (3000);
}
