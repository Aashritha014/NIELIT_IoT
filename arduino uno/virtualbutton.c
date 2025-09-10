void setup(){
	pinMode(LED_BUILTIN,OUTPUT);
	Serial.begin(115200);
	Serial.println("Enter Value");
	Serial.print("Input:");
}

void loop(){
	 if(Serial.available()>0) {
		 char comdata = char(Serial.read());
		if (comdata == 'Y') {
			Serial.println("LED IS ON ");
			digitalWrite(LED_BUILTIN, HIGH);
		}
		
		else if (comdata == 'X') {
			Serial.println("LED IS OFF");
			digitalWrite(LED_BUILTIN, LOW);
		}
} 
	 
}