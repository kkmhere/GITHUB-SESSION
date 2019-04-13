#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    printf("enter the lower range\n");
    scanf("%d",&a);
    printf("enter the upper range\n");
    scanf("%d",&b);
    printf("prime no in the given range are\n");
    for (;a<=b;a++)
    {
        for (i=1;i<=a;i++)
        {
            if (a%i==0)
                count=count+1;
            else
                count=count;
        }
            if (count==2)
                printf("%d  ",a);
            count=0;
    }
}
