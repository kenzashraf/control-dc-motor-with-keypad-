/*
for any ques pleas contact me in whatspp with (01150293496)
or mail (kenzashraf@yahoo.com )
created by EL KENZ  
*/
#include <Keypad.h>
const int relay1 =12;
const int relay2 =11;

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3 ,2}; //connect to the column pinouts of the keypad
char holdKey;
unsigned long t_hold;
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


//-----functions cases-----------------

void keypadEvent(KeypadEvent key){
  
    switch (keypad.getState()){
    case PRESSED:
        if (key == '#') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
        }
        break;
    case RELEASED:
        if (key == '#') {
          Serial.println("drill is stop");  
        }
        break;
       
    }
    //------------------------

      switch (keypad.getState()){
    case PRESSED:
        if (key == '*') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
        }
        break;

    case RELEASED:
        if (key == '*') {
            Serial.println("drill is RIGHT");  
        }
        break;
        case HOLD:
        if (key == '*') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          
      }
       break;
      }
//--------------------


  switch (keypad.getState()){
    case PRESSED:
        if (key == 'A') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
        }
        break;

         case RELEASED:
        if (key == 'A') {
          Serial.println("drill is RIGHT");  
        }
        break;     
     }
//---------------------

switch (keypad.getState()){
    case PRESSED:
        if (key == 'C') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("open");
        }
        break;

    case RELEASED:
        if (key == 'C') {
          Serial.println("drill is RIGHT");  
        }
        break;
        
    }  
//---------------------
    
    
      switch (keypad.getState()){
    case PRESSED:
        if (key == '1') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(60000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  
        }
        break;

    case RELEASED:
        if (key == '1') {
          Serial.println("drill is RIGHT");  
       }
       break;

    case HOLD:
        if (key == '1') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(60000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
      }
      
//----------------------
         switch (keypad.getState()){
    case PRESSED:
        if (key == '2') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(120000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  
        }
        break;

    case RELEASED:
        if (key == '2') {
          Serial.println("drill is RIGHT");  
        }
        break;
        case HOLD:
        if (key == '2') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(120000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
  }
//---------------
switch (keypad.getState()){
    case PRESSED:
        if (key == '3') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(180000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  
        }
        break;

    case RELEASED:
        if (key == '3') {
          Serial.println("drill is RIGHT");  
        }
        break;
        case HOLD:
        if (key == '3') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(180000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
      }

//-------------------
      switch (keypad.getState()){
    case PRESSED:
        if (key == '4') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(240000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  
        }
        break;

    case RELEASED:
        if (key == '4') {
          Serial.println("drill is RIGHT");  
        }
        break;

        case HOLD:
        if (key == '4') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(240000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
      }
 //-------------------
 switch (keypad.getState()){
    case PRESSED:
        if (key == '5') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(300000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  
        }
        break;

    case RELEASED:
        if (key == '5') {
          Serial.println("drill is RIGHT");  
        }
        break;
        case HOLD:
        if (key == '5') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(300000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
        }

//---------------------------------------

        switch (keypad.getState()){
    case PRESSED:
        if (key == '6') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(360000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  
        }
        break;

    case RELEASED:
        if (key == '6') {
          Serial.println("drill is RIGHT");  
        }
        break;
         case HOLD:
        if (key == '6') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(360000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
      }
//--------------------------------------
switch (keypad.getState()){
    case PRESSED:
        if (key == '7') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(420000);
  Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
        }
        break;

    case RELEASED:
        if (key == '7') {
          Serial.println("drill is RIGHT");  
        }
        break;
         case HOLD:
        if (key == '7') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(420000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
}
//------------------
switch (keypad.getState()){
    case PRESSED:
        if (key == '8') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(480000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
        }
        break;

    case RELEASED:
        if (key == '8') {
          Serial.println("drill is RIGHT");  
        }
        break;
         case HOLD:
        if (key == '8') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(480000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
}
//----------------------------

switch (keypad.getState()){
    case PRESSED:
        if (key == '9') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(540000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
        }
        break;

    case RELEASED:
        if (key == '9') {
          Serial.println("drill is RIGHT");  
        }
        break;
 case HOLD:
        if (key == '9') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(5400000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
         
}

switch (keypad.getState()){
    case PRESSED:
        if (key == '0') {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  Serial.println("on");
        delay(600000);
        Serial.println("off");
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
        }
        break;
    case RELEASED:
        if (key == '0') {
          Serial.println("drill is RIGHT");  
        }
        break;
         case HOLD:
        if (key == '0') {
          Serial.println("drill is LEFT");
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, HIGH);
          Serial.println("on");
          delay(600000);
          Serial.println("off");
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
      }
       break;
}
//-------------------------------------
}
void setup(){
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  Serial.begin(115200);
 keypad.addEventListener(keypadEvent); // Add an event listener for this keypad
  
}
  
void loop(){
  char key = keypad.getKey();
    if (key){
    Serial.println(key);
  
      }
  }




        
   

    
      


    
