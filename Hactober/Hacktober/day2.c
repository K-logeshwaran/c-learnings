/*Given an integer N, write a program to obtain the
sum of the first and last digits of the
number. (You're not allowed to convert the number to string). */

#include<stdio.h>
int main()
 {
 int N,first_digit, last_digit,sum;

 printf("=======================================\n");
 printf(" 10 DIGIT NUMBER IS THE MAXIMUM VALUE\n");
 printf("=======================================\n");

 printf("Enter The Number :");
 scanf("%d",&N);

 last_digit=N%10;
 for(int i =1;N>=10;i++)
{
    N=N/10;
}
 first_digit=N;
 sum=first_digit+last_digit;

 printf("=======================================\n");
 printf("The Sum of First and Last Digit is : %d \n",sum);
 printf("=======================================");

 return 0;
 }
