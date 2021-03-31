#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(1000);   // This delay can't be lower than 1 second
  DigiKeyboard.sendKeyStroke(0);   // Prevent missing the first character/key stroke
                    

  
  /**  Open Execute window  **/
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);   // Send Windows Key + R
  delay(500);                                        // Delay in miliseconds
  
  /**  Write the Program Name  **/
  DigiKeyboard.print("notepad");                     // Will "type" notepad on whatever window is active 
  delay(250);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  /**  Write Text  **/
  DigiKeyboard.println("Hello World"); 

   DigiKeyboard.println("                                     __,,,");
   DigiKeyboard.println("                              _.--\'    /");
   DigiKeyboard.println("                           .-\'        /");
   DigiKeyboard.println("                         .\'          |");
   DigiKeyboard.println("                        .\'           /");
   DigiKeyboard.println("                       /_____________|");
   DigiKeyboard.println("                     /`~~~~~~~~~~~~~~/");
   DigiKeyboard.println("                   /`               /");
   DigiKeyboard.println("    ____,....----'/_________________|---....,___");
   DigiKeyboard.println(",--""`             `~~~~~~~~~~~~~~~~~~`           `\"\"--,");
   DigiKeyboard.println("`'----------------.----,------------------------,-------'`");
    delay(250);
   DigiKeyboard.println("                   \\_/`\\  \-\"-/` /\  \ ");
    delay(250);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.println("       +------------------------------------+");
   DigiKeyboard.println("       | >>>         FROHE OSTERN       <<< |");
   DigiKeyboard.println("       +------------------------------------+");
   DigiKeyboard.println("               Du hast es geschafft!");
   DigiKeyboard.println("           Viel Spass mit dem Entenstummel");
   DigiKeyboard.println("                     wuenschen Dir");
   DigiKeyboard.println("                Deine Defense Haecksen");
    delay(250);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.println("       =======================================");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.println("       +++ Unterstuety uns auf haecksen.org +++");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.println("       =======================================");
  
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
