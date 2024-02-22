#include <stdio.h>
#include <stdlib.h>

int main()

{

    FILE *fp = fopen("file.txt", "r");
    fseek(fp, 0, SEEK_END);

    printf(" size of %ld ", ftell(fp));
    free(fp);
    return 0;
}