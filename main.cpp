#include <iostream>
#include "main.h"

void firstcallbackfunction()
{
    MyClass myObj;
    myObj.firsthelloworld();
}

void secondcallbackfunction()
{
    MyClass myObj;
    myObj.secondhelloworld();
}

void banner()
{
    const char banner[] = "CPP FUNCTION CALLER\n";

    std::cout << banner;
}

void callbackfunction()
{
    int function;
    std::cout << "Enter a number to print any function >> ";
    std::cin >> function;
}

int main()
{
    banner();

    callbackfunction();

    int x;

    if (x == 10) {
        firstcallbackfunction();
    } else {
        secondcallbackfunction();
    }

    return 0;
}
