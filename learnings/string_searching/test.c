#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char **arr;
    unsigned int row;
} splitReturn;


char **create2D_arr(int r, int c)
{
    char **arr = (char **)malloc(sizeof(char *) * r);
    for (int i = 0; i < c; i++)
    {
        arr[i] = (char *)malloc(sizeof(char *) * c);
    }
    return arr;
}

splitReturn str_split(char splitter, char *string)
{
    // char arr[7][7];
    char **arr = create2D_arr(100, 100);
    int row = 0, col = 0, i = 0;
    while (1)
    {
        //printf("\n%c", string[i]);
        if (string[i] == splitter || string[i] == '\0')
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
    // for (int g = 0; g < row - 1; g++)
    // {
    //     printf("%s ", arr[g]);
    // }
    splitReturn val ;
    val.arr=arr;
    val.row=row;
    return val;
}

int main()
{
    char *text = "Students are forbiden to write or Doing similar work twice in the same program might let the compiler optimize between them. Building multiple executables that each microbenchmark a single implementation strategy is safer (but more";

    splitReturn d = str_split(' ', text);
    printf("RR %d\n",d.row);
    for (int i = 0; i < d.row; i++)
    {
        printf("%s\n", d.arr[i]);
    }

    // printf("looking ff %d\n", str_space_count(&text));
    // printf("After filter\n\n");
    // char *p = filter_string(text);
    // printf("\n%s", p);
    free(d.arr);

    return 0;
}