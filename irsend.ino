#include <IRLib.h>
#include <IRLibMatch.h>
#include <IRLibRData.h>
#include <IRLibTimer.h>

//#include <IRLibAll.h>
     
IRsend mySender;
     
void setup() {
 Serial.begin(9600);
  }
     
 void loop() {
   if (Serial.read() != -1)
   {
        
      mySender.send(NEC,0x667FC8A1, 32);
      }
    delay(100);
    }
/*    
6B45A4E6
667FC8A1
667FC8A1
667FC8A1
667FC8A1
*/
