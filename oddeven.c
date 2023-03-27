#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int even_count=0; 
    int odd_count=0;

    for(int i=1;i<=10;i++){
        if(arr[i]%2==0){
            even_count++;
            
        }

        else{
            odd_count++;
        }
    }

    printf("total even element of array %d\n",even_count);
    printf("total odd element of array %d",odd_count);


    return 0;
}