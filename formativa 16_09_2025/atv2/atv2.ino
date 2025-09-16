// Definição dos pinos
const int pinoLedVermelho = 8;
const int pinoLedAmarelo = 7;
const int pinoLedVerde = 6;
const int pinoLedBranco = 5;
const int pinoBotao = 2;

// Variáveis para a lógica do semáforo
unsigned long tempoAnterior = 0;
const long intervaloNormal = 10000; // 10 segundos para o ciclo normal do semáforo

void setup() {
  // Configura os pinos como SAÍDA ou ENTRADA
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoLedBranco, OUTPUT);
  pinMode(pinoBotao, INPUT); // O botão será uma ENTRADA
  
  // Inicia o semáforo no estado padrão: verde para carros, vermelho para pedestres
  digitalWrite(pinoLedVerde, HIGH);
  digitalWrite(pinoLedBranco, LOW);
  
  Serial.begin(9600);
}

void loop() {
  // Lógica para o ciclo normal do semáforo (verde -> amarelo -> vermelho)
  if (millis() - tempoAnterior >= intervaloNormal) {
    mudarParaCicloNormal();
    tempoAnterior = millis(); // Reseta o temporizador
  }
  
  // Verifica se o botão foi pressionado
  if (digitalRead(pinoBotao) == HIGH) {
    mudarParaPedestre();
    // Impede que o semáforo volte ao ciclo normal imediatamente após a travessia
    tempoAnterior = millis();
    // Adiciona um pequeno atraso para evitar leituras múltiplas do botão
    delay(200); 
  }
}

// Função para o ciclo de pedestre (muda o semáforo para vermelho)
void mudarParaPedestre() {
  // Sequência de mudança do semáforo de trânsito: verde -> amarelo -> vermelho
  digitalWrite(pinoLedVerde, LOW);
  digitalWrite(pinoLedAmarelo, HIGH);
  delay(2000); // Espera 2 segundos para o amarelo
  digitalWrite(pinoLedAmarelo, LOW);
  digitalWrite(pinoLedVermelho, HIGH);
  
  // Acende o LED do pedestre (branco)
  digitalWrite(pinoLedBranco, HIGH);
  
  Serial.println("Pedestre pode atravessar!");
  
  delay(5000); // Pedestre tem 5 segundos para atravessar
  
  // Pisca o LED do pedestre para avisar que o tempo está acabando
  for (int i = 0; i < 3; i++) {
    digitalWrite(pinoLedBranco, LOW);
    delay(500);
    digitalWrite(pinoLedBranco, HIGH);
    delay(500);
  }
  digitalWrite(pinoLedBranco, LOW);
  
  // Retorna ao estado normal do semáforo
  digitalWrite(pinoLedVermelho, LOW);
  digitalWrite(pinoLedVerde, HIGH);
}

// Função para o ciclo normal do semáforo (trânsito aberto)
void mudarParaCicloNormal() {
  digitalWrite(pinoLedVermelho, LOW);
  digitalWrite(pinoLedAmarelo, LOW);
  digitalWrite(pinoLedVerde, HIGH);
  digitalWrite(pinoLedBranco, LOW);
  
  Serial.println("Transito normal.");
}