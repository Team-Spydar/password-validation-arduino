char pwdInput;
int redled = 10;
int greenled = 7;
 
void setup() {
    Serial.begin (9600);
    Serial.setTimeout(50);
    Serial.println ("*************** WELCOME BACK ***************");
    Serial.println ("");
    delay (1000);
    Serial.println ("--------------- ENTER PASSWORD ---------------");
    Serial.println ("***********************************************");
    Serial.println ("");
    pinMode (redled, OUTPUT);
    pinMode (greenled, OUTPUT);
}
 
void loop() {
           

    if(Serial.available() > 0){
        delay(3000);
           digitalWrite (redled, HIGH);
           delay (50);
           digitalWrite (redled, LOW);
           delay (50);
 
        pwdInput = Serial.read();
         //delay (2000); 
           
        if(sizeof(pwdInput) < 8) {
            Serial.println (" PASSWORD MUST NOT BE LESS THAN 8 CHARACTERS ");
        } if(isDigit(pwdInput)){
            Serial.println (" ---------- PASSWORD SAVED ---------- ");
             digitalWrite (redled, LOW);
             digitalWrite (greenled, HIGH);
        } else {
            Serial.println (" PASSWORD MUST CONTAIN AT LEAST ONE NUMBER ");
            
         
        }
    }
}