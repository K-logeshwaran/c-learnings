/*Write a program that asks the user to enter a string
and then prints out the first letter, then the first two
letters, then the first three letters, etc., all on the
same line. For instance, if the user enters abcde, the
 program would print out a ab abc abcd abcde. */

#include<stdio.h>
int main(){

char word[100];
int letter_count=0;

printf("\n Enter a Word : ");
gets(word);
for(int i=0;word[i];i++)
{
++letter_count;
}
printf("%d",letter_count);
printf("\n======================================\n");
printf(" %s : ",word);
for(int i=0;i<letter_count;i++)
{
int p=-1;
for(int j=-1;j<i;j++)
{
++p;
printf("%c",word[p]);
}
printf(" ");
}
printf("\n======================================\n");


return 0;
}

