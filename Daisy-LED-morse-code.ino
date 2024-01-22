// Change unit amount to adjust speed of blinking
int unit = 100; // milliseconds

// International Morse code rules
int dot = unit;
int dash = unit * 3;
int space_between_letters = unit * 3;
int space_between_words = unit * 7;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Blink "HELLO WORLD" in Morse code
  blink_h();
  delay(space_between_letters);
  blink_e();
  delay(space_between_letters);
  blink_l();
  delay(space_between_letters);
  blink_l();
  delay(space_between_letters);
  blink_o();
  delay(space_between_words);

  blink_w();
  delay(space_between_letters);
  blink_o();
  delay(space_between_letters);
  blink_r();
  delay(space_between_letters);
  blink_l();
  delay(space_between_letters);
  blink_d();
  delay(space_between_words);
}

// Generic functions for sending a dot or dash
void blink_dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}

void blink_dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dash);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}

// Generic functions for all letters and numbers
void blink_a() {
  blink_dot();
  blink_dash();
}

void blink_b() {
  blink_dash();
  blink_dot();
  blink_dot();
  blink_dot();
}

void blink_c() {
  blink_dash();
  blink_dot();
  blink_dash();
  blink_dot();
}

void blink_d() {
  blink_dash();
  blink_dot();
  blink_dot();
}

void blink_e() {
  blink_dot();
}

void blink_f() {
  blink_dot();
  blink_dot();
  blink_dash();
  blink_dot();
}

void blink_g() {
  blink_dash();
  blink_dash();
  blink_dot();
}

void blink_h() {
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dot();
}

void blink_i() {
  blink_dot();
  blink_dot();
}

void blink_j() {
  blink_dot();
  blink_dash();
  blink_dash();
  blink_dash();
}

void blink_k() {
  blink_dash();
  blink_dot();
  blink_dash();
}

void blink_l() {
  blink_dot();
  blink_dash();
  blink_dot();
  blink_dot();
}

void blink_m() {
  blink_dash();
  blink_dash();
}

void blink_n() {
  blink_dash();
  blink_dot();
}

void blink_o() {
  blink_dash();
  blink_dash();
  blink_dash();
}

void blink_p() {
  blink_dot();
  blink_dash();
  blink_dash();
  blink_dot();
}

void blink_q() {
  blink_dash();
  blink_dash();
  blink_dot();
  blink_dash();
}

void blink_r() {
  blink_dot();
  blink_dash();
  blink_dot();
}

void blink_s() {
  blink_dot();
  blink_dot();
  blink_dot();
}

void blink_t() {
  blink_dash();
}

void blink_u() {
  blink_dot();
  blink_dot();
  blink_dash();
}

void blink_v() {
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dash();
}

void blink_w() {
  blink_dot();
  blink_dash();
  blink_dash();
}

void blink_x() {
  blink_dash();
  blink_dot();
  blink_dot();
  blink_dash();
}

void blink_y() {
  blink_dash();
  blink_dot();
  blink_dash();
  blink_dash();
}

void blink_z() {
  blink_dash();
  blink_dash();
  blink_dot();
  blink_dot();
}

void blink_0() {
  blink_dash();
  blink_dash();
  blink_dash();
  blink_dash();
  blink_dash();
}

void blink_1() {
  blink_dot();
  blink_dash();
  blink_dash();
  blink_dash();
  blink_dash();
}

void blink_2() {
  blink_dot();
  blink_dot();
  blink_dash();
  blink_dash();
  blink_dash();
}

void blink_3() {
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dash();
  blink_dash();
}

void blink_4() {
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dash();
}

void blink_5() {
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dot();
}

void blink_6() {
  blink_dash();
  blink_dot();
  blink_dot();
  blink_dot();
  blink_dot();
}

void blink_7() {
  blink_dash();
  blink_dash();
  blink_dot();
  blink_dot();
  blink_dot();
}

void blink_8() {
  blink_dash();
  blink_dash();
  blink_dash();
  blink_dot();
  blink_dot();
}

void blink_9() {
  blink_dash();
  blink_dash();
  blink_dash();
  blink_dash();
  blink_dot();
}
