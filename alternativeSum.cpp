#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the size of array :");
    scanf("%d",&num);
    int arr[num];
    int i;
    for( i=0;i<num;i++){
        printf("Enter the %d , number :",i+1);
        scanf("%d",&arr[i]);
       
    }
    for(i=0;i<num;i++){
        while(i<num){
            sum +=arr[i];
            i +=2;
        }
        printf("sum every alternate elements of a given array :%d",sum);
    }
    
    return 0;
}
