#define key1 digitalRead(8)

void setup() {
  pinMode(A0, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, INPUT_PULLER );
}

void loop() {
  int dancinglight1[4][4] = {
    { 0, 0, 0, 1 },
    { 0, 0, 1, 0 },
    { 0, 1, 0, 0 },
    { 1, 0, 0, 0 }
  };
  for (i = 0; i <= 3; i++) {
    digitalWrite(i, 0);
  }
  if (key1 == 0) {
    for (a = 0; (a <= 3) & (key2 == 1) & (key3 == 1); a++) {
      for (i = 0; i <= 3; i++) {
        digitalWrite(i, dancinglight1[a][i]);
      }
      delay(200);
    }
  }


  }
}