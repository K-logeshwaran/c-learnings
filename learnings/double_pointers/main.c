#include <stdio.h>
#include <stdlib.h>
#include "dynamic_arr.h"

int main()
{
    int **array = malloc(sizeof(int *) * 5);
    for (int i = 0; i < 5; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * 5);
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = (i+1) * (1+j);
        }
    }
    printf("\n %d", array[0][0]);
    free(array);

    DynamicArray * *arr2 = malloc(sizeof(DynamicArray *)*5);
    for (int i = 0; i < 5; i++)
    {
        //        array[i] = (int *)malloc(sizeof(int) * 5);
        arr2[i]=dyaar_create_array();
        for (int j = 0; j < 5; j++)
        {
            dyaar_append(arr2[i],(i+1)*(j+1));
        }
    }


    return 0;
}