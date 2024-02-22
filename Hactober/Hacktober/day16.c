#include<stdio.h>
int main()
{
    float ounces,p,o;
    int pounds;
    printf("\n Enter The Weight of Ounces : ");
    scanf("%f",&o);
    p=o/16;
    pounds=p;
    ounces=(p-pounds)*16;
    printf("\n=====================================\n");
    printf(" %d Pounds , %0.0f Ounces",pounds,ounces);
    printf("\n=====================================\n");
    return 0;
}
