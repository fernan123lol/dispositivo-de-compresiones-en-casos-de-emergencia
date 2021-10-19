 #include <Servo.h>
Servo servo;

void setup() {
  servo.attach(5);

}

void loop() {
for ( int r = 0; r < 3;  r++){
for( int i = 0; i < 30; i++){ 
       
        servo.write(0);
        delay(450);
        servo.write(100);
        delay(500);
    
}
delay(6000);
}
  delay (1600);
}
