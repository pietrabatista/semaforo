#define LED_VERMELHO 27 // Define o pino do LED vermelho
#define LED_AMARELO 26 // Define o pino do LED amarelo
#define LED_VERDE 25 // Define o pino do LED verde
#define BUZZER 5  // Define o pino do buzzer

void setup() {

  
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(BUZZER, OUTPUT);  // Configura o pino do buzzer como saída
}

void loop() {

  // Semáforo Vermelho
  digitalWrite(LED_VERMELHO, HIGH); // Liga o vermelho
  delay(6000);                      // Mantém ligado por 6 segundos
  digitalWrite(LED_VERMELHO, LOW);  // Desliga o vermelho

  // Semáforo Amarelo
  digitalWrite(LED_AMARELO, HIGH); // Liga o amarelo
  delay(2000);                     // Mantém ligado por 2 segundos
  digitalWrite(LED_AMARELO, LOW);  // Desliga o amarelo


  // Semáforo Verde
  digitalWrite(LED_VERDE, HIGH);   // Liga o verde
  delay(2000);                     // Mantém ligado por 2 segundos
  digitalWrite(LED_VERDE, LOW);    // Desliga o verde
  delay(500);

  digitalWrite(LED_VERDE, HIGH);
  tone(BUZZER, 100);              // Emite som no buzzer a 1kHz
  delay(2000);                     // Mantém ligado por 2 segundos
  noTone(BUZZER);
  digitalWrite(LED_VERDE, LOW);    // Desliga o verde
 

  // Semáforo Amarelo
  digitalWrite(LED_AMARELO, HIGH); // Liga o amarelo
  delay(2000);                     // Mantém ligado por 2 segundos
  digitalWrite(LED_AMARELO, LOW);  // Desliga o amarelo


}