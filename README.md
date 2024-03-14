# Text-to-Braille-Converter

1. Project Description:
   Utilized Arduino-driven servo motors to replicate Braille dots, facilitating translation of English text into tactile Braille script, enhancing accessibility for visually impaired individuals through innovative hardware implementation.

2. Purpose and Significance:
   Engineered to empower visually impaired individuals by enabling independent access to English text through tactile Braille representation, addressing the accessibility gap with a user-centric solution.

3. Technical Implementation:
   Programmed Arduino microcontroller to interpret English alphabet into Braille script, driving six servo motors to emulate Braille dot patterns. The entire system was integrated into a PCB board, transforming the concept into a practical working model for usability testing and refinement.
   
4. Circuit Scheme:
  Arduino to SD Card Module and servo motor
Arduino      Servo Motors               SD Card Module
-----------------------------------------------------
Pin 2   ---> Signal wire (Servo 1)   ----------------
Pin 3   ---> Signal wire (Servo 2)   ----------------
Pin 4   ---> Signal wire (Servo 3)   ----------------
Pin 5   ---> Signal wire (Servo 4)   ----------------
Pin 6   ---> Signal wire (Servo 5)   ----------------
Pin 7   ---> Signal wire (Servo 6)   ----------------
5V      ---> Power wire (All Servos) ----------------
GND     ---> Ground wire (All Servos)----------------
                                   ---> VCC
                                   ---> GND
Pin 12  ----------------------------> MISO
Pin 11  ----------------------------> MOSI
Pin 13  ----------------------------> SCK
Pin 10  ----------------------------> CS

  
 
