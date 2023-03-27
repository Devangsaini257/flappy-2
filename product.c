#include<stdio.h>
int main(){
    int arr[5] = {1,3,4,5,6};

    int mul = 1;
    for (int i=0;i<=4;i++){
        mul = mul*arr[i];
    }

    printf("%d ",mul);

    return 0;

    
}