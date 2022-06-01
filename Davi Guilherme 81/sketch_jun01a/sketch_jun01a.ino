int led = 13;
int botao = 11;

int estadoBotao = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
  pinMode (botao, INPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
   estadoBotao = digitalRead(botao);
   
  if(estadoBotao == HIGH){
     digitalWrite (led, HIGH);
  } else {
     digitalWrite (led, LOW);
  }
 
}
