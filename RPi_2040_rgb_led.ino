/*
Einen Code für arduino IDE für den Mikrocontroller RP2040-Zero. 
Bibliothek NeoPixel zur Steuerung des PIN 16 mit RGB LED. 
Die Farben der RGB ändern sich langsam.
*/

#include <Adafruit_NeoPixel.h>

#define PIN 16 // Pin, an dem die NeoPixel LED angeschlossen ist
#define NUMPIXELS 1 // Anzahl der NeoPixel LEDs

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
pixels.begin(); // Initialisiere die NeoPixel
}

void loop() {
// Ändere die Farben langsam
for (int i = 0; i < 256; i++) {
// Rot zu Grün
pixels.setPixelColor(0, pixels.Color(i, 255 - i, 0));
pixels.show();
delay(10);
}

for (int i = 0; i < 256; i++) {
// Grün zu Blau
pixels.setPixelColor(0, pixels.Color(255 - i, 0, i));
pixels.show();
delay(10);
}

for (int i = 0; i < 256; i++) {
// Blau zu Rot
pixels.setPixelColor(0, pixels.Color(0, i, 255 - i));
pixels.show();
delay(10);
}
}
