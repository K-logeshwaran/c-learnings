#include <stdio.h>
#include <stdlib.h>
int main()
{

    unsigned int w = 7777889;
    // hexa decimal format;
    w = 0x00f;
    // printf("%d %d  %x", 10 & 1,~100,~w);
    printf("%d", w);
    printf("\n%d", sizeof(int));
    int a=2,b=8;
    printf("\nans %d", (a^b)^a);
    a=a^b;
    printf("\nlkf-1-> %d", a);
    printf("\nlkf->>>>>b-> %d", b);
    b=a^b;
    printf("\nlkf->>2>>>a-> %d", a);
    printf("\nlkf->>>>>b-> %d", b);
    a=a^b;
    printf("\nlkf->>3>>>a-> %d", a);
    printf("\nlkf->>>>>b-> %d", b);


    // Flags
    int feature = 3;
    unsigned int flags = 4;
    if ((flags & feature) != 0)
    {
        printf("\n feature %d enabled",feature);
    }

    return 0;
}