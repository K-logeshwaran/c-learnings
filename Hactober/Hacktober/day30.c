#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
int n;
printf("\n Enter a Number : ");
scanf("%d",&n);
printf("\n");

int array[n][n],total=0,pair=0,count=0,r=0,c=0,count_2=0,p=0,t=0;
total=n*n;
pair=total/2;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        array[i][j]=0;
    }
}
srand(time(NULL));
for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

       int random_1=rand()%126+1;
       for(int i=random_1;33>random_1;i++){
        random_1=rand()%126+1;
       }
       if(pair>count){
        array[i][j]=random_1;
        ++count;


       }else{
             if(t==n){
                ++p;
                t=0;
             }
              for(int v=0;v<n/2;v++){
                for(int g=0;g<n;g++){

                    if(array[p][t]==array[v][g]){
                        ++count_2;
                    }
                         if(count_2>=2){
             random_1=rand()%126+1;
           for(int i=random_1;33>random_1;i++){
        random_1=rand()%126+1;
       }
              array[v][g]=random_1;
                         count_2=0;
                       }
                }
              }
            count_2=0;
            ++t;
        if(array[r][c]!=array[i][j]){
        array[i][j]=array[r][c];
                }
        ++c;
        if(c==n){
            ++r;
            c=0;
        }
       }
    }
}
int check=1;
if(total%2!=0){
        int random_2=rand()%126+1;
        for(int i=random_2;33>random_2;i++){
        random_2=rand()%126+1;
        for(int o=1;o<=check;o++)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(array[i][j]==random_2){
            ++check;
            random_2=rand()%126+1;
           for(int i=random_2;33>random_2;i++){
        random_2=rand()%126+1;
       }
        }
            }
        }
}
array[n-1][n-1]=random_2;

}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int array[n][n],int n)
{
    for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    printf(" %c ",array[i][j],array[i][j]);
        }
    printf("\n");
    }
}
void randomize(int array[n][n],int n)
{
    srand(time(NULL));
    for (int i= n-1; i > 0; i--){
    for(int k=n-1;k>0;k--){
    int j=rand()%(i+1);
    int u=rand()%(k+1);
      swap(&array[i][k],&array[j][u]);
}
    }
}
randomize(array,n);
printf("\n");
printArray(array,n);
}
