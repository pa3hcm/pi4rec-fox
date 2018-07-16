// PI4REC FOX v1 - 2018-06-21
// (c) 2018 Ernest Neijenhuis PA3HCM

int dottime = 250; // length of a dot in ms
int i;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // call
  dottime=50;
  cw_dah(); cw_dit(); cw_dit(); delay(dottime*3);
  cw_dit(); delay(dottime*3);
  delay(dottime*4);
  cw_dit(); cw_dah(); cw_dah(); cw_dit(); delay(dottime*3);
  cw_dit(); cw_dit(); delay(dottime*3);
  cw_dit(); cw_dit(); cw_dit(); cw_dit(); cw_dah(); delay(dottime*3);
  cw_dit(); cw_dah(); cw_dit(); delay(dottime*3);
  cw_dit(); delay(dottime*3);
  cw_dah(); cw_dit(); cw_dah(); cw_dit(); delay(dottime*3);
  delay(dottime*4);
  cw_dit(); cw_dit(); cw_dah(); cw_dit(); delay(dottime*3);
  cw_dah(); cw_dah(); cw_dah(); delay(dottime*3);
  cw_dah(); cw_dit(); cw_dit(); cw_dah(); delay(dottime*3);
  delay(1000);
  dottime=250;
  // Select fox A/B/C/D:
  for (i=1; i<25; i++) {
     cw_dit(); cw_dah(); delay(dottime*3);                    // fox A
//  cw_dah(); cw_dit(); cw_dit(); cw_dit(); delay(dottime*3); // fox B
//  cw_dah(); cw_dit(); cw_dah(); cw_dit(); delay(dottime*3); // fox C
//  cw_dit(); delay(dottime*3);                               // fox E
  }
  delay(1000);
}

void cw_dit() {
  digitalWrite(13, HIGH);
  delay(dottime);
  digitalWrite(13, LOW);
  delay(dottime);
}

void cw_dah() {
  digitalWrite(13, HIGH);
  delay(3 * dottime);
  digitalWrite(13, LOW);
  delay(dottime);
}

