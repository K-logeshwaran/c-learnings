#include <stdio.h>
#include <string.h>
void main()
{
    char string_1[100], string_2[100];
    int length_1 = 0, length_2 = 0, answer = 0;
    printf("\n Enter Fist String   : ");
    gets(string_1);
    printf("\n Enter Second String : ");
    gets(string_2);
    for (int i = 0; string_1[i]; i++)
    {
        ++length_1;
    }
    for (int i = 0; string_2[i]; i++)
    {
        ++length_2;
    }
    length_1 = length_1 - 1;
    length_2 = length_2 - 1;

    int firstDiff(char s[], char t[], int index_1, int index_2)
    {
        static int temp = 0;
        if (temp <= index_2)
        {
            if (s[temp] != t[temp])
            {
                return temp;
            }
            ++temp;
            firstDiff(s, t, index_1 - 1, index_2);
        }
    }
    answer = firstDiff(string_1, string_2, length_1, length_2);
    if (length_1 >= answer || length_2 >= answer)
    {
        printf("\n Different index value is : %d\n", answer);
    }
    else
    {
        printf("\n ALL INDEX VALUES ARE EQUAL \n");
    }
}
