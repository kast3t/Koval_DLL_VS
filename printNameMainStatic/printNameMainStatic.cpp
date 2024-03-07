#include <iostream>
#include "..\printNameDllStatic\Header.h"

int main()
{
    char buffer[32];
    setlocale(LC_ALL, "Russian");
    
    printName(buffer);
    std::cout << buffer;
    std::cin.get();
}