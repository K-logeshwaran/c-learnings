/* Given an integer N , write a program to
obtain the number of occurrences of the digit
4 in the given number. */

#include<stdio.h>
int main()
{
    int N,digit,modul,count;
    printf("Enter The Number            : ");
    scanf("%d",&N);
    printf("Enter The Occurrences Digit : ");
    scanf("%d",&digit);
    count=0;
    while(N)
    {
    modul=N%10;
    if(modul==digit)
    {
        ++count;
    }
    N=N/10;
}
printf("==========================================\n");
printf("No.of.Occurrences of the Digit %d is : %d\n",digit,count);
printf("==========================================");
 return 0;
}
