//  Tamagotchi life support system. v0.1
//  January 14 2017
//  C.J.R.Barrett 

const int abut = 0;   // A button pin
const int bbut = 1;   // B button pin
const int cbut = 2;   // C button pin
const int spkr = 3;   // Speaker pin
const int deprss = 100;
const int anmwt = 1000;
const int longwait = 5000;

void setup() {
  // put your setup code here, to run once:
  pinMode(abut, OUTPUT);      // sets the digital pin as output
  pinMode(bbut, OUTPUT);      // sets the digital pin as output
  pinMode(cbut, OUTPUT);      // sets the digital pin as output
  pinMode(spkr, INPUT);       // sets the digital pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  feedmeal();
  delay(longwait);
  

  
}

void feedsnack(){
  pressa();
  pressb();
  pressa();

  for (int i=0; i <= 3; i++){
  pressb();
  delay(anmwt);
  }
  
  pressc();
  
}

void feedmeal(){
  pressa();

  pressb();

  for (int i=0; i <= 3; i++){
  pressb();
  delay(anmwt);
  }

  pressc();
  
}

void pressa() {
  digitalWrite(abut, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dprss);              // wait for a second
  digitalWrite(abut, LOW);   // turn the LED on (HIGH is the voltage level)
}

void pressb() {
  digitalWrite(bbut, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dprss);              // wait for a second
  digitalWrite(bbut, LOW);   // turn the LED on (HIGH is the voltage level)
}

void pressc() {
  digitalWrite(cbut, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dprss);              // wait for a second
  digitalWrite(cbut, LOW);   // turn the LED on (HIGH is the voltage level)
}
