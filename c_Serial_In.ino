void serialIn() {

  if (Serial.available()) { // If we recieved anything
    String str = Serial.readString(); // Record data into string

    // Compare input
    if (str.indexOf("Pressure") > 0) {
      Serial.println("-------------------");
      Pressure_Valve_Stat = !Pressure_Valve_Stat;
      Button_Stat = !Pressure_Valve_Stat;
    }
    else if (str.indexOf("Valve") > 0) {
      Valve_Stat = !Valve_Stat;
      if (Pressure_Valve_Stat == 0) {
        Pressure_Valve_Stat = 1;
        Valve_Stat = 1;
        Button_Stat = 0;
      }

    }
    else if (str.indexOf("Button") > 0) {
      Button_Stat = !Button_Stat;
      Pressure_Valve_Stat = !Button_Stat;
      Serial.println("-------------------");
    }
    else if (str.indexOf("Off") > 0) {
      Pressure_Valve_Stat = 0;
      Button_Stat = 0;
    }
    else if (str.indexOf("On") > 0) {
      Pressure_Valve_Stat = 1;
      Button_Stat = 0;
    }
  }

}
