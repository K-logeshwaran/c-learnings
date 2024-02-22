#include<stdio.h>
int main(){
int n;
printf("Enter a Integer : ");
scanf("%d",&n);
printf("\n============================================================================\n");
printf("\n                                RANGO RANGOLI                               \n");
printf("\n============================================================================\n");
printf("\n");
for(int i=n-1;i>-1;i--){//i=3-1  (i=2;2>-1;2--)
        for(int j=1;j<=i;j++){
            printf("--");
        }
        for(int j=n-1;j>i;j--){
            printf("%c",j+97);
            printf("-");
        }
        for(int j=i;j<n;j++){
            if(j!=n-1){
                printf("%c-",j+97);
            }else{
            printf("%c",j+97);
            }
        }
        for(int j=0;j<2*i;j++){
            printf("-");
        }
        printf("\n");
}
for(int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
        printf("--");
    }
    for(int j=n-1;j>i;j--){
        printf("%c",j+97);
        printf("-");
    }
    for(int j=i;j<n;j++){
        if(j!=n-1)
        {
            printf("%c",j+97);
            printf("-");
        }else{
            printf("%c",j+97);
        }
    }
    for(int j=0;j<2*i;j++){
        printf("-");
    }
    printf("\n");
}
printf("\n=============================================================================\n");
printf("\n                                RANGO RANGOLI                                \n");
printf("\n=============================================================================\n");
return 0;
}
