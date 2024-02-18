#include <stdio.h>
#include <conio.h>

int main()

{
    
    while (1){
    if ( _kbhit() )
        int key_code = _getch();
        // do stuff depending on key_code
    else 
        continue;
    return 0;
}