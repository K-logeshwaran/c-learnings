#include<stdio.h>
void main()
{
    int n,multi;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("\n");

    for(int i=1;i<n;i++){
       int temp=1;
      for(int j=1;j<n;j++){
        multi=i;
        multi=j*multi;
        if(multi<n){
            printf("  %d",multi);
        }else{
            multi=multi-(temp*n);
            printf("  %d",multi);
            if((i*(j+1)-(temp*n))>=n){
                ++temp;
            }
            }
        }
  printf("\n");
      }
    }

