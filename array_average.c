#include<stdio.h>
int main()
{
    int array[5],avg=0;
    printf("enter marks obtained by 5 students\n");
    int i;
    for (i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("entered marks of students are \n");
    for (i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
        avg=avg+array[i];
    }
    printf("\n");
    printf("average marks of the class is %d",avg/5);
}
