#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,temp1,temp2,gcd,lcm,rem;
    printf("enter the two numbers\n");
    scanf("%d%d",&m,&n);
    temp1=m;
    temp2=n;
    while(n>0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }
    gcd=m;
    lcm=(temp1*temp2)/gcd;
    printf("The GCD of %d and %d elements is %d\n",temp1,temp2,gcd);
    printf("The LCM of %d and %d elements is %d\n",temp1,temp2,lcm);
    return 0;
}
