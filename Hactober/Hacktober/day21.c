#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void main(){
bool answer;
int count=0;
char word[100],letter[1];
printf("\n Enter a word : ");
gets(word);

printf("\n Which Letter To Check From the Word : ");
scanf("%c",&letter);

for(int i=0;word[i];i++){
    ++count;
}
bool contains(char s[],char ch[],int index){
static int temp=0;
if(index!=-1){
   if(ch[0]==s[index]){
     ++temp;
   }
   contains(s,ch,index-1);
}
if(temp>0){
    return true;
}else{
    return false;
}
}
answer=contains(word,letter,count);
if(answer==true){
    printf("\n (\"%s\",\'%c\') -> True\n",word,letter[0]);
}else{
   printf("\n (\"%s\",\'%c\') -> False\n",word,letter[0]);
}
}
