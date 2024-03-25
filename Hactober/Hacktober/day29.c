#include<stdio.h>
#include<stdbool.h>
void main()
{
    int memory_1,memory_2;
    bool answer;
    printf("\n Enter The 1st List Size : ");
    scanf("%d",&memory_1);
    printf("\n Enter The 2nd List Size : ");
    scanf("%d",&memory_2);
    int number_list_1[memory_1],number_list_2[memory_2];
    printf("\n===============================\n");
    printf("\n Enter %d Numbers For List 1\n",memory_1);
    printf("\n===============================\n");
    printf("\n Enter The Numbers One By One\n");
    printf("\n===============================\n");
    printf("\n");
    for(int i=0;i<memory_1;i++){
        printf(" list_1[%d] : ",i+1);
        scanf("%d",&number_list_1[i]);
    }
    printf("\n===============================\n");
    printf("\n Enter %d Numbers For List 2\n",memory_2);
    printf("\n===============================\n");
    printf("\n Enter The Numbers One By One\n");
    printf("\n===============================\n");
    printf("\n");
    for(int i=0;i<memory_2;i++){
        printf(" list_2[%d] : ",i+1);
        scanf("%d",&number_list_2[i]);
    }
   bool sameElements(int List_1[],int List_2[],int index_1,int index_2,int index1,int index2){
   static int temp=0,ans=0;

            for(int i=0;i<index1;i++){
                    for(int j=i+1;j<index1;j++){
                        if(List_1[i]>List_1[j]){
                            int temp;
                            temp=List_1[i];
                            List_1[i]=List_1[j];
                            List_1[j]=temp;
                        }
                    }
            }
             for(int i=0;i<index2;i++){
                    for(int j=i+1;j<index2;j++){
                        if(List_2[i]>List_2[j]){
                            int temp;
                            temp=List_2[i];
                            List_2[i]=List_2[j];
                            List_2[j]=temp;
                        }
                    }
            }

         if(index_1!=0){
          if(index1!=index2){
            return false;
          }
              if(List_1[temp]!=List_2[temp]){
                ++ans;
              }

            ++temp;
            sameElements(List_1,List_2,index_1-1,index_2,index1,index2);
        }
        if(ans==0){
            return true;
        }else{
            return false;
        }
    }
    answer=sameElements(number_list_1,number_list_2,memory_1,memory_2,memory_1,memory_2);
    if(answer==true){
    printf("\n===============================\n");
    printf(" TRUE ");
    printf("\n===============================\n");
    }else{
    printf("\n===============================\n");
    printf(" FALSE ");
    printf("\n===============================\n");
    }
}
