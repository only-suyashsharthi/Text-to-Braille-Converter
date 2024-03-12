# Text-to-Braille-Converter

1. Project Description:
   Utilized Arduino-driven servo motors to replicate Braille dots, facilitating translation of English text into tactile Braille script, enhancing accessibility for visually impaired individuals through innovative hardware implementation.

2. Purpose and Significance:
   Engineered to empower visually impaired individuals by enabling independent access to English text through tactile Braille representation, addressing the accessibility gap with a user-centric solution.

3. Technical Implementation:
   Programmed Arduino microcontroller to interpret English alphabet into Braille script, driving six servo motors to emulate Braille dot patterns. The entire system was integrated into a PCB board, transforming the concept into a practical working model for usability testing and refinement.
   
4. Circuit Scheme:
  Arduino       to         SD Card Module
  --------               ---------------
  5V ------------------- VCC
  GND ------------------ GND
  4 --------------------- CS
  11 (MOSI) ------------- MOSI
  12 (MISO) ------------- MISO
  13 (SCK) -------------- SCK
