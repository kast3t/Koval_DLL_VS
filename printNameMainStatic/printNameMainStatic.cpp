#include <iostream>
#include "..\printNameDllStatic\Header.h"

int main()
{
    char buf[32];
    setlocale(LC_ALL, "Russian");
    
    printName(buf);
    std::cout << buf;
    std::cin.get();
}