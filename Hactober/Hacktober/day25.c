#include<stdio.h>
#include<stdbool.h>
void main()
{
char word_1[100],word_2[100];
int count_1=0,count_2=0;
bool answer=false;
printf("\n Enter The First  Word : ");
gets(word_1);
printf("\n Enter The Second Word : ");
gets(word_2);

for(int i=0;word_1[i];i++){
    ++count_1;
}
for(int i=0;word_2[i];i++){
    ++count_2;
}
count_1-=1;
count_2-=1;
bool oneAway(char s[],char t[],int index_1,int index_2){
static int temp=0,check=0;
if(index_2!=-1){
    if(index_1==index_2){
        if(s[temp]!=t[temp]){
           ++check;
}
    }else{
    return false;
    }
    ++temp;
    oneAway(s,t,index_1-1,index_2-1);
    }
    if(check>0){
    return true;
    }
}
answer=oneAway(word_1,word_2,count_1,count_2);
if(answer==true){
printf("\n True \n");

}else{
printf("\n False \n");
}
}


