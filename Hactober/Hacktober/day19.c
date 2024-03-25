#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,random_1,count=0;
exit:
printf("\n Enter The Value for N : ");
scanf("%d",&n);
int arr[n][n];
if(n<=100)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
    random_1=rand()%5+1;
    arr[i][j]=random_1;
    if(random_1==5)
    {
        ++count;
    }
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
    printf("%d ",arr[i][j]);
}
printf("\n");
}
printf("\n The Count of No.5 in the array : %d\n",count);
}
else
{
printf("\n You Are Entered Invalid Value \n       Please Try Again \n\a");
goto exit;
}
return 0;
}
