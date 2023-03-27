#include <stdio.h>
int main()
{
    int n,arr[100],i,pos;
    printf("enter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element:");
        scanf("%d",&arr[i]);
    }

    printf("enter position to delete:");
    scanf("%d",&pos);

    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    
    printf("after delete:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}