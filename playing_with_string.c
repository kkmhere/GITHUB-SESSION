#include<stdio.h>
int main()
{
    char str[100];
    char* str1[100];
    int i=0,j;
    printf("enter the string\n");
    gets(str);
    printf("entered string is %s\n",str);
    for(;str[i]!='\0';i++)
        {
                str1[i]=&str[i];
          //  for(j=0;j<=i;j++)
            //{
                if(str[i]=='a'||'e'||'i')
                    *str1[i]==' ';
            //}
        }
    printf("final string after modification is %s\n",str);
}
