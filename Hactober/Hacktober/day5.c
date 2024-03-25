/*Write a program to check whether a triangle
is valid or not,When the three angles of the
triangle are the input. angle is valid if the
sum of all the three angles is equal to 180 degrees */
#include<stdio.h>
int main()
{
    int angle_1,angle_2,angle_3,sum;

    printf("\nEnter the Three angles one by one\n");
    printf("\nEnter The First Angle  : ");
    scanf("%d",&angle_1);
    printf("\nEnter The Second Angle : ");
    scanf("%d",&angle_2);
    printf("\nEnter The Third Angle  : ");
    scanf("%d",&angle_3);

    sum=angle_1+angle_2+angle_3;

    if(sum==180 && angle_1>0 && angle_2>0 && angle_3>0)
    {
        printf("\nThis is valid triangle : True\n");
    }
    else
    {
        printf("\nThis is not a valid triangle :Flase\n");
    }
return 0;
}
