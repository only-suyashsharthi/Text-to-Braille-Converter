#include <Servo.h>
#include <SD.h> // Include the SD library

bool pontinhos[6];
int posicaoServo[6] = {0, 1, 2, 3, 4, 5};

int pinofmotor[6] = {2, 3, 4, 5, 6, 7};
Servo myServo[6];

const int chipSelect = 10; // Pin connected to the SD card module's chip select

File dataFile; // File object for reading data from SD card

void setup() {
  Serial.begin(9600);

  // Initialize each servo
  for (int i = 0; i < 6; i++) {
    myServo[i].attach(pinofmotor[i]);
    myServo[i].write(0);
  }

  // Initialize SD card
  if (!SD.begin(chipSelect)) {
    Serial.println("Initialization failed!");
    return;
  }

  Serial.println("Initialization done.");
}

void loop() {
  // Open the data file
  dataFile = SD.open("example.txt");/// file name change karna hai 

  // Check if the file opened successfully
  if (dataFile) {
    // Read data from the file until there's nothing left
    while (dataFile.available()) {
      char value = dataFile.read();
      alteraPontinhos(value);
      movimentoMotor();
      delay(500);
    }

    // Close the file
    dataFile.close();
  } else {
    // If the file didn't open, print an error message
    Serial.println("Error opening file.");
  }
}

void movimentoMotor(){
    int i;
    for(i=0;i<6;i++)
    {
        if(pontinhos[i]==HIGH){
            for(posicaoServo[i]=0;posicaoServo[i]<90;posicaoServo[i]++){
                myServo[i].write(posicaoServo[i]);
                delay(5);
            }
        }
    }
    delay(1000);
    for(i=0;i<6;i++)
    {
        if(pontinhos[i]==HIGH){
            for(posicaoServo[i]=90;posicaoServo[i]>=0;posicaoServo[i]--){
                myServo[i].write(posicaoServo[i]);
                delay(5);
            }
        }
    }
}

// void alteraPontinhos(char caractere) {
//   for (int i = 0; i < 6; i++) {
//     pontinhos[i] = LOW; // Reset all pontinhos to LOW
//   }

//   switch (caractere) {
//     case 'a':
//       pontinhos[0] = HIGH;
//       break;
//     case 'b':
//       pontinhos[0] = HIGH;
//       pontinhos[2] = HIGH;
//       break;
//     // Add more cases as needed
//     default:
//       // Handle unsupported characters or do nothing
//       break;
//   }
// }
char alteraPontinhos (char caractere) {
int i;
for(i = 0; i < 6; i++)
{
pontinhos[i] = LOW;
}
switch (caractere) {
case 'a':
pontinhos[0] = HIGH;
break;
case 'b':
pontinhos[0] = HIGH;
pontinhos[2] = HIGH;
break;
case 'c':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
break;
case 'd':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[3] = HIGH;
break;
case 'e':
pontinhos[0] = HIGH;
pontinhos[3] = HIGH;
break;
case 'f':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
break;
case 'g':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
break;
case 'h':
pontinhos[0] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
break;
case 'i':
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
break;
case 'j':
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
break;
case 'k':
pontinhos[0] = HIGH;
pontinhos[4] = HIGH;
break;
case 'l':
pontinhos[0] = HIGH;
pontinhos[2] = HIGH;
pontinhos[4] = HIGH;
break;
case 'm':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[4] = HIGH;
break;
case 'n':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
break;
case 'o':
pontinhos[0] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
break;
case 'p':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[4] = HIGH;
break;
case 'q':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
break;
case 'r':
pontinhos[0] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
break;
case 's':
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[4] = HIGH;
break;
case 't':
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
break;
case 'u':
pontinhos[0] = HIGH;
pontinhos[4] = HIGH;
pontinhos[5] = HIGH;
break;
case 'v':
pontinhos[0] = HIGH;
pontinhos[2] = HIGH;
pontinhos[4] = HIGH;
pontinhos[5] = HIGH;
break;
case 'w':
pontinhos[1] = HIGH;
pontinhos[2] = HIGH;
pontinhos[3] = HIGH;
pontinhos[5] = HIGH;
break;
case 'x':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[4] = HIGH;
pontinhos[5] = HIGH;
break;
case 'y':
pontinhos[0] = HIGH;
pontinhos[1] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
pontinhos[5] = HIGH;
break;
case 'z':
pontinhos[0] = HIGH;
pontinhos[3] = HIGH;
pontinhos[4] = HIGH;
pontinhos[5] = HIGH;
break;
}
}
