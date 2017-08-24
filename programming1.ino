void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, HIGH); //S SIGNAL STARTS AFTER 2 SECOND DELAY
  delay(2000);                       
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(2000);                       
  digitalWrite(LED_BUILTIN, LOW);   //4 SECONDS DELAY BEFORE SECOND LETTER "O"
  delay(4000);  
   digitalWrite(LED_BUILTIN, HIGH); //O STARTS HERE
  delay(4000);                       
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(4000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(4000);                       
  digitalWrite(LED_BUILTIN, LOW);   //4 SECONDS DELAY BEFORE THE THIRD LETTER "S"
  delay(4000);  
    digitalWrite(LED_BUILTIN, HIGH); //S SIGNAL STARTS AFTER 2 SECOND DELAY
  delay(2000);                       
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH);         
 }

