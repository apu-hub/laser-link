int dt = 500;
int ds = 1000;
int tx = 13;
String raw, tra;
int ii;
void setup() {
  Serial.begin(9600);
  digitalWrite(tx, OUTPUT);
}
void dot() {
  digitalWrite(tx, HIGH);
  delay(dt);
  digitalWrite(tx, LOW);
  delay(dt);
}
void dash() {
  digitalWrite(tx, HIGH);
  delay(ds);
  digitalWrite(tx, LOW);
  delay(dt);
}
void okay() {
  digitalWrite(tx, LOW);   //END
  delay(dt);
}
void a() {
  dot();
  dash();
  okay();
}           //A
void b() {
  dash();
  dot();
  dot();
  dot();
  okay();
}          //B
void c() {
  dash();
  dot();
  dash();
  dot();
  okay();
}           //C
void d() {
  dash();
  dot();
  dot();
  okay();
}           //D
void e() {
  dot();
  okay();
}          //E
void f() {
  dot();
  dot();
  dash();
  dot();
  okay();
}          //F
void g() {
  dash();
  dash();
  dot();
  okay();
}          //G
void h() {
  dot();
  dot();
  dot();
  dot();
  okay();
}          //H
void i() {
  dot();
  dot();
  okay();
}          //I
void j() {
  dot();
  dash();
  dash();
  dash();
  okay();
}          //J
void k() {
  dash();
  dot();
  dash();
  okay();
}          //K
void l() {
  dot();
  dash();
  dot();
  dot();
  okay();
}          //L
void m() {
  dash();
  dash();
  okay();
}           //M
void n() {
  dash();
  dot();
  okay();
}           //N
void o() {
  dash();
  dash();
  dash();
  okay();
}          //O
void p() {
  dot();
  dash();
  dash();
  dot();
  okay();
}          //P
void q() {
  dash();
  dash();
  dot();
  dash();
  okay();
}          //Q
void r() {
  dot();
  dash();
  dot();
  okay();
}          //R
void s() {
  dot();
  dot();
  dot();
  okay();
}          //S
void t() {
  dash();
  okay();
}          //T
void u() {
  dot();
  dot();
  dash();
  okay();
}          //U
void v() {
  dot();
  dot();
  dot();
  dash();
  okay();
}          //V
void w() {
  dot();
  dash();
  dash();
  okay();
}          //W
void x() {
  dash();
  dot();
  dot();
  dash();
  okay();
}         //X
void y() {
  dash();
  dot();
  dash();
  dash();
  okay();
}          //Y
void z() {
  dash();
  dash();
  dot();
  dot();
  okay();
}
void under() {
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  okay();
}

void clr() {
  dash();
  dash();
  dash();
  dash();
  dash();
  dash();
  okay();
}
void loop() {
  while (Serial.available()){
  raw = Serial.readString();
  //tra = raw;
  for (ii = 0; ii <= 30; ii++) {
    switch (raw[ii]) {
      case 'a': a (); break;
      case 'b': b (); break;
      case 'c': c (); break;
      case 'd': d (); break;
      case 'e': e (); break;
      case 'f': f (); break;
      case 'g': g (); break;
      case 'h': h (); break;
      case 'i': i (); break;
      case 'j': j (); break;
      case 'k': k (); break;
      case 'l': l (); break;
      case 'm': m (); break;
      case 'n': n (); break;
      case 'o': o (); break;
      case 'p': p (); break;
      case 'q': q (); break;
      case 'r': r (); break;
      case 's': s (); break;
      case 't': t (); break;
      case 'u': u (); break;
      case 'v': v (); break;
      case 'w': w (); break;
      case 'x': x (); break;
      case 'y': y (); break;
      case 'z': z (); break;
      case '_': under (); break;
      case '&': clr (); break;
    }
  }
}
}
