void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT); // định nghĩa chân 13
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (13, HIGH); // bật đèn
delay(500);
digitalWrite (13, LOW); // tắt đèn
delay(500);
}
