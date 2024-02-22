#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void main(){
int count=0;
char string[100];
bool answer=true;
printf("\n Enter a Binary Number : ");
gets(string);
for(int i =0;string[i];i++){
++count;
}
bool IsBinary(char s[],int index){
static int temp=0;
if((index-1)!=-1){
if(s[temp]!='1' && s[temp]!='0'){
return false;
}
++temp;
IsBinary(s,index-1);
}
}
answer=IsBinary(string,count);
if(answer==true){
printf("\n This is a Binary Number : True\n");
}else{
printf("\n This is Not a Binary Number :False\n");
}
}
