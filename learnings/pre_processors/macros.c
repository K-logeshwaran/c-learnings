#include <stdio.h>
#include <stdlib.h>
#define CHANGETYPE(TYPE, POINTER) (TYPE *)POINTER
int main()
{
    int *p = (int *)malloc(sizeof(int));
    

    *p = 4;
    printf("%d", *p);
    return 0;
}