// Autonomous Rover (Belt Drive System)
// Arduino UNO + L298N Motor Driver

char state;
int motorpin11 = 2;  
int motorpin12 = 3;  
int motorpin21 = 4;  
int motorpin22 = 5;  

void setup() {
  // Initialize motor pins as output
  pinMode(motorpin11, OUTPUT);
  pinMode(motorpin12, OUTPUT);
  pinMode(motorpin21, OUTPUT);
  pinMode(motorpin22, OUTPUT);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Check if data received via serial (Bluetooth or Serial Monitor)
  if (Serial.available() > 0) {
    state = Serial.read();

    if (state == 'F') {  // Move Forward
      digitalWrite(motorpin11, HIGH);
      digitalWrite(motorpin12, LOW);
      digitalWrite(motorpin21, HIGH);
      digitalWrite(motorpin22, LOW);
    }

    else if (state == 'B') {  // Move Backward
      digitalWrite(motorpin11, LOW);
      digitalWrite(motorpin12, HIGH);
      digitalWrite(motorpin21, LOW);
      digitalWrite(motorpin22, HIGH);
    }

    else if (state == 'L') {  // Turn Left
      digitalWrite(motorpin11, LOW);
      digitalWrite(motorpin12, HIGH);
      digitalWrite(motorpin21, HIGH);
      digitalWrite(motorpin22, LOW);
    }

    else if (state == 'R') {  // Turn Right
      digitalWrite(motorpin11, HIGH);
      digitalWrite(motorpin12, LOW);
      digitalWrite(motorpin21, LOW);
      digitalWrite(motorpin22, HIGH);
    }

    else if (state == 'S') {  // Stop
      digitalWrite(motorpin11, LOW);
      digitalWrite(motorpin12, LOW);
      digitalWrite(motorpin21, LOW);
      digitalWrite(motorpin22, LOW);
    }
  }
}
