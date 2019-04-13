#include<stdio.h>
typedef struct
{
    int num;
    int den;
}fraction;
int main()
{
    fraction f1,f2,f3;
    printf("enter numerator and denominator of fraction one\n");
    scanf("%d%d",&f1.num,&f1.den);
    printf("enter numerator and denominator of fraction two\n");
    scanf("%d%d",&f2.num,&f2.den);
    f3.num=f1.num*f2.den+f2.num*f1.den;
    f3.den=f1.den+f2.den;
    printf("first fraction is %d/%d\n",f1.num,f1.den);
    printf("second fraction is %d/%d\n",f2.num,f2.den);
    printf("resultant fraction is %d/%d\n",f3.num,f3.den);
}
