#include<stdio.h>
int main(){
int n;
printf("\n");
printf(" Enter an Integer : ");
scanf("%d",&n);
printf("\n");
int arr[n][n];
for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {

    if(i%2==0)
    {
       if(j%2==1)
    {
       arr[i][j]=2;
       printf(" %d ",arr[i][j]);
    }
    else
    {
        arr[i][j]=1;
        printf(" %d ",arr[i][j]);
    }
    }else
    {
        if(j%2==1)
    {
       arr[i][j]=1;
       printf(" %d ",arr[i][j]);
    }else
    {
        arr[i][j]=2;
        printf(" %d ",arr[i][j]);
    }
    }
}
printf("\n");
}
return 0;
}
