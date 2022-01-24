#include <Keypad.h>

const byte ROWS = 5; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'#','/','*', '-'},
  {'7','8','9', NO_KEY},
  {'4', '5', '6', '+'},
  {'1', '2', '3', NO_KEY},
  {'0', '.','\n', NO_KEY}
};
byte rowPins[ROWS] = {3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 5, 4}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup() {
  Serial.begin(9600);
} 

void loop() {
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
}
