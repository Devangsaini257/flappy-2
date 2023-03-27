#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a[5]={1,2,3,4,5};
    int b[n];

    for(int i=0;i<n;i++){
        b[i]=a[i];
    }

    printf("The first array is:");
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    print("The second array is:");
    for(int i=0;i<n;i++){
        scanf("%d ",&b[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    return 0;
}