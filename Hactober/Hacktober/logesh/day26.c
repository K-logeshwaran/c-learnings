#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char num[40];
    puts("Enter a binary number");
    gets(num);
    puts("Before Flip ");
    puts(num);
    for (int i = 0; i < 40; i++)
    {
        if (num[i] == '\0')
            break;

        if (num[i] == '1' || num[i] == '0')
        {
            if (num[i] == '1')
                num[i] = '0';
            else
                num[i] = '1';
        }
        else
        {
            puts("Not a valid binary number");
            return 0;
        }

        // flipBits(num);
    }

    puts("After Flip ");
    puts(num);
    return 0;
}