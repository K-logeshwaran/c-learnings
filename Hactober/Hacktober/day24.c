#include<stdio.h>
void main(){
int digital_root,answer=0;
start :
printf("\n Enter a Number To Find Digital Root : ");
scanf("%d",&digital_root);
if(digital_root>=0){
int digitalRoot(int n){
    static int modul,value;
if(n!=0){
  modul=n%10;
  value=value+modul;
  n=n/10;
  if(value>9){
     modul=value%10;
     value=value/10;
     value=value+modul;
  }
  digitalRoot(n);
}
return value;
}
answer=digitalRoot(digital_root);

printf("\n Digital Root of %d is : %d\n",digital_root,answer);
}else{
printf("\n You are Entered a Negative Number : %d \"TRY AGAIN\"\a\n",digital_root);
goto start;
}
}
