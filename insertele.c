#include<stdio.h>
int main()
{
    int a[10],i,j,pos,val;
    for(i=0;i<9;i++)
    {
        printf("\n enter number: ");
        scanf("%d",&a[i]);
    }
    printf("\n enter index to insert:");
    scanf("%d",&pos);
    printf("\n enter value to insert:");
    scanf("%d",&val);
    for(i=8;i>=pos;i--)
    a[i+1]=a[i];
    a[pos]=val;
    printf("after insertation array");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);

    return 0;
    

}
    