//10/01/26
//LED Reaction Game - Arjun Amarakone

#include <LiquidCrystal.h>
#include <limits.h>

const int Button = 2; //Button
const int LED = 3; //LED Control
const int Enable = 6; //Enable Pin
const int DB4 = 12; //Pin 4 LCD
const int DB5 = 11; //Pin 5 LCD
const int DB6 = 10; //Pin 6 LCD
const int DB7 = 9; //Pin 7 LCD
const int RS = 7; //Register Select

LiquidCrystal lcd(RS, Enable, DB4, DB5, DB6, DB7); //create LCD object

void setup() { //State LCD dimensions to library (16x2)
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(Button,INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

unsigned long highscore = ULONG_MAX; //set highscore to max

void loop(){

  //Inital Game Header
  lcd.setCursor(0,0);
  lcd.print("Reaction Game");
  lcd.setCursor(0,1);
  lcd.print("Get ready!");

  long Delaytime = random(2000,5000); //randomly chooses delaytime(ms)
  unsigned long waitStart = millis();
  while(millis() - waitStart < Delaytime){
    //blank display
  }
  lcd.clear();//clear opening text
  digitalWrite(LED, HIGH);
  unsigned long startTime = millis();


  while (digitalRead(Button) == HIGH){
    //wait for button
  }


  unsigned long endTime = millis(); //record end time

  digitalWrite(LED, LOW);

  unsigned long reactionTime = endTime - startTime;
  

  unsigned long displayStart = millis();
  Serial.println(reactionTime);
  while(millis() - displayStart < 8000){ //set time to display score
    lcd.setCursor(0, 0); //Set cursor to top left of display
    lcd.print("Score:");
    lcd.print(reactionTime);
    lcd.print("ms");
    if (reactionTime < highscore){ //check if new highscore for user
      highscore = reactionTime;
    }
    lcd.setCursor(0,1);//set LCD to second row
    lcd.print("Best:");
    lcd.print(highscore);
    lcd.print("ms");
  }
}//end of loop