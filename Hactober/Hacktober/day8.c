/*Write a program that asks the user to enter s sequence
of integers separated by semicolons.Your Program should print
the sum of all the integers.For instance ,if the user enter 4;20;3;9
the program should print out 36. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int num,sum=0;
    int count;
    char string[100];
    char *temp[100];

   exit:
   printf("\nEnter a Sequence of Numbers Separated by Semicolons : ");
   for(int i=0;i==0;i++){
   scanf("%s",&string[i]);


   if((string[i]>=47 && string[i]<=57) || string[i]==57){



   char *token=strtok(string,";");
   for(int i=0;i<token;i++){
   while(token!= NULL)
   {
   temp[i]=token;
   i++;
   count=i;
   token=strtok(NULL,";");
   }
   }

   for(int i=0;i<count;i++)
    {
    num=atoi(temp[i]);
    sum=num+sum;
    }
     printf("\n=================================\n");
     printf("The Sum of All integers : %d",sum);
     printf("\n=================================\n");

   }else{
       printf("\n=================================\n");
       printf("It is not a Integer : %s",string);
       printf("\n=================================\n");
       goto exit;
   }
   }



   return 0;
}
