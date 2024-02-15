#include <string.h>
#include <stdio.h>

#define SIZE 21

// char target[SIZE] = "a shiny white sphere";

int main(void)
{
    int p[5] = {3, 4, 5, 6, 8}; /* p points at the starting character
                             of the word we want to replace */
    /* start of "shiny" */
    puts("Before moce\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
    /*
    memmove(p + 1, p + 2, sizeof(int) * 3);
    memmove(pointer to index of element that needs to be over written,pointer to next index of element that needs to be over written,size of remaining elements)
    */
    memmove(p + 1, p + 2, sizeof(int) * 3);
    puts("after moce\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
}

/*********************  Expected output:  ************************

Before memmove, target is "a shiny white sphere"
After memmove, target becomes "a shiny shiny sphere"
*/