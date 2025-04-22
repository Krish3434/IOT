const int trig = 6;
const int echo = 7;
long totaltime;
int distance;
void setup() {
  
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT);
Serial.begin(9600); 
}
void loop() {
digitalWrite(trig, LOW);
delay(2000);
digitalWrite(trig, HIGH);
delay(10000);
digitalWrite(trig, LOW);
totaltime = pulseIn(echo, HIGH);
distance= totaltime*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
}

