#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calc_key_weight(char *pt)
{
    int sum = 0;
    for (int i = 0; i < strlen(pt); i++)
    {
        sum += (int)pt[i];
    }
    return sum;
}

void algo(int key_w, int char_w)
{
    double res = key_w / char_w;
    printf("\nkey_w %d char_w %d", key_w, char_w);
    if (res > 9025)
    {
        printf("\nGreater\n");
        return;
    }

    int c = sqrt(res);
    char CCC = c + 33;
    // printf("\ncf=%f cd=%d cperC=%c  c+32 pred=%d   c+32 pref=%f  c+32perC=%c  c_to_char=%c  \n", c, c, c, c + 32, c + 32, c + 32,CCC);
    printf("\n CCC = %c  int c = %d \n", CCC, c + 33);
    printf("\n CCC = %c  int c = %d \n", CCC, c + 33);
    printf("\n[result = %f] [sqrt=%d] [opt char = %c] [output char code %d] [inp char %c] ", res, c, CCC, c + 33, char_w);
    // printf("\n[result = %f] [sqrt=%f] [opt char = %c] [output char code %d] [inp char %c] ", res, c, c + 32, c + 32, char_w);
}

void reverse_algo(int key_w, int char_w)
{
    double res = key_w * char_w;
    printf("\nkey_w %d char_w %d", key_w, char_w);
}

int main()
{

    char key[] = "dome @@@ special key to the lkmakmkmas***@@@!!!jnjnj emkqlwmkqwwqdnljd sa jasidjasljsa dasijdas dslajdsakd shash lkamdkadma dlals;dla@km#k3lmldmekmdkewdndkmask";

    int key_weight = calc_key_weight(key);
    algo(key_weight, 'g');
    algo(key_weight, 'x');
    algo(key_weight, 'u');
    algo(key_weight, 'a');
    algo(key_weight, '#');
    algo(key_weight, ';');
    // reverse_algo(key_weight,'&');
    return 0;
}