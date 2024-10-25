/* File Name: myBlink.cpp
  This is the application file for the LED class. 
    This application accepts 2 command line argument:
    First Argument:
      on - Turns the LEDs on
      off - Turns the LEDs off
      flash - Makes the LEDs blink
      status - Reads the status of the LEDs
      blink - Blinks the LEDs
    Second Argument:
      This argument only works with blink
      It accepts an integer for the number of blinks
    Example invocation: ./derek_LED on
*/

#include "derek_LED.h"
#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;

int main(int argc, char* argv[]){
  if(argc!=4){
    cout << "Usage is makeLEDs <command> <LED> <Blinks>" << endl;
    cout << " command is one of: on, off, flash, blink,  or status" << endl;
    cout << "e.g. makeLEDs flash 0 0" << endl;
  }
  cout << "Starting the makeLEDs program" << endl;
  string cmd(argv[1]);
  int led = stoi(argv[2]);
 
 LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   
  if(cmd=="on"){
    leds[led].turnOn();
  }
  else if(cmd=="off"){
    leds[led].turnOff();
  }
  else if(cmd=="flash"){
    leds[led].flash("100");
  }
  else if(cmd=="status"){
    leds[led].outputState();
  }
  else if(cmd=="blink"){
      int n = stoi(argv[3]);
      leds[led].blink(n);
    }

    else{ cout << "Invalid command!" << endl; }
  
  cout << "Finished the makeLEDs program" << endl;
  return 0;
}
