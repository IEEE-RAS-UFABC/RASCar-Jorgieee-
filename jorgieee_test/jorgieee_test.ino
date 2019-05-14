#define MotorDireitoFrente  A2
#define MotorDireitoTras  A8
#define MotorEsquerdoFrente  A3
#define MotorEsquerdoTras  A9

void setup() {
  pinMode(MotorDireitoFrente, OUTPUT);
  pinMode(MotorDireitoTras, OUTPUT);
  pinMode(MotorEsquerdoFrente, OUTPUT);
  pinMode(MotorEsquerdoTras, OUTPUT);
}

void loop() {
   avancar(255);
   delay(2000);
   parar();
   delay(2000);
   voltar(255);
   delay(5000);
   parar();
   delay(500);
   esquerda(255);
   delay(3000);
   parar();
   delay(2000);
}

