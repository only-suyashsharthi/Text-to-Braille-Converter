#include <SPI.h>
#include <SD.h>

const int chipSelect = 4; // Choose the appropriate pin for your setup

void setup() {
  Serial.begin(9600);

  // Check if the SD card is present and can be initialized
  if (SD.begin(chipSelect)) {
    Serial.println("Yes, SD card module installed successfully!");
    readAndDisplayFile("example.txt"); // Change the file name as needed
  } else {
    Serial.println("SD card module not found. Please check the connections.");
  }
}

void loop() {
  // Nothing to do here for this example
}

void readAndDisplayFile(const char *filename) {
  // Open the file
  File file = SD.open(filename);

  // Check if the file opened successfully
  if (file) {
    // Read characters from the file and display on serial monitor
    while (file.available()) {
      char c = file.read();
      if(c==32)
      {
        Serial.print(c);
        delay(5000);
      }
      else
      {
        Serial.print(c);
        delay(1000);
      }
      // Serial.print(c);
      // delay(1000); // Adjust the delay as needed
    }

    // Close the file
    file.close();
  } else {
    Serial.println("Error opening file. Check the file name and try again.");
  }
}
