// Pin Definitions
const int smoke1 = A0;
const int smoke2 = A1;

const int buzzer1 = 8;
const int buzzer2 = 9;

const int button1 = 2;
const int button2 = 3;

// Smoke threshold (you may adjust this)
int threshold = 250;

// Alarm states
bool alarm1 = false;
bool alarm2 = false;

void setup() {
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  int smokeValue1 = analogRead(smoke1);
  int smokeValue2 = analogRead(smoke2);

  Serial.print("Room 1 Smoke: ");
  Serial.print(smokeValue1);
  Serial.print(" | Room 2 Smoke: ");
  Serial.println(smokeValue2);

  // Room 1 Logic
  if (smokeValue1 > threshold) {
    alarm1 = true;
  }
  if (digitalRead(button1) == LOW) {
    alarm1 = false;
  }

  // Room 2 Logic
  if (smokeValue2 > threshold) {
    alarm2 = true;
  }
  if (digitalRead(button2) == LOW) {
    alarm2 = false;
  }

  // Control Buzzers
  digitalWrite(buzzer1, alarm1 ? HIGH : LOW);
  digitalWrite(buzzer2, alarm2 ? HIGH : LOW);

  delay(200);
}
