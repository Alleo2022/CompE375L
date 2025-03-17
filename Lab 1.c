```
*
* 375 Lab 1 Sum24.cpp
*
* Created: 5/24/2024 1:48:45 PM
* Author : Anna Leonhardt
*/
#define F_CPU 16000000UL // 16MHz clock from the debug processor
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
  using namespace std;
  void dot(){
    PORTB |= (1<<PORTB5); // Set port bit B5 to 1 to turn on the LED
    _delay_ms(200); // Delay 200ms
    PORTB &= ~(1<<PORTB5); // Clear port bit B5 to 0 to turn off the LED
    _delay_ms(200);
  }
  void dash(){
    PORTB |= (1<<PORTB5); // Set port bit B5 to 1 to turn on the LED
    _delay_ms(600); // Delay 600ms
    PORTB &= ~(1<<PORTB5); // Clear port bit B5 to 0 to turn off the LED
    _delay_ms(200); //Delay between dot and dash 200 ms
  }
  void diffLspace(){
    PORTB &= ~(1<<PORTB5); // Clear port bit B5 to 0 to turn off the LED
    _delay_ms(400); //Delay between letters = 600 ms - 200 ms dash dot
    delay to keep 600 ms total
  }
  void wordspace(){
    PORTB &= ~(1<<PORTB5); // Clear port bit B5 to 0 to turn off the LED
    _delay_ms(800); //Delay between words = 1400 ms - 400 ms - 200 ms
    diffLspace and dash dot space.
  }

// Define letter functions
  void a(){
    dot();
    dash();
    diffLspace(); //diffLspace included here to ensure calling after every letter
  }
  void b(){
    dash();
    dot();
    dot();
    dot();
    diffLspace();
  }
  void c(){
    dash();
    dot();
    dash();
    dot();
    diffLspace();
  }
  void d(){
    dash();
    dot();
    dot();
    diffLspace();
  }
  void e(){
    dot();
    diffLspace();
  }
  void f(){
    dot();
    dot();
    dash();
    dot();

    diffLspace();
  }
  void g(){
    dash();
    dash();
    dot();
    diffLspace();
  }
  void h(){
    dot();
    dot();
    dot();
    dot();
    diffLspace();
  }
  void ii(){ //ii is used instead of i to avoid indexing problems later in the code
    dot();
    dot();
    diffLspace();
  }
  void j(){
    dot();
    dash();
    dash();
    dash();
    diffLspace();
  }
  void k(){
    dash();
    dot();
    dash();
    diffLspace();
  }
  void l(){
    dot();
    dash();
    dot();
    dot();
  diffLspace();
  }
  void m(){
    dash();
    dash();
    diffLspace();
  }
  void n(){
    dash();
    dot();
    diffLspace();
  }
  void o(){
    dash();
    dash();
    dash();
    diffLspace();
  }
  void p(){
    dot();
    dash();
    dash();
    dot();
    diffLspace();
  }
  void q(){
    dash();
    dash();
    dot();
    dash();
    diffLspace();
  }
  void r(){
    dot();
    dash();
    dot();
    diffLspace();
  }
  void s(){
    dot();
    dot();
    dot();
    diffLspace();
  }
  void t(){
    dash();
    diffLspace();
  }
  void u(){
    dot();
    dot();
    dash();
    diffLspace();
  }
  void v(){
    dot();
    dot();
    dot();
    dash();
    diffLspace();
  }
  void w(){
    dot();
    dash();
    dash();
    diffLspace();
  }
  void x(){
    dash();
    dot();
    dot();
    dash();
    diffLspace();
  }
  void y(){
    dash();
    dot();
    dash();
    dash();
    diffLspace();
  }
  void z(){
    dash();
    dash();
    dot();
    dot();
    diffLspace();
  }
  void one(){
    dot();
    dash();
    dash();
    dash();
    dash();
    diffLspace();
  }
  void two(){
    dot();
    dot();
    dash();
    dash();
    dash();
    diffLspace();
  }
  void three(){
    dot();
    dot();
    dot();
    dash();
    dash();
    diffLspace();
  }
  void four(){
    dot();
    dot();
    dot();
    dot();
    dash();
    diffLspace();
  }
  void five(){
    dot();
    dot();
    dot();
    dot();
    dot();
    diffLspace();
  }
  void six(){
    dash();
    dot();
    dot();
    dot();
    dot();
    diffLspace();
  }
  void seven(){
    dash();
    dash();
    dot();
    dot();
    dot();
    diffLspace();
  }

  void eight(){
    dash();
    dash();
    dash();
    dot();
    dot();
    diffLspace();
  }
  void nine(){
    dash();
    dash();
    dash();
    dash();
    dot();
    diffLspace();
  }
  void zero(){
    dash();
    dash();
    dash();
    dash();
    dash();
    diffLspace();
  }
  void stringtomorse(char toPrint){ //Translates the given string to morse code using an if statement and the letter/number functions
    if(toPrint == 'a') a(); //If the character presented is equal to the printed letter, the corresponding letter function is called.
    else if(toPrint == 'b') b();
    else if(toPrint == 'c') c();
    else if(toPrint == 'd') d();
    else if(toPrint == 'e') e();
    else if(toPrint == 'f') f();
    else if(toPrint == 'g') g();
    else if(toPrint == 'h') h();
    else if(toPrint == 'i') ii();
    else if(toPrint == 'j') j();
    else if(toPrint == 'k') k();  
    else if(toPrint == 'l') l();
    else if(toPrint == 'm') m();
    else if(toPrint == 'n') n();
    else if(toPrint == 'o') o();
    else if(toPrint == 'p') p();
    else if(toPrint == 'q') q();
    else if(toPrint == 'r') r();
    else if(toPrint == 's') s();
    else if(toPrint == 't') t();
    else if(toPrint == 'u') u();
    else if(toPrint == 'v') v();
    else if(toPrint == 'w') w();
    else if(toPrint == 'x') x();
    else if(toPrint == 'y') y();
    else if(toPrint == 'z') z();
    else if(toPrint == '0') zero();
    else if(toPrint == '1') one();
    else if(toPrint == '2') two();
    else if(toPrint == '3') three();
    else if(toPrint == '4') four();
    else if(toPrint == '5') five();
    else if(toPrint == '6') six();
    else if(toPrint == '7') seven();
    else if(toPrint == '8') eight();
    else if(toPrint == '9') nine();
    else if(toPrint == ' ') wordspace(); //This ensures all spaces call the wordspace function to enable the delay.
  }
  int main(void){
    DDRB |= (1<<DDB5); // Set port bit B5 in data direction register B to 1: an OUTput
    while(1){
      char stringToPrint [] = "anna leonhardt 826624208"; //sets a string of characters to the array to be sorted through
      int length = (unsigned)strlen(stringToPrint); //Traverses across the length of the string to apply the correct funtions.
      for(int i = 0; i < length; i++){ //Allows for the increase in indexing across the characters in the array
      stringtomorse(stringToPrint[i]); //Calls the stringtomorse function to translate all the given letters, numbers, and spaces to morse
      }
//Displays a larger delay to demonstrate the end of the string before repeating
wordspace();
wordspace();
    }
}
```
