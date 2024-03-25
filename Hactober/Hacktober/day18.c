#include <stdio.h>
int main()
{
    int n;

    printf("\n Enter a Integer : ");
    scanf("%d", &n);
    char arr[n][n];
    int temp = n;
    temp = temp - 1;

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = ' ';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 || i == (n - 1)) || (j == 0 || j == (n - 1)))
            {
                arr[i][j] = '#';
            }
            else
            {
                arr[i][i] = '#';
                arr[i][temp] = '#';
            }
        }
        --temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %c", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
