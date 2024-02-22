#include<stdio.h>
void addOneToEverything(int[],int);
int main(){
int arr[]={1,3,7,9};
int num=4;
num=num-1;
printf("\n the increment values are : ");
addOneToEverything(arr,num);
printf("\n");
return 0;
}
void addOneToEverything(int arr[],int index)
{
if(index!=-1)
{
    addOneToEverything(arr,index-1);
    printf("%d ",arr[index]+1);
}

}

