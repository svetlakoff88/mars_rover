#include<Servo.h>

Servo povorot_serv;
Servo naklon;
Servo vpered_nazad;
Servo zahvat;

void setup() {
  povorot_serv.attach(0);
  naklon.attach(1);
  vpered_nazad.attach(2);
  zahvat.attach(3);

}

void loop() {
  int pot_povorot_serv = analogRead(0);
  int pot_naklon = analogRead(1);
  int pot_vpered_nazad = analogRead(2);
  int pot_zahvat = analogRead(3);
  pot_povorot_serv = map(pot_povorot_serv, 0, 1023, 0, 180);
  delay(2);
  pot_naklon = map(pot_naklon, 0, 1023, 0, 180);
  delay(2);
  pot_vpered_nazad = map(pot_vpered_nazad, 0, 1023, 0, 180);
  delay(2);
  pot_zahvat = map(pot_zahvat, 0, 1023, 0, 180);
}
