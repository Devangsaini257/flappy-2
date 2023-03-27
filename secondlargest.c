#include <stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d ",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    int largest = 0;
    int second_largest = 0;
    for(int i=0;i<n;i++){

        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }

        else if(largest!=arr[i] && arr[i]>second_largest){
            second_largest=arr[i];
        }

    }

    printf("second largest value of array is %d",second_largest);

    return 0;
}