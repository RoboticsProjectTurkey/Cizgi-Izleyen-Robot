#define Sensor1 8 
#define Sensor2 9
#define Sensor3 10
#define Sensor4 11
#define MotorR1 1
#define MotorR2 2
#define MotorRE 3
#define MotorL1 4
#define MotorL2 5
#define MotorLE 6
void setup() {  
 pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(Sensor3, INPUT); 
  pinMode(Sensor4, INPUT);
 
  pinMode(MotorR1, OUTPUT); // Sensör ve Motorların Giriş-Çıkış bilgilerini belirtiyoruz.
  pinMode(MotorR2, OUTPUT);

  pinMode(MotorL1, OUTPUT);
  pinMode(MotorL2, OUTPUT);
}
void loop() {
  if(digitalRead(Sensor1) == 0 && digitalRead(Sensor2) == 1 && digitalRead(Sensor3) == 1  && digitalRead(Sensor4) == 0){  // Orta sensör çizgiyi gördüğünde robot ileri gitsin.
    ileri();
  }
  if(digitalRead(Sensor1) == 0 && digitalRead(Sensor2) == 0 && digitalRead(Sensor3) == 1 && digitalRead(Sensor4) == 1){  // Sağ sensör çizgiyi gördüğünde robot sağa dönsün.
    sag();
  }

  if(digitalRead(Sensor1) == 1 && digitalRead(Sensor2) == 1 && digitalRead(Sensor3) == 0 && digitalRead(Sensor4) == 0){  // Sol sensör çizgiyi gördüğünde robot sola dönsün.
    sol();
  }
   if(digitalRead(Sensor1) == 1 && digitalRead(Sensor2) == 1 && digitalRead(Sensor3) == 1  && digitalRead(Sensor4) == 1){  // Orta sensör çizgiyi gördüğünde robot ileri gitsin.
    ileri();
  }
   if(digitalRead(Sensor1) == 1 && digitalRead(Sensor2) == 1 && digitalRead(Sensor3) == 1  && digitalRead(Sensor4) == 0){  // Orta sensör çizgiyi gördüğünde robot ileri gitsin.
    sol();
  }
   if(digitalRead(Sensor1) == 0 && digitalRead(Sensor2) == 1 && digitalRead(Sensor3) == 1  && digitalRead(Sensor4) == 1){  // Orta sensör çizgiyi gördüğünde robot ileri gitsin.
    sag();
  }
  delay(10);
}
void ileri(){  // Robotun ileri yönde hareketi için fonksiyon tanımlıyoruz.

  digitalWrite(MotorR1, HIGH); // Sağ motorun ileri hareketi aktif
  digitalWrite(MotorR2, LOW); // Sağ motorun geri hareketi pasif
  analogWrite(MotorRE, 150); // Sağ motorun hızı 150

  digitalWrite(MotorL1, HIGH); // Sol motorun ileri hareketi aktif
  digitalWrite(MotorL2, LOW); // Sol motorun geri hareketi pasif
  analogWrite(MotorLE, 150); // Sol motorun hızı 150
  delay(10);
  digitalWrite(MotorR1, LOW);
  digitalWrite(MotorR2, LOW);
  digitalWrite(MotorRE, LOW);

  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorL2, LOW);
  digitalWrite(MotorLE, LOW);
  delay(10); 
}
void sag(){ // Robotun sağa dönme hareketi için fonksiyon tanımlıyoruz.

  digitalWrite(MotorR1, HIGH); // Sağ motorun ileri hareketi aktif
  digitalWrite(MotorR2, LOW); // Sağ motorun geri hareketi pasif
  analogWrite(MotorRE, 0); // Sağ motorun hızı 0 (Motor duruyor)

  digitalWrite(MotorL1, HIGH); // Sol motorun ileri hareketi aktif
  digitalWrite(MotorL2, LOW); // Sol motorun geri hareketi pasif
  analogWrite(MotorLE, 150); // Sol motorun hızı 150
  delay(10);
  digitalWrite(MotorR1, LOW);
  digitalWrite(MotorR2, LOW);
  digitalWrite(MotorRE, LOW);

  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorL2, LOW);
  digitalWrite(MotorLE, LOW);
  delay(10);
}
void sol(){ // Robotun sola dönme hareketi için fonksiyon tanımlıyoruz.
  digitalWrite(MotorR1, HIGH); // Sağ motorun ileri hareketi aktif
  digitalWrite(MotorR2, LOW); // Sağ motorun geri hareketi pasif
  analogWrite(MotorRE, 150); // Sağ motorun hızı 150
  digitalWrite(MotorL1, HIGH); // Sol motorun ileri hareketi aktif
  digitalWrite(MotorL2, LOW); // Sol motorun geri hareketi pasif
  analogWrite(MotorLE, 0); // Sol motorun hızı 0 (Motor duruyor)
  delay(10);
  digitalWrite(MotorR1, LOW);
  digitalWrite(MotorR2, LOW);
  digitalWrite(MotorRE, LOW);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorL2, LOW);
  digitalWrite(MotorLE, LOW);
  delay(10); 
}
void dur(){ // Robotun durma hareketi için fonksiyon tanımlıyoruz.
  digitalWrite(MotorR1, HIGH);
  digitalWrite(MotorR2, LOW);
  digitalWrite(MotorRE, LOW);
  digitalWrite(MotorL1, HIGH);
  digitalWrite(MotorL2, LOW);
  digitalWrite(MotorLE, LOW);
  delay(10);
  digitalWrite(MotorR1, LOW);
  digitalWrite(MotorR2, LOW);
  digitalWrite(MotorRE, LOW);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorL2, LOW);
  digitalWrite(MotorLE, LOW);
  delay(10);
  
}
