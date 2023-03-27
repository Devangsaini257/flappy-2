# include <stdio.h>
int main()
{

    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }

    printf("after reverse:");

    for(i=n;i>=0;i--)
    printf("\n%d",arr[i]);
  
       
   
    
    

    return 0;

}