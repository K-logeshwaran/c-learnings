/*Write a program that asks the user to enter
their name in lowercase and then capitalizes the
first letter of each of their name. */

#include<stdio.h>
#include<string.h>
int main()
{
char name[100];
printf("\nEnter Your Name : ");
gets(name);

if(name[0]>=97 && name[0]<=122)
{
name[0]=name[0]-32;
for(int i=0;name[i];i++)
{
if(name[i]==32)
{
if(name[i+1]>=97 && name[i+1]<=122){
name[i+1]=name[i+1]-32;
}
}
}
}
else
{
    for(int i=0;name[i];i++)
{
if(name[i]==32)
{
if(name[i+1]>=97 && name[i+1]<=122){
name[i+1]=name[i+1]-32;
}
}
}
}

    printf("\nCapitalized First Letters : %s\n",name);
    return 0;
}
