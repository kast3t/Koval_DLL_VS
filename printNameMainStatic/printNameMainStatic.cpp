#include <iostream>
#include "..\printNameDllStatic\Header.h"

int main()
{
    char buffer[32];
    setlocale(LC_ALL, "Russian");
    
    // Добавлен новый комментарий в ветке experiment, который был потом изменён
    printName(buffer);
    std::cout << buffer;
    std::cin.get();
}