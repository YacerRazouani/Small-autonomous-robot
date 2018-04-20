#define F_CPU 8000000UL
#include <avr/io.h> 
#include <util/delay.h>
#pragma once
class lumiereDel
{
public:
    lumiereDel();
    lumiereDel(char port);
    ~lumiereDel();
    void activateRed();
    void activateGreen();
    void activateAmbre();
    void activateNeutral();
private:
    char port_;
    
};
