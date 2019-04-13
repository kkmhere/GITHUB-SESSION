#include<stdio.h>
//void readarray(int,int,int*);
//void displaymatrix(int,int);
int main()
{
    int a[10][10],b[10][10],r1,r2,c1,c2,i,j,sum1=0,sum2=0;
    printf("enter the row and column of matrix one\n");
    scanf("%d%d",&r1,&c1);
    printf("enter row and column of matrix two\n");
    scanf("%d%d",&r2,&c2);
    printf("enter elements of matrix one\n");
    for (i=1;i<=r1;i++)
        for (j=1;j<=c1;j++)
            scanf("%d",&a[i][j]);
    printf("\nyour entered matrix is \n");
    for (i=1;i<=r1;i++)
        {
            for (j=1;j<=c1;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }
    printf("sum of each row of the matrix is\n");
    for (j=1;j<=c1;j++)
       {
           sum1=sum1+a[1][j];
           sum2=sum2+a[2][j];
       }
    printf("sum of row one is %d\n",sum1);
    printf("sum of row two is %d\n",sum2);
   /* printf("the transpose of above matrix is \n");
    for (i=1;i<=r1;i++)
        {
            for (j=1;j<=c1;j++)
            {
                printf("%d  ",a[j][i]);
            }
            printf("\n");
        }*/
    printf("enter elements of matrix two\n");
    for (i=1;i<=r2;i++)
        for (j=1;j<=c2;j++)
            scanf("%d",&b[i][j]);
    printf("\nyour entered matrix is \n");
    for (i=1;i<=r2;i++)
        {
            for (j=1;j<=c2;j++)
            {
                printf("%d  ",b[i][j]);
            }
            printf("\n");
        }
    printf("sum of the given matrix is\n");
    if (r1==r2 && c1==c2)
    {
        for (i=1;i<=r2;i++)
        {
            for (j=1;j<=c2;j++)
            {
                printf("%d  ",a[i][j]+b[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("matrix addition not possible as the row and column are not same\n");
}
