// Serial Monitor Output
void serialOut() {
  n++;
  // PRESSURE ---------------------------------------------------------
  if (Pressure_Valve_Stat == 1) {
    if (n >= 1000) {
      Serial.print("Pressure Sensor 1 = ");
      Serial.print(Pressure_1);
      Serial.println(Unit);
      if (Valve_Stat == 1) {
        Serial.print("Valve Status: ");
        Serial.println(Valve_State[Valve_1]);
      } else {
        Serial.println("");
      }
      Serial.println("");

      Serial.print("Pressure Sensor 2 = ");
      Serial.print(Pressure_2);
      Serial.println(Unit);
      if (Valve_Stat == 1) {
        Serial.print("Valve Status: ");
        Serial.println(Valve_State[Valve_2]);
      } else {
        Serial.println("");
      }
      Serial.println("");

      Serial.print("Pressure Sensor 3 = ");
      Serial.print(Pressure_3);
      Serial.println(Unit);
      if (Valve_Stat == 1) {
        Serial.print("Valve Status: ");
        Serial.println(Valve_State[Valve_3]);
      } else {
        Serial.println("");
      }
      Serial.println("");

      Serial.print("Pressure Sensor 4 = ");
      Serial.print(Pressure_4);
      Serial.println(Unit);
      if (Valve_Stat == 1) {
        Serial.print("Valve Status: ");
        Serial.println(Valve_State[Valve_4]);
      } else {
        Serial.println("");
      }
      Serial.println("");
      Serial.println("");
      Serial.println("");

      n = 0;
    }
  }
  // BUTTONS ------------------------------------------------------
  if (Button_Stat == 1) {
    if (n >= 500) {
      Serial.println("");
      Serial.println("");
      Serial.println("");
      Serial.print("Button 1: ");
      Serial.println(Button_1);
      Serial.println("");
      Serial.print("Button 2: ");
      Serial.println(Button_2);
      Serial.println("");
      Serial.print("Button 3: ");
      Serial.println(Button_3);
      Serial.println("");
      Serial.print("Button 4: ");
      Serial.println(Button_4);
      Serial.println("");
      Serial.print("Button 5: ");
      Serial.println(Button_5);
      Serial.println("");
      Serial.print("Button 6: ");
      Serial.println(Button_6);

      n = 0;
    }
  }
}
