/*write a program that asks the user to enter a word with
 an odd number of letters and then prints out a string
where the middle letter is printed once,the
 letters next to the middle are printed twice,
the letters next to them are printed three times,etc all in the
 order given by the original words.for instance, abcdefg would
 become aaaabbbccdeefffgggg.*/

#include<stdio.h>

int main()
{
    char words[100],copy_word[100];
    int letter_count=0,decrease=0,increase=1;
    int letter_count_orginal;

    printf("\n Enter a Words With Odd Letters : ");
    scanf("%s",&words);



    for(int i=0;words[i];i++){
    letter_count++;
    }
    letter_count_orginal=letter_count;

    if(letter_count%2!=0)
    {


    letter_count=letter_count+1;
    letter_count/=2;

    decrease=letter_count;


    printf("\n==================================================\n");

    printf(" ");
     for(int i=0;i<letter_count_orginal;i++){
        printf("%c",words[i]);
    }
    printf(" : ");


    for(int j=0;words[j];j++)
    {
    for(int i=1;i<=decrease;i++)
    {
    printf("%c ",words[j]);
    }
    --decrease;
    }

    for(int j=letter_count;words[j];j++){
    ++increase;
    for(int i=0;i<increase;i++)
    {

    printf("%c ",words[j]);

    }
    }
   printf("\n==================================================\n");

    }else{
    printf("\n==================================\n");
    printf("You Are Entered a Invalid Value\a");
    printf("\n==================================\n");
    }
   return 0;
}
