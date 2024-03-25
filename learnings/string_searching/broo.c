#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_contains(char *src, char *search_term)
{
    size_t len = strlen(search_term);
    size_t count = strlen(src) / len;
    char *current = malloc(sizeof(search_term));

    for (size_t i = 0; i < count; i++)
    {
        memmove(current, src + (i * len), len);
        if (strcmp(current, search_term) == 0)
        {
            free(current);
            return 1;
        }
    }
    free(current);
    return 0;
}

int main()
{
    char text[] = "Students are forbiden to write or";
    char to_find[] = "are";
    size_t source_len = strlen(text), cul_len = strlen(to_find);
    ;
    char *current = malloc(sizeof(to_find));
    current[sizeof(to_find) - 1] = '\0';
    printf("Vals\n");
    int j = 0;
    for (size_t i = 0; i < source_len / cul_len; i++)
    {
        printf("%d  ", i * 5);
        // memmove(current, text + (i * 5), 5);
        memmove(current, text + (i * cul_len), cul_len);
        if (strcmp(current, to_find) == 0)
        {
            printf("We founddd......\n starting index %d end index = %d", i * cul_len, (i * cul_len) + cul_len);
            printf("\n%c  %c", text[i * cul_len], text[(i * cul_len) + cul_len - 1]);

            break;
        }
        printf("\n %s \n ", current);
        printf("\n \n ->🫡");
        
        free(current);
    }

    // for (size_t i = 0; i < cul_len; i++)
    // {
    //     current[i]=text[i];
    //     printf("c=%c,t=%c\n",current[i],text[i]);

    // }

    // printf("\n\nsize %d ", sizeof to_find ) ;
    // printf("\n\nnew2 %d ", strcmp(current,"Stude"));
    // printf("\n\nnew3  ,s%d ,c%d " ,source_len,cul_len);
    // printf("\n\nnew4 %d ", strlen(to_find));

    return 0;
}