#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t1;
    srand((unsigned)time(&t1));
    unsigned int r, c;
    printf("Enter rows and clm:");
    scanf("%d %d", &r, &c);

    // create_matrii
    char arr[r][c];
    char result_mat[r][c];
    char options[] = "0M";
    int count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int choice = rand() % 2;
            arr[i][j] = options[choice];
        }
    }
    printf("\n---Input----\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c\t", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == '0')
            {
               
                if (i < r - 1 && j == 0)
                {
                    // can go 3 dir
                    // right down down-right

                    // right
                    if (arr[i][j + 1] == 'M')
                    {
                        count++;
                    }
                    // down
                    if (arr[i + 1][j] == 'M')
                    {
                        count++;
                    }
                    // right-dwn-dig
                    if (arr[i + 1][j + 1] == 'M')
                    {
                        count++;
                    }
                    
                }
                else if (i < r && j == c - 1)
                {
                    // can go 3 opposite to j=0
                    // down left down-left
                    // down
                    if (arr[i + 1][j] == 'M')
                    {
                        count++;
                    }
                    // left
                    if (arr[i][j - 1] == 'M')
                    {
                        count++;
                    }
                    // left-down
                    if (arr[i + 1][j - 1] == 'M')
                    {
                        count++;
                    }
                    
                }
                else if (i == 0 && j != 0 && j < c - 2)
                {
                    // can go 5 dir
                    // left right -all down
                    // left
                    if (arr[i][j - 1] == 'M')
                    {
                        count++;
                    }
                    // right
                    if (arr[i][j + 1] == 'M')
                    {
                        count++;
                    }
                    // down
                    if (arr[i + 1][j] == 'M')
                    {
                        count++;
                    }
                    // left-dwn-dig
                    if (arr[i + 1][j - 1] == 'M')
                    {
                        count++;
                    }
                    // right-dwn-dig
                    if (arr[i + 1][j + 1] == 'M')
                    {
                        count++;
                    }
                    
                }
                else if (i == r - 1 && j != 0 && j < c - 2)
                {
                    // can go 5 dir opposite to i=0
                    // left right -all up
                    // left
                    if (arr[i][j - 1] == 'M')
                    {
                        count++;
                    }
                    // right
                    if (arr[i][j + 1] == 'M')
                    {
                        count++;
                    }
                    // up
                    if (arr[i - 1][j] == 'M')
                    {
                        count++;
                    }
                    // right-up-dig
                    if (arr[i - 1][j + 1] == 'M')
                    {
                        count++;
                    }
                    // left-up-dig
                    if (arr[i - 1][j - 1] == 'M')
                    {
                        count++;
                    }
                    
                }
                else
                {
                    // up
                    if (arr[i - 1][j] == 'M')
                    {
                        count++;
                    }
                    // down
                    if (arr[i + 1][j] == 'M')
                    {
                        count++;
                    }
                    // left
                    if (arr[i][j - 1] == 'M')
                    {
                        count++;
                    }
                    // right
                    if (arr[i][j + 1] == 'M')
                    {
                        count++;
                    }
                    // right-up-dig
                    if (arr[i - 1][j + 1] == 'M')
                    {
                        count++;
                    }
                    // left-up-dig
                    if (arr[i - 1][j - 1] == 'M')
                    {
                        count++;
                    }

                    // left-dwn-dig
                    if (arr[i + 1][j - 1] == 'M')
                    {
                        count++;
                    }
                    // right-dwn-dig
                    if (arr[i + 1][j + 1] == 'M')
                    {
                        count++;
                    }
                    
                }
               
                char count_char = count + '0';
                result_mat[i][j] = count_char;
                count=0;
                // result_mat[i][j] = 'U';
            }
            else
            {
                result_mat[i][j] = arr[i][j];
            }
        }
    }
    printf("\n---output----\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c\t", result_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}