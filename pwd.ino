string pwdInput;
 
void setup() {
    Serial.begin (9600);
    Serial.setTimeout(50);
    Serial.println ("----------WELCOME BACK----------");
    delay (1000);
    Serial.println ("------------------------------ENTER PASSWORD------------------------------");
}
 
void loop() {
    if(Serial.available()){
        delay(3000);

        pwdInput = Serial.read();
        while(sizeof(pwdInput) < 8) {
            Serial.println ("----------PASSWORD MUST NOT BE LESS THAN 8 CHARACTERS----------");
        } 

        checkForNumberInString()
    }
}

void checkForNumberInString(){
    for(i=0, i<pwdInput.length(), i++){
        if(!isDigit(pwdInput[i])){
            Serial.println ("---------- PASSWORD MUST CONTAIN AT LEAST ONE NUMBER ----------");
        } else{
            Serial.println ("---------- VALID ----------");
        }
    }
}