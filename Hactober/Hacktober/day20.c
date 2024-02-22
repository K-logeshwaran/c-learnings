#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void main()
{
int count=0;
bool answer=true;
char name[100];
printf(" Enter a word : ");
gets(name);
for(int i=0;name[i];i++)
{
++count;
}
count=count-1;

bool hasconsecutiverepeat(char s[],int index)
{
static int temp=0;

if(index!=-1)
{
    if(s[index+1]==s[index]){
        ++temp;
    }
hasconsecutiverepeat(s,index-1);

}
if(temp>0)
{
return true;
}else
{
return false;
}
}
answer=hasconsecutiverepeat(name,count);

if(answer==true){
printf("\n  The word is : %s \n  Consecutive Word : True \n",name);
}
else
{
printf("\n  The word is : %s \n  Consecutive Word : False \n",name);
}
}

