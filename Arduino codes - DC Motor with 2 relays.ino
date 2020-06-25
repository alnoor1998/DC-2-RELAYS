//Relay 1 is connected to pin 8 and makes clockwise movement 
//Relay 2 is connected to pin 9 and makes counterclockwise movement 
void setup() { 

pinMode(8, OUTPUT); 
pinMode(9, OUTPUT); 

}

void loop() { 
  
//The Motor will move in Clockwise direction for 4 seconds 
digitalWrite(8 ,HIGH); 
digitalWrite ( 9 , LOW); 
delay (4000);
  
//The Motor will stop for 1 seconds
digitalWrite(8 ,HIGH); 
digitalWrite ( 9 ,HIGH);
delay (1000);
  
//The Motor will move in Counterclockwise direction for 4 seconds
digitalWrite ( 8 ,LOW); 
digitalWrite ( 9 , HIGH);
delay (4000);
  
//The Motor will stop for 1 seconds 
digitalWrite(8 ,HIGH); 
digitalWrite ( 9 , HIGH);
delay (1000);
}