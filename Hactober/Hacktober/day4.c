/* The three nummber A,B and C are the inputs.
write a program find second largest among them.
Don't put the numbers into array and sort it. think
by plating with operators (&&||) and output the result.
*/

#include<stdio.h>
int main()
{
    int A,B,C,middle;
     printf("=====================================");
    printf("\n|||Enter Three Numbers One by One |||\n");
     printf("=====================================");
    printf("\nEnter The First Number  : ");
    scanf("%d",&A);
    printf("\nEnter The Second Number : ");
    scanf("%d",&B);
    printf("\nEnter The Third Number  : ");
    scanf("%d",&C);

    if(A>B && A<C || A>C && A<B)//3123 312 10
    {
    printf("================================================");
    printf("\nThe Second Largest Among Three number is : %d\n",A);
    printf("================================================");
    }
    else if(B>A && B<C || B>C && B<A)
    {
    printf("================================================");
    printf("\nThe Second Largest Among Three number is : %d\n",B);
    printf("================================================");
    }
    else
    {
    printf("================================================");
    printf("\nThe Second Largest Among Three number is : %d\n",C);
    printf("================================================");
    }

    return 0;
}
