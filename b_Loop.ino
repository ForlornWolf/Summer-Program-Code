void loop() {
  serialOut();
  serialIn();

  // Read Raw Voltage Data from Pressure Sensors
  float Raw_Volt_Pressure_1 = analogRead(A0);
  float Raw_Volt_Pressure_2 = analogRead(A1);
  float Raw_Volt_Pressure_3 = analogRead(A2);
  float Raw_Volt_Pressure_4 = analogRead(A3);


  // Convert Raw Voltage Data to Voltage
  float Volt_Pressure_1 = Raw_Volt_Pressure_1 * (5.0 / 1023.0);
  float Volt_Pressure_2 = Raw_Volt_Pressure_2 * (5.0 / 1023.0);
  float Volt_Pressure_3 = Raw_Volt_Pressure_3 * (5.0 / 1023.0);
  float Volt_Pressure_4 = Raw_Volt_Pressure_4 * (5.0 / 1023.0);

  // Formula to convert Voltage to Pressure
  Pressure_1 = (Sensor_Pressure_Max * (Volt_Pressure_1 - Sensor_Volt_Min) / (Sensor_Volt_Max - Sensor_Volt_Min));
  Pressure_2 = (Sensor_Pressure_Max * (Volt_Pressure_2 - Sensor_Volt_Min) / (Sensor_Volt_Max - Sensor_Volt_Min));
  Pressure_3 = (Sensor_Pressure_Max * (Volt_Pressure_3 - Sensor_Volt_Min) / (Sensor_Volt_Max - Sensor_Volt_Min));
  Pressure_4 = (Sensor_Pressure_Max * (Volt_Pressure_4 - Sensor_Volt_Min) / (Sensor_Volt_Max - Sensor_Volt_Min));

  ///////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////

  Button_1 = digitalRead(22); // Forw
  Button_2 = digitalRead(24); // Back
  Button_3 = digitalRead(26); // Left
  Button_4 = digitalRead(28); // Right
  Button_5 = digitalRead(30); // Grap
  Button_6 = digitalRead(32); // Release

  if (Valve_Default_Open == 0) {
    // Forward
    if (Button_1 == 1) {
      digitalWrite(23, HIGH);
    } else {
      digitalWrite(23, LOW);
    }
    // Backward
    if (Button_2 == 1) {
      digitalWrite(25, HIGH);
    } else {
      digitalWrite(25, LOW);
    }
    // Left
    if (Button_3 == 1) {
      digitalWrite(27, HIGH);
    } else {
      digitalWrite(27, LOW);
    }
    // Right
    if (Button_4 == 1) {
      digitalWrite(29, HIGH);
    } else {
      digitalWrite(29, LOW);
    }
  }
  else if (Valve_Default_Open == 1) {
    if (Button_1 == 1) {
      digitalWrite(23, LOW);
    } else {
      digitalWrite(23, HIGH);
    }
    if (Button_2 == 1) {
      digitalWrite(25, LOW);
    } else {
      digitalWrite(25, HIGH);
    }
    if (Button_3 == 1) {
      digitalWrite(27, LOW);
    } else {
      digitalWrite(27, HIGH);
    }
    if (Button_4 == 1) {
      digitalWrite(29, LOW);
    } else {
      digitalWrite(29, HIGH);
    }
  }

  // Grab
  if (Button_5 == 1 && Button_6 == 0) {
    digitalWrite(31, HIGH);
  }
  // Release
  else if (Button_6 == 1 && Button_5 == 0) {
    digitalWrite(33, HIGH);
  }
  else {
    digitalWrite(31, LOW);
    digitalWrite(33, LOW);
  }
  ///////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////

  // Fail Safe
  /*
    if (Pressure_1 < 30) {
      Valve_1 = 1;
      digitalWrite(2, HIGH);
    }
    else {
      Valve_1 = 0;
      digitalWrite(2, LOW);
    }

    if (Pressure_2 < 30) {
      Valve_2 = 1;
      digitalWrite(3, HIGH);
    }
    else {
      Valve_2 = 0;
      digitalWrite(3, LOW);
    }

    if (Pressure_3 < 30) {
      Valve_3 = 1;
      digitalWrite(4, HIGH);
    }
    else {
      Valve_3 = 0;
      digitalWrite(4, LOW);
    }

    if (Pressure_4 < 30) {
      Valve_4 = 1;
      digitalWrite(5, HIGH);
    }
    else {
      Valve_4 = 0;
      digitalWrite(5, LOW);
    }
  */
}
