#include <stdio.h>

void main()
{
    char number[100];
    int count = 0;

    printf("Enter a Binary Number : ");
    gets(number);

    for (int i = 0; number[i]; i++)
    {
        ++count;
    }
    char *bitFlip(char s[], int index)
    {
        static int temp = 0;
        if (index != 0)
        {
            if (s[temp] == '0')
            {
                s[temp] = '1';
                ++temp;
                bitFlip(s, index - 1);
            }
            else
            {
                if (s[temp] == '1')
                {
                    s[temp] = '0';
                    ++temp;
                    bitFlip(s, index - 1);
                }
                else
                {
                    printf("\n This is Not a Binary  : \a \n");
                }
            }
        }
        return s;
    }
    printf(" %s", bitFlip(number, count));
}
