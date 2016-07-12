#
#     
#
#     This is the wire connections beethween Teensy 3.2 and the Modules
#
#
#



# LCD ILI9163

TFT side   -------------------- Teensy
- Vcc       -->     +3V3V(!!!!)
- Gnd       -->     Gnd
- CS        -->     D10 pin (3v3 level!)
- RST       -->     3v3 connect to a MCU pin or tie to +3V3 or 10K to 3V3 (do NOT leave float!)
- A0        -->     D09 or RS pin (3v3 level!)
- SDA       -->     D11 MOSI  (3v3 level!)
- SCK       -->     D13 SCLK (3v3 level!)
- LED       -->     3v3 Some display need a resistor (see note below)

# DS3231

DS3231 side ------------------- Teensy

- Vcc       -->     +3V3V(!!!!)
- SDA       -->     D10 pin (3v3 level!)
- SCL       -->     3v3 connect to a MCU pin or tie to +3V3 or 10K to 3V3 (do NOT leave float
