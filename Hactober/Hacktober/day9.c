/*Write a program that asks the user for their name and
prints out the "numerical value" of their name, where a=1,
b=2,...,z=26,and you add up the numerical values of each letter in
the name. For instance ,the numerical value of dave is 4+1+22+5=32.
You can assume the name is in all lowercase.*/

#include<stdio.h>
int main()
{
    char name[100];
    int name_num[100],sum=0,count=0;

    printf("\nEnter Your Name : ");
    gets(name);

    for(int i=0;name[i];i++){
        if(name[i]==32)
        {
         name_num[i]=name[i]-32;
         ++count;
        }else if(name[i]>=65 && name[i]<=90){
        name_num[i]=name[i]-64;
        ++count;

        }else{
        name_num[i]=name[i]-96;
        ++count;
        }
    }

    for(int i=0;i<count;i++){
        sum=name_num[i]+sum;
    }
    printf("\n=======================================\n");
    printf("Numerical Value For Your Name : %d",sum);
    printf("\n=======================================\n");

    return 0;
}
