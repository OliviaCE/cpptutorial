#include <iostream>
#include "main.h"

int main()
{
    int x = 1000;

    const char name[7] = "Olivia";

    std::cout << "My Name is " << name;

    std::cout << "Simple OOP";

    if (x == 1000) {
        firstcallfunc();
    } else {
        secondcallfunc();
    }

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