/*
turns on the four relays with a delay
*/

#define REL1 A0
#define REL2 49
#define REL3 53
#define REL4 5

void setup() {
  pinMode (REL1, OUTPUT);                             // configuration of the output pins            
  pinMode (REL2, OUTPUT);
  pinMode (REL3, OUTPUT);
  pinMode (REL4, OUTPUT); 
}

//Turns on each relay board individually.
void loop() {
  digitalWrite (REL1, HIGH);                      // Relay 1 active
  digitalWrite (REL2, LOW);
  digitalWrite (REL3, LOW);
  digitalWrite (REL4, LOW);
  delay ( 1000 );                                 // pause for a second
  digitalWrite (REL1, LOW);                      // Relay 2 active
  digitalWrite (REL2, HIGH);
  digitalWrite (REL3, LOW);
  digitalWrite (REL4, LOW);
  delay ( 1000 );                                 // pause for a second
  digitalWrite (REL1, LOW);                      // Relay 3 active
  digitalWrite (REL2, LOW);
  digitalWrite (REL3, HIGH);
  digitalWrite (REL4, LOW);
  delay ( 1000 ); // pause for a second
  digitalWrite (REL1, LOW);                    
  digitalWrite (REL2, LOW);
  digitalWrite (REL3, LOW);
  digitalWrite (REL4, HIGH);                      //Relay 4 active
  delay ( 1000 );                                 // pause for a second
}
