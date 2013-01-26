const int analogInPin = A0;  // Analog input pin that the LOBShield uses

int lastRead;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  lastRead = readButtons();
}

void loop() {
  
  /*while(true){
    Serial.println(analogRead(analogInPin));
    delay(100);
  }*/
  
  int newRead = readButtons();
  
  if(newRead!=lastRead){
    
    Serial.println(newRead, DEC);
    lastRead = newRead;
    
  }
  
}

int readButtons(){
  
  int analogReadFirst = analogRead(analogInPin);
  
  delay(10);
  
  int analogReadSecond = analogRead(analogInPin);
  
  while(analogReadFirst!=analogReadSecond){
    
    delay(10);
    analogReadFirst = analogReadSecond;
    analogReadSecond = analogRead(analogInPin);
    
  }
  
  if(analogReadFirst>999) {
    return 1;
  }
  else if(analogReadFirst>952) {
    return 2;
  }
  else if(analogReadFirst>909) {
    return 3;
  }
  else if(analogReadFirst>869) {
    return 4;
  }
  else if(analogReadFirst>833) {
    return 5;
  }
  else if(analogReadFirst>800) {
    return 6;
  }
  else if(analogReadFirst>769) {
    return 7;
  }
  else if(analogReadFirst>741) {
    return 8;
  }
  else if(analogReadFirst>715) {
    return 9;
  }
  else if(analogReadFirst>690) {
    return 10;
  }
  else if(analogReadFirst>667) {
    return 11;
  }
  else if(analogReadFirst>646) {
    return 12;
  }
  else if(analogReadFirst>625) {
    return 13;
  }
  else if(analogReadFirst>607) {
    return 14;
  }
  else if(analogReadFirst>589) {
    return 15;
  }
  else if(analogReadFirst>572) {
    return 16;
  }
  else if(analogReadFirst>556) {
    return 17;
  }
  else if(analogReadFirst>541) {
    return 18;
  }
  else if(analogReadFirst>527) {
    return 19;
  }
  else if(analogReadFirst>513) {
    return 20;
  }
  else if(analogReadFirst>501) {
    return 21;
  }
  else if(analogReadFirst>489) {
    return 22;
  }
  else if(analogReadFirst>477) {
    return 23;
  }
  else if(analogReadFirst>466) {
    return 24;
  }
  else if(analogReadFirst>455) {
    return 25;
  }
  else if(analogReadFirst>445) {
    return 26;
  }
  else if(analogReadFirst>430) {
    return 27;
  }
  else if(analogReadFirst>423) {
    return 28;
  }
  else if(analogReadFirst>414) {
    return 29;
  }
  else if(analogReadFirst>405) {
    return 30;
  }
  else if(analogReadFirst>397) {
    return 31;
  }
  else if(analogReadFirst>385) {
    return 32;
  }
  else if(analogReadFirst>378) {
    return 33;
  }
  else if(analogReadFirst>374) {
    return 34;
  }
  else if(analogReadFirst>187) {
    return 35;
  }
  else{
    return 0;
  }
  
}
