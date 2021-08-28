#include <iostream>
#include "main.h"

int main()
{
    firstcallfunc();
    secondcallfunc();
    return 0;
}

void firstcallfunc()
{
    MainClass theObj;
    theObj.helloworldone();
}

void secondcallfunc()
{
    MainClass theObj;
    theObj.helloworldtwo();
}