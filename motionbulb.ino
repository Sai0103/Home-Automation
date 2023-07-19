const int SENSOR_PIN = 7;
const int RELAY_PIN = 3;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  
  int motion =digitalRead(SENSOR_PIN);
 
  
  if(motion){
    
    digitalWrite(RELAY_PIN, LOW);
    delay(300);
  }else{
     
     digitalWrite(RELAY_PIN,HIGH);
  }
  delay(500);
 
}