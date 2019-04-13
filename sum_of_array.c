#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("your entered array is\n");
    for (i=0;i<n;i++)
        printf("%d  ",arr[i]);
    printf("\n");
    for (i=0;i<n;i++)
        sum=sum+arr[i];
    printf("the sum of all the elements in the given array is %d",sum);
}
