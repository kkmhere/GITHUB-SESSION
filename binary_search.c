#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,no,mid,high,low,i;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array in ascending order\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("entered array is\n");
    for (i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\n");
    printf("enter the no to search\n");
    scanf("%d",&no);
    low=0;
    high=n;
    for (i=0;i<n;i++)
    {
        mid=(low+high)/2;
        if (no==a[mid])
        {
            printf("no found at %d",mid+1);
            exit(0);
        }
        else if (no>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    printf("no not found\n");
}
