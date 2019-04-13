#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    int deg,n,i;
    float sum=0,x,num,den=1;
    printf("enter angle in deg\n");
    scanf("%d",&deg);
    printf("enter the no of terms\n");
    scanf("%d",&n);
    x=deg*PI/180;
    num=x;
    for (i=1;i<=n;i++)
    {
        sum=sum+num/den;
        num=-num*x*x;
        den=den*(i*2)*(i*2+1);
    }
    printf("sin of %d is %f\n",deg,sum);
    printf("sin of %d is %f\n",deg,sin(x));
}
