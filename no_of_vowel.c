#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int count=0,r=0;
    printf("enter the string\n");
    gets(str);
    printf("entered string is: %s\n",str);
    printf("the length of the given string is %d\n",strlen(str));
    while (str[r]!='\0')
    {
      switch (str[r])
      {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':count=count+1;
          break;
          default:count=count;
      }
      r++;
    }
    printf("no of vowel in the given string is %d",count);
}
