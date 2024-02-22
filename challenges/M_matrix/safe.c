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

int search_near(int x, int y, char **arr, int r, int c)
{
    int count = 0;
    // all
    if (x - 1 > 0 && y - 1 > 0 && x + 1 < r && y + 1 < c)

    {
        printf("eeeeee");
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
        // right-up-dig
        if (arr[x - 1][y + 1] == 'M')
        {
            count++;
        }
        // left-up-dig
        if (arr[x + 1][y - 1] == 'M')
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

    if (x == 0 && y != c - 1)
    {
        // printf("eeeeee33");
        // can go 5
        //  left,right,lft-dwn,rig-dwn,dwn
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
        // down
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        return count;
    }

    if (x == r - 1 && y != c - 1)
    {
        // printf("%c ", arr[x][y]);

        // printf("\n up %c ", arr[x - 1][y]);
        // printf(" \nleft %c ", arr[x][y - 1]);
        // printf(" \nright %c ", arr[x][y + 1]);
        // printf(" \nright-up %c ", arr[x - 1][y + 1]);
        // printf(" \nleft-up %c ", arr[x - 1][y - 1]);
        // can go 5
        // up,lft,rht,left-up,rht-up
        // up
        if (arr[x - 1][y] == 'M')
        {
            count++;
        }

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
        return count;
    }
    if (x == 0 && y == 0)
    {
        // can go
        // down,right,right-dwn
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        if (arr[x][y + 1] == 'M')
        {
            count++;
        }
        if (arr[x + 1][y + 1] == 'M')
        {
            count++;
        }
        return count;
    }
    if (x == 0 && y == c - 1)
    {
        // can go
        // down,left,left-dwn
        if (arr[x + 1][y] == 'M')
        {
            count++;
        }
        if (arr[x][y - 1] == 'M')
        {
            count++;
        }
        if (arr[x + 1][y - 1] == 'M')
        {
            count++;
        }
    }
    if (x == r - 1 && y == 0)
    {
        // can go
        // up,right,right-up
        if (arr[x - 1][y] == 'M')
        {
            count++;
        }
        if (arr[x][y + 1] == 'M')
        {
            count++;
        }
        if (arr[x - 1][y + 1] == 'M')
        {
            count++;
        }
        return count;
    }
    if (x == r - 1 && y == c - 1)
    {
        // can go
        // up,left,left-up
        if (arr[x - 1][y] == 'M')
        {
            count++;
        }
        if (arr[x][y - 1] == 'M')
        {
            count++;
        }
        if (arr[x - 1][y - 1] == 'M')
        {
            count++;
        }
    }
    return count;
}

void output_matrix(int r, int c, char **target)
{
    char **result_mat = create_matrix(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (target[i][j] == '0')
            {
                int count = search_near(i, j, target, r, c);
                char count_char = count + '0';
                result_mat[i][j] = count_char;
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
    output_matrix(r,c,a);
    // printf("\n\n");
    // printf("count of choosen is %d", search_near(0, c - 1, a, r, c));
    free(a);

    return 0;
}