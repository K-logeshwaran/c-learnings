#include <stdio.h>
#include <stdlib.h>



int main()
{
    FILE *fptr = fopen("sample.txt", "r");
    char buffer[1000];
    
    // filePointer is the file to read from
    while (!feof(fptr))
    {

        fread(buffer, sizeof(buffer), 2, fptr);
        // Print the read data
        printf("%s", buffer);
        
    }
    fclose(fptr);

    return 0;
}