#include<stdio.h>

int main()
{
    int start=97;
    int end=122;

    for(int i=0;i<26;i++){

        for(int j=start;j<=end;j++)
        {
            printf("%c",j);
        }
          for(int j=97;j<start;j++)
        {
            printf("%c",j);
        }
        printf("\n");
        ++start;
    }

    return 0;
}
