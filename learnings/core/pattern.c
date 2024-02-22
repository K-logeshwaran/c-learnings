#include <stdio.h>
#include <stdlib.h>

int isMid(int x, int y, int wid, int he)
{
    int x2 = (wid - 1) / (he - 1);
    int y2 = (wid - 1) / (he - 1);
    printf("\n%d %d \n", x2, y2);
    if (x2 == x && y2 == y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    int n = 50;
    int temp = n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 || i == n-1) || (((temp ) == j) && count == 0))
            {
                printf("*");
                count++;
            }

            else

            {

                printf(" ");
            }
            count=0;
        }
        --temp;
        printf("\n");
    }

    return 0;
}