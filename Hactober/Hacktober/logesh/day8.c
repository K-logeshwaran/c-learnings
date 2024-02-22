#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **str_split(char splitter, char *string)
{
    char arr[7][7];
    int row = 0, col = 0, i = 0;
    while (1)
    {

        if (string[i] == ';' || string[i] == '\0')
        {
            arr[row][col] = '\0';
            row++;
            col = 0;
            i++;
            if (string[i] == '\0')
                break;

            continue;
        }
        // printf("i%d j%d",row,i);
        arr[row][col] = string[i];
        col++;
        i++;
    }

    row += 1;
    printf("row %d ", row);
    for (int g = 0; g < row - 1; g++)
    {
        printf("%s ", arr[g]);
    }

    return arr;
}

int main()
{

    char sequence[40];
    int sum = 0;
    char arr[7][7];
    puts("Enter idg");
    gets(sequence);
    int row = 0, col = 0, i = 0;
    while (1)
    {

        if (sequence[i] == ';' || sequence[i] == '\0')
        {
            arr[row][col] = '\0';
            row++;
            col = 0;
            i++;
            if (sequence[i] == '\0')
                break;

            continue;
        }
        // printf("i%d j%d",row,i);
        arr[row][col] = sequence[i];
        col++;
        i++;
    }

    printf("row %d ", row);
    for (int g = 0; g < row ; g++)
    {
        printf("%s ", arr[g]);
        sum+=atoi(arr[g]);
    }
    printf("Sum is %d",sum);

    return 0;
}