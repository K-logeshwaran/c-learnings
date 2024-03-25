#include<stdio.h>
#include<stdbool.h>
void main(){
int storage=0;
bool answer=false;
printf("\n Enter How Many Number You Want To Sort : ");
scanf("%d",&storage);
int n[storage];
for(int i=0;i<storage;i++){
    printf("\n Enter Value for Array List n[%d]  : ",i+1);
    scanf("%d",&n[i]);
}
bool containsNegativePair(int ArrayList[],int index){
    static int temp=0,ans=0;

    if(index!=0){

            if(((ArrayList[temp])+(ArrayList[temp+1]))==0){

              ++ans;
            }
            ++temp;
    containsNegativePair(ArrayList,index-1);
    }
    if(ans>0){
        return true;
    }else{
    return false;
    }
}

answer=containsNegativePair(n,storage);
if(answer==true){
    printf("\n \n TRUE \n");
}else{
    printf("\n \n FALSE \n");
}
}
