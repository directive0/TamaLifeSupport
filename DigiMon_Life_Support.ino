//  DigiMon life support system. v0.1
//  January 15 2016
//  C.J.R.Barrett 

const int abut = 2;   // A button pin
const int bbut = 3;   // B button pin
const int cbut = 4;   // C button pin
const int spkr = 5;   // Speaker pin
const int deprss = 500;
const int anmwt = 500;
const int longwait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(abut, OUTPUT);      // sets the digital pin as output
  pinMode(bbut, OUTPUT);      // sets the digital pin as output
  pinMode(cbut, OUTPUT);      // sets the digital pin as output
  pinMode(spkr, INPUT);       // sets the digital pin as output

//  digitalWrite(abut, HIGH);
//  
//  digitalWrite(bbut, HIGH);
//  
//  digitalWrite(cbut, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  feedmeal();
  delay(longwait);
  feedsnack();
  delay(longwait);  
  playgame();
  delay(longwait);  
  cleanup();
  delay(longwait);  
    
}

void feedsnack(){
  pressa();
  delay(deprss); 
  pressa();
  delay(deprss); 
  pressb();
  delay(deprss); 
  pressa();
  delay(deprss); 

  for (int i=0; i <= 3; i++){
  pressb();
  delay(anmwt);
  }
  
  delay(deprss); 
  pressc();
  delay(deprss); 
  pressc();
  delay(deprss); 
  
}

void feedmeal(){
  pressa();
  delay(deprss); 
  pressa();
  delay(deprss); 
  pressb();
  delay(deprss); 

  for (int i=0; i <= 3; i++){                      //For loop to write initial random position
  pressb();
  delay(anmwt);
  }

  delay(deprss); 
  pressc();
  delay(deprss); 
  pressc();
  delay(deprss); 
}

void playgame(){
  pressa();
  delay(deprss); 
  pressa();
  delay(deprss);
  pressa();
  delay(deprss);   
  pressb();
  delay(deprss); 

  for (int i=0; i <= 25; i++){                      //For loop to write initial random position
  pressa();
  delay(deprss);
  }

  delay(deprss); 
  pressc();
  delay(deprss); 
  pressc();
  delay(deprss); 
}

void cleanup(){
  pressa();
  delay(deprss); 
  pressa();
  delay(deprss);
  pressa();
  delay(deprss);
  pressa();
  delay(deprss);
  pressa();
  delay(deprss);       
  pressb();
  delay(deprss); 
  pressc();
  delay(deprss); 
  pressc();
  delay(deprss); 
}

void pressa() {
  digitalWrite(abut, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(deprss);              // wait for a second
  digitalWrite(abut, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void pressb() {
  digitalWrite(bbut, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(deprss);              // wait for a second
  digitalWrite(bbut, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void pressc() {
  digitalWrite(cbut, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(deprss);              // wait for a second
  digitalWrite(cbut, HIGH);   // turn the LED on (HIGH is the voltage level)
}
