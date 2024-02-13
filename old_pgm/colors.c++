#include <iostream>
#include <windows.h> // for Windows only

#define printWithClr(hConsole,clr,val) SetConsoleTextAttribute(hConsole, clr);std::cout << val << std::endl;
#define toDefault(hConsole) SetConsoleTextAttribute(hConsole, 7);
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // You can use different colors by changing the number 
    // inside the square brackets
    SetConsoleTextAttribute(hConsole, 10); // Green text
    std::cout << "Hello, world!" << std::endl;
    SetConsoleTextAttribute(hConsole, 14); // Yellow text
    std::cout << "This text is in yellow." << std::endl;
    SetConsoleTextAttribute(hConsole, 7); // Reset to default text color
    std::cout << "Back to default text color." << std::endl;
    printWithClr(hConsole,9,"Bro I did meta programming :)");
    toDefault(hConsole);
    return 0;
}
