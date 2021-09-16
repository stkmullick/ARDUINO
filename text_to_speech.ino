#include"Talkie.h"
#include"Vocab_US_ALPHABET.h"
#include"Vocab_Special.h"
Talkie voice; 
void setup() {
  // put your setup code here, to run once:

}

void loop() {
   voice.say(spPAUSE2);
   voice.say(sp2_MY);
   voice.say(sp2_DANGER);
   voice.say(sp3_STORM);
   voice.say(sp3_IN);
   voice.say(sp3_THE);// put your main code here, to run repeatedly:

}
