#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, m;
    printf("\n Enter Row value    : ");
    scanf("%d", &n);
    printf("\n Enter Column Value : ");
    scanf("%d", &m);
    char array[n][m];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int random_1 = rand() % 2 + 1;
            if (random_1 == 2)
            {
                array[i][j] = 77;
            }
            else
            {
                array[i][j] = 0;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == 77)
            {
                printf(" %c ", array[i][j]);
            }
            else
            {
                printf(" %d ", array[i][j]);
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == 0)
            {
                if (j - 1 >= 0 && array[i][j - 1] == 77)
                {
                    array[i][j]++;
                }
                if (j + 1 <= m - 1 && array[i][j + 1] == 77)
                {
                    array[i][j]++;
                }
                if (i - 1 >= 0 && array[i - 1][j] == 77)
                {
                    array[i][j]++;
                }
                if (i + 1 <= n - 1 && array[i + 1][j] == 77)
                {
                    array[i][j]++;
                }
                if (i - 1 >= 0 && j - 1 >= 0 && array[i - 1][j - 1] == 77)
                {
                    array[i][j]++;
                }
                if (i - 1 >= 0 && j + 1 < m - 1 && array[i - 1][j + 1] == 77)
                {
                    array[i][j]++;
                }
                if (i + 1 <= n - 1 && j - 1 >= 0 && array[i + 1][j - 1] == 77)
                {
                    array[i][j]++;
                }
                if (i + 1 <= n - 1 && j + 1 <= m - 1 && array[i + 1][j + 1] == 77)
                {
                    array[i][j]++;
                }
            }
        }
    }
    printf("\n=============================\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == 77)
            {
                printf(" %c ", array[i][j]);
            }
            else
            {
                printf(" %d ", array[i][j]);
            }
        }
        printf("\n");
    }
}
