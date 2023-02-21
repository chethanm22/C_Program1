#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],srch[100],str2[100];
    printf("Enter the string\n");
    gets(str1);

    printf("Enter the string to be searched\n");
    gets(srch);

    if(strstr(str1,srch)==NULL)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}