#include<stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d ",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

  
      
    int max = -1 ;

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }


    printf("%d",max);    
    return 0;



}