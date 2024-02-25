#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    char **arr;
    unsigned int row;
} splitReturn;

int str_contains(char *src, char *search_term)
{
    size_t len = strlen(search_term);
    size_t count = strlen(src);
    char *current = malloc(sizeof(char) * (len + 1));
    printf("\nlen %d\n", len);
    current[len] = '\0';
    for (size_t i = 0; i < count; i++)
    {
        // memmove(current, src + (i * len), len);
        memmove(current, src + i, len);
        printf("\n%s", current);
        if (strcmp(current, search_term) == 0)
        {
            free(current);
            return 1;
        }
    }
    free(current);
    return 0;
}

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
        // printf("\n%c", string[i]);
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
    splitReturn val;
    val.arr = arr;
    val.row = row;
    return val;
}

int str_count(char **string, char elm)
{
    int count = 0;
    for (size_t i = 0; i < strlen(*string); i++)
    {
        printf("`%c", *((*string) + i));
        if (*(*string + i) == elm)
        {
            count += 1;
        }
        // printf("%c\n",*(string+i));
    }

    return count;
}

char *srt_rem_char(char *string, char item)
{
    int no_of_spc = str_count(&string, item);
    size_t sz = sizeof(char) * (strlen(string) - no_of_spc);
    printf("\nszz->%d\n", sz);
    char *new_str = malloc(sizeof(char) * sz);
    new_str[sz] = '\0';
    if (new_str == NULL)
    {
        printf("Mem alloc fail");
        exit(3);
    }

    int i = 0;
    int j = 0;

    while (1)
    {
        if (j == sz)
        {
            break;
        }
        char c = *(string + i);
        if (c == item)

        {
            i += 1;
            continue;
        }
        new_str[j] = string[i];
        j += 1;
        i += 1;
    }
    printf("i=%d  j= %d", i, j);
    return new_str;
}

int main()
{
    char *text = "Students are forbiden to write or Doing similar work twice in the same program might let the compiler optimize between them. Building multiple executables that each microbenchmark a single implementation strategy is safer (but more";
    char *to_find = "executables";
    // char *refinex_txt = filter_string(text);
    if (str_contains(text, to_find) == 1)
    {
        printf("Yesss......");
    }
    else
    {
        printf("Nooooooooo");
    }

    splitReturn r= str_split(' ', text);
    for (int i = 0; i < r.row-5; i++)
    {
        printf("\n%s", r.arr[i]);
    }

    // printf("looking ff %d\n", str_space_count(&text));
    // printf("After filter\n\n");
    // char *p = filter_string(text);
    // printf("\n%s", p);
    free(r.arr);

    return 0;
}
