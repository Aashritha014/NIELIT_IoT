/* SET UP STEPS

- Go to board -> boards manager -> search for VEGA -> install the VEGA processor AREIS Board
- Select ARIES V3
- Go to tool -> Enable Flash Mode 
- Go to the device manger if the port is right [check for Silicon Labs CP210x USB to UART Bridge (COM5)]
- Go to tool -> in port -> select COM5 Aries Borad 
- Go to PRogrammer -> Select VEGA FLASHER

*/



int led1=22;
int led2=23;
int led3=24;
void setup() {
  // put your setup code here, to run once:

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
delay(2000);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
delay(2000);
digitalWrite(led1,LOW);
digitalWrite(led1,LOW);
digitalWrite(led3,HIGH);
delay(2000);
}



