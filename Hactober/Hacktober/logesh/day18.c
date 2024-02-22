#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int mat[n][n];
    int neg_j = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                mat[i][j] = 76;
            }
            else
            {
                if (i == j)
                {
                    mat[i][j] = 76;
                }
                else
                {

                    mat[i][j] = 32;
                }

            }

            mat[i][neg_j]=76;
            
        }
        neg_j--;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}