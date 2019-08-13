int BLUE = 13; 
int GREEN = 12;


void setup() {
  Serial.begin(9600);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, INPUT);
}

void loop() {
  digitalWrite(BLUE, HIGH); 
  delay(1000);
  digitalWrite(BLUE, LOW); 
  delay(1000);

  
  switch (GREEN) {
    // BLUE is off
    case BLUE == LOW:
    // turn GREEN on
    digitalWrite(GREEN, HIGH);
    // have a delay of 1 second
    delay(1000);
    break;
    // BLUE is on
    case BLUE == HIGH:
    // turn GREEN off
    digitalWrite(GREEN, LOW);
    // have a delay of 1 second
    delay(1000); 
    break; 

    
  }  
 } 
  






  
