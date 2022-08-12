char *Valve_State[] = {"Closed", "Opened"};

int i = 2;
int n;
int Valve_1;
int Valve_2;
int Valve_3;
int Valve_4;

int FO_Valve_1;
int FO_Valve_2;
int FO_Valve_3;
int FO_Valve_4;

float Pressure_1;
float Pressure_2;
float Pressure_3;
float Pressure_4;

int Button_1;
int Button_2;
int Button_3;
int Button_4;
int Button_5;
int Button_6;

int Valve_Stat = 1;
int Pressure_Valve_Stat;
int Button_Stat;

void setup() {
  Serial.begin(9600); // Serial Output Band

  pinMode(22, INPUT); // Button 1
  pinMode(24, INPUT); // Button 2
  pinMode(26, INPUT); // Button 3
  pinMode(28, INPUT); // Button 4
  pinMode(30, INPUT); // Button 5
  pinMode(32, INPUT); // Button 6
  
  pinMode(23, OUTPUT); // Valve 1
  pinMode(25, OUTPUT); // Valve 2
  pinMode(27, OUTPUT); // Valve 3
  pinMode(29, OUTPUT); // Valve 4
  pinMode(31, OUTPUT); // Grap
  pinMode(33, OUTPUT); // Release
  
  

  switch (Serial_Output) {
    case 1:
      Pressure_Valve_Stat = 1;
      Valve_Stat = 1;
      break;
    case 2:
      Button_Stat = 1;
      break;
  }
}
