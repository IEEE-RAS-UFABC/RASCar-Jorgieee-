void avancar(byte forca)
{
  analogWrite(MotorDireitoFrente, forca);
  analogWrite(MotorDireitoTras, 0);
  analogWrite(MotorEsquerdoFrente, forca);
  analogWrite(MotorEsquerdoTras, 0);
}

void parar()
{
  analogWrite(MotorDireitoFrente, 0);
  analogWrite(MotorDireitoTras, 0);
  analogWrite(MotorEsquerdoFrente, 0);
  analogWrite(MotorEsquerdoTras, 0);
}

void direita(byte forca)
{
    analogWrite(MotorDireitoFrente, 0);
    analogWrite(MotorDireitoTras, forca-125);
    analogWrite(MotorEsquerdoFrente, forca);
    analogWrite(MotorEsquerdoTras, 0);
}

void esquerda(byte forca)
{
  analogWrite(MotorDireitoFrente, forca-100);
  analogWrite(MotorDireitoTras, 0);
  analogWrite(MotorEsquerdoFrente, 0);
  analogWrite(MotorEsquerdoTras, forca);
}

void voltar(byte forca)
{
  analogWrite(MotorDireitoFrente, 0);
  analogWrite(MotorDireitoTras, forca);
  analogWrite(MotorEsquerdoFrente, 0);
  analogWrite(MotorEsquerdoTras, forca);
}


