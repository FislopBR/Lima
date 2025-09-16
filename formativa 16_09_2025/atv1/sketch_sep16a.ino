// Definição dos pinos
const int pinoSensor = A0;      // Pino analógico conectado ao sensor LM35
const int pinoLedVerde = 2;     // Pino digital para o LED verde
const int pinoLedAmarelo = 3;   // Pino digital para o LED amarelo
const int pinoLedVermelho = 4;  // Pino digital para o LED vermelho

void setup() {
  // Configura os pinos dos LEDs como SAÍDA
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);

  // Inicia a comunicação serial para monitorar a temperatura
  Serial.begin(9600);
}

void loop() {
  // Lê o valor analógico do sensor de temperatura
  int valorAnalogico = analogRead(pinoSensor);

  // Converte o valor analógico para tensão
  float tensao = valorAnalogico * (5.0 / 1024.0);

  // Converte a tensão para a temperatura em Celsius
  // O LM35 fornece 10mV por grau Celsius
  float temperatura = tensao * 100.0;

  // Imprime a temperatura no monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  // Lógica de controle dos LEDs
  // Desliga todos os LEDs antes de acender o correto
  digitalWrite(pinoLedVerde, LOW);
  digitalWrite(pinoLedAmarelo, LOW);
  digitalWrite(pinoLedVermelho, LOW);

  if (temperatura < 25) {
    // Se a temperatura estiver abaixo de 25°C, acende o LED verde (Normal)
    digitalWrite(pinoLedVerde, HIGH);
  } else if (temperatura >= 25 && temperatura < 30) {
    // Se a temperatura estiver entre 25°C e 30°C, acende o LED amarelo (Quente)
    digitalWrite(pinoLedAmarelo, HIGH);
  } else {
    // Se a temperatura for 30°C ou mais, acende o LED vermelho (Muito Quente)
    digitalWrite(pinoLedVermelho, HIGH);
  }

  // Espera um segundo antes da próxima leitura
  delay(1000);
}