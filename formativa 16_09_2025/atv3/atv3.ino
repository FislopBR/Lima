#include <Servo.h> // Inclui a biblioteca para controlar o servo motor

// Definição dos pinos
const int pinoPotenciometro = A0; // Pino analógico para o potenciômetro
const int pinoServo = 9;          // Pino digital para o servo motor

Servo meuServo; // Cria um objeto servo

// Variáveis
int valorPotenciometro; // Variável para ler o valor do potenciômetro
int anguloServo;        // Variável para armazenar o ângulo do servo

void setup() {
  // Anexa o objeto servo ao pino digital
  meuServo.attach(pinoServo);

  // Inicia a comunicação serial para monitorar os valores
  Serial.begin(9600);
}

void loop() {
  // 1. Lê o valor do potenciômetro (0 a 1023)
  valorPotenciometro = analogRead(pinoPotenciometro);

  // 2. Mapeia o valor do potenciômetro (0-1023) para o ângulo do servo (0-180)
  // A função map() facilita essa conversão
  anguloServo = map(valorPotenciometro, 0, 1023, 0, 180);

  // 3. Move o servo para o ângulo mapeado
  meuServo.write(anguloServo);

  // Imprime os valores no monitor serial para debug
  Serial.print("Valor do Potenciometro: ");
  Serial.print(valorPotenciometro);
  Serial.print(" -> Angulo do Servo: ");
  Serial.println(anguloServo);

  // Pequena pausa para estabilidade
  delay(15);
}