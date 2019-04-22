#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,n;
    printf("enter a string\n");
    gets(a);
    printf("entered string is\n");
    puts(a);
    n=strlen(a);
    /*printf("reverse of the string is \n");
    b[100]=strrev(a);
    printf("%s\n",b);
    n=strlen(a);
    printf("length of the entered string is %d\n",n);
    printf("reverse of the string is\n");
    for (i=n-1;i>=0;i--)
    {
       printf("%c",a[i]);
       //printf("\n");
    }*/
    for (i=0;a[i]!='\0';i++)
    {
        while(a[i]!=' ')
        {
            for(i=n-1;i>=)
            printf("%c",a[i]);
        }
    }
}
