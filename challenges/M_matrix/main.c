#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// generate a fun to fill rand values
// input only rows and colmns->matrix
/*
[
    [M , 0 , 0 , 0 , M] ,
    [M , 0 , 0 , M , M] ,
    [0 , M , 0 , 0 , M] ,
]
*/

int fill_matrix(int r, int c, char **matrix)
{
    char options[] = "0M";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int choice = rand() % 2;
            matrix[i][j] = options[choice];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c\t", matrix[i][j]);
        }
        printf("\n");
    }
}

char **create_matrix(int r, int c)
{
    char **arr = malloc(sizeof(char *) * r);
    for (int i = 0; i < r; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * c);
    }
    return arr;
}

// xy index arr[x][y];

int search_near(int x, int y, char ***A, int r, int c)
{
    int count = 0;
    char **arr =*A;
    if (x < r - 1 && y == 0)
    {
        // can go 3 dir
        // right down down-right

        // right
        if (arr[x][y + 1] == 'M')
        {
            count++;
        }
        // down
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        // right-dwn-dig
        if (arr[x + 1][y + 1] == 'M')
        {
            count++;
        }
        return count;
    }
    else if (x < r && y == c - 1)
    {
        // can go 3 opposite to y=0
        // down left down-left
        // down
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        // left
        if (arr[x][y - 1] == 'M')
        {
            count++;
        }
        // left-down
        if (arr[x + 1][y - 1] == 'M')
        {
            count++;
        }
        return count;
    }
    else if (x == 0 && y != 0 && y < c - 2)
    {
        // can go 5 dir
        // left right -all down
        // left
        if (arr[x][y - 1] == 'M')
        {
            count++;
        }
        // right
        if (arr[x][y + 1] == 'M')
        {
            count++;
        }
        // down
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        // left-dwn-dig
        if (arr[x + 1][y - 1] == 'M')
        {
            count++;
        }
        // right-dwn-dig
        if (arr[x + 1][y + 1] == 'M')
        {
            count++;
        }
        return count;
    }
    else if (x == r - 1 && y != 0 && y < c - 2)
    {
        // can go 5 dir opposite to x=0
        // left right -all up
        // left
        if (arr[x][y - 1] == 'M')
        {
            count++;
        }
        // right
        if (arr[x][y + 1] == 'M')
        {
            count++;
        }
        // up
        if (arr[x - 1][y] == 'M')
        {
            count++;
        }
        // right-up-dig
        if (arr[x - 1][y + 1] == 'M')
        {
            count++;
        }
        // left-up-dig
        if (arr[x - 1][y - 1] == 'M')
        {
            count++;
        }
        return count;
    }
    else
    {
        // up
        if (arr[x - 1][y] == 'M')
        {
            count++;
        }
        // down
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        // left
        if (arr[x][y - 1] == 'M')
        {
            count++;
        }
        // right
        if (arr[x][y + 1] == 'M')
        {
            count++;
        }
        // right-up-dig
        if (arr[x - 1][y + 1] == 'M')
        {
            count++;
        }
        // left-up-dig
        if (arr[x - 1][y - 1] == 'M')
        {
            count++;
        }

        // left-dwn-dig
        if (arr[x + 1][y - 1] == 'M')
        {
            count++;
        }
        // right-dwn-dig
        if (arr[x + 1][y + 1] == 'M')
        {
            count++;
        }
        return count;
    }
    return count;
}

void output_matrix(int r, int c, char ***target)
{
    char **result_mat = create_matrix(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (target[i][j] == '0')
            {
                printf("next it \ni=%d j=%d",i,j);
                int count = search_near(i, j, target, r, c);
                printf("\ni=%d j=%d count =%d",i,j,count);
                char count_char = count + '0';
                result_mat[i][j] = count_char;
                // result_mat[i][j] = 'U';
            }
            else
            {
                result_mat[i][j] = target[i][j];
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c\t", result_mat[i][j]);
        }
        printf("\n");
    }
    free(result_mat);
}

int main()
{
    time_t t1;
    srand((unsigned)time(&t1));
    unsigned int r, c;
    printf("Enter rows and clm:");
    scanf("%d %d", &r, &c);
    char **a = create_matrix(r, c);
    printf("\n---Input----\n");
    fill_matrix(r, c, a);
    printf("\n---output----\n");
    output_matrix(r, c, &a);
    // printf("\n\n");
    // printf("count of choosen is %d", search_near(0, c - 1, a, r, c));
    free(a);

    return 0;
}