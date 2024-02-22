/*Given an integer N ,write a program to ​
​reverse the number.(You're not allowed to ​
​convert the number to string).*/

#include <stdio.h>
int main() {

  int N,remainder,reverse=0;

  printf("Enter The Number : ");
  scanf("%d", &N);

  while(N!=0)
{
  remainder=N%10;
  reverse=reverse*10+remainder;
  N=N/10;
}
  printf("===========================\n");
  printf("Reversed Number : %d\n", reverse);
  printf("===========================");

  return 0;
}
