/*Generally,a year is a leap year if it is divisible by 4.
However,if it is also divisible by 100,then it is not a
leap year, except in the case that it is actually divisible by
400, in which case it is leap year.Write a program that asks the
user for a year and prints out whether it is a leap year or not. */
#include<stdio.h>
int main()
{
    int year;
    printf("\n Enter the year : ");
    scanf("%d",&year);

    if(year%100==0){
        if(year%400==0)
        {
            printf("\n Its a leap year : True\n");
        }else
        {
            printf("\n Its not a leap year : False\n");
        }
    }else
    {
        if(year%4==0)
            {
            printf("\n Its a leap year : True\n");
            }
        else
        {
            printf("\n Its not a leap year :False\n");
        }
    }

    return 0;
}
