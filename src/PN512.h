<<<<<<< HEAD


#include "MFRC522.h"


class PN512: MFRC522
{
private:
    /* data */
public:
    PN512(/* args */);
    ~PN512();
};

PN512::PN512(/* args */)
{
}

PN512::~PN512()
{
}


=======
#ifndef PN512_h
#define PN512_h

#include <Arduino.h>
#include "MFRC522.h"

#define LED_BUILTIN 11

class PN512: public MFRC522
{
using MFRC522::MFRC522;

public: 
   void ledBlink(int ms, int pin);
   int printArrayHEX(char *message,byte *arrayToPrint, byte len);

};

#endif // PN512_h
>>>>>>> 79c5a6feeb5a1775274d2effad1261b4497c9663
