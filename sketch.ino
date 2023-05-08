// Definição das variáveis para os pinos do botão e do LED
int buttonPin = 7;
int ledPin = 8;

// Variáveis para armazenar o estado do botão e do LED
int buttonState = 0;
int ledState = LOW;

void setup() {
  // Define o botão como um pino de entrada e o LED como um pino de saída
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Lê o estado atual do botão
  buttonState = digitalRead(buttonPin);
  
  // Se o botão for pressionado...
  if (buttonState == HIGH) {
    // Aguarda um pequeno intervalo de tempo para evitar leituras falsas do botão
    delay(50);
    
    // Lê o estado do botão novamente para confirmar que ele foi pressionado de fato
    buttonState = digitalRead(buttonPin);
    
    // Se o botão for pressionado duas vezes seguidas, alterna o estado do LED entre ligado e desligado
    if (buttonState == HIGH) {
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
  }
}
