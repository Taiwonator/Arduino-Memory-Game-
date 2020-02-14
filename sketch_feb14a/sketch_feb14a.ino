void setup() {
  Serial.begin(9600);
  int y = 0;
  int x = 5;
  output(x, y);
  x += 3;
  output(x, y);
  x -= 4;
  output(x, y);
  x *= 20;
  output(x, y);
  x /= 4;
  output(x, y);
  y = ++x;
  output(x, y);
  y = x--;
  output(x, y);
}

void loop() {

}

void output(int x_value, int y_value) {
  Serial.print(x_value);
  Serial.print(" ");
  Serial.println(y_value);

}
