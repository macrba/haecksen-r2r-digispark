#include "DigiKeyboard.h"
#include "DigiKeyboardDe.h"

void setup() {
  DigiKeyboard.delay(1000);   // This delay can't be lower than 1 second
  DigiKeyboard.sendKeyStroke(0);   // Prevent missing the first character/key stroke
                    

  
  /**  Open Execute window  **/
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);   // Send Windows Key + R
  delay(500);                                        // Delay in miliseconds
  
  /**  Write the Program Name  **/
  DigiKeyboard.print("notepad");                     // Will "type" notepad on whatever window is active 
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  /**  Write Text  **/
   DigiKeyboardDe.println("Hallo Haeckse"); 
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboardDe.println("       +------------------------------------+");
   DigiKeyboardDe.println("       | >>>         FROHE OSTERN       <<< |");
   DigiKeyboardDe.println("       +------------------------------------+");
   DigiKeyboardDe.println("               Du hast es geschafft!");
   DigiKeyboardDe.println("           Viel Spass mit dem Entenstummel");
   DigiKeyboardDe.println("                     wuenschen Dir");
   DigiKeyboardDe.println("                Deine Defense Haecksen");
   DigiKeyboard.delay(250);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboardDe.println("       ========================================");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboardDe.println("       +++ Unterstuetz uns auf haecksen.org +++");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboardDe.println("       ========================================");
  
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
